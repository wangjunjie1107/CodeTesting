#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//����Ҫ�ĺ���
//����1 ���������׵�ַ ����2 ������ÿ��Ԫ��ռ���ڴ�ռ� ����3 ���鳤��
//void(*myPrint)(void *)  ����ָ�� ָ����ĺ���
void printAllArray(void * arr, int eleSize, int len, void(*myPrint)(void *))
{
	char * p = arr;//����pָ����������׵�ַ
	for (int i = 0;i < len;i++)
	{
		//��ȡÿ��Ԫ���׵�ַ  �׵�ַ+ÿ���������͵�ƫ��
		char * pAddr = p + eleSize * i;

		//printf("%d\n",*(int)pAddr);
		myPrint(pAddr);
	}
}


//��ӡint���͵�����
void printInt(void * data)
{
	int * num = data;
	printf("%d\n", *num);
}
void test01()
{
	int arr[] = { 1,2,3,4,5,6 };
	int len = sizeof(arr) / sizeof(int);
	//�����еĲ��� printInt  չʾ�˺�������ʹ�û�������ӡ�������͵����� 
	printAllArray(arr, sizeof(int), len, printInt);
}


//��ӡ�ṹ������
struct Person
{
	char name[64];
	int age;
};
void printPerson(void * data)
{
	struct Person * person = data;
	printf("����:%s  ����: %d\n", person->name, person->age);
}
void test02()
{
	struct Person personArray[] =
	{
		{ "aaa", 18 },
		{ "bbb", 19 },
		{ "ccc", 20 },
		{ "ddd", 21 },
	};

	int len = sizeof(personArray) / sizeof(struct Person);
	//printPerson ��ʾ�˺���ָ��ʵ���˿������û�������ӡ�������͵�����
	printAllArray(personArray, sizeof(struct Person), len, printPerson);

}


//�����������Ƿ���ָ�����͵�Ԫ�أ�����з���1�����û�з���0
//int(*comparePerson)(void *, void *) ����ָ�� ��������Ϊint
int findArrayEle(void * array, int eleSize, int len, void  * data, int(*comparePerson)(void *, void *))
{
	char * p = array;
	
	for (int i = 0;i < len;i++)
	{
		//��ȡ��ÿ��Ԫ���׵�ַ
		char * eleAddr = p + eleSize * i;

		//if(�û���������� == �����б�����Ԫ�أ�
		//if(data == eleAddr) ���� ������ֱ���õ�ַ���Ƚ�
		if (comparePerson(data, eleAddr))
		{
			return 1;
		}
	}
	return 0;
}
int comparePerson(void * data1, void *data2)
{
	struct Person * p1 = data1;
	struct Person * p2 = data2;

	//���������� ����������� ������
	if (strcmp(p1->name, p2->name) == 0 && p1->age == p2->age)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void test03()
{
	//�����������Ƿ���ָ�����͵�Ԫ�أ�����з���1�����û�з���0
	struct Person personArray[] = 
	{
		{ "aaa", 18 },
		{ "bbb", 19 },
		{ "ccc", 20 },
		{ "ddd", 21 },
	};

	int len = sizeof(personArray) / sizeof(struct Person);

	struct Person source = { "ccc",20 };

	//comparePerson �ĺ����� ��ʾ�˿������û�������ȥ������Щ����ʹ�ã���Ҳ�Ǻ���ָ��ķ���֮��
	int ret = findArrayEle(personArray, sizeof(struct Person), len, &source, comparePerson);
	
	if (ret)
	{
		printf("�ҵ�Ԫ��\n");
	}
	else
	{
		printf("δ�ҵ�\n");
	}
}


int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}