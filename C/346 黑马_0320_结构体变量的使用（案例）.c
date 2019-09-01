#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<float.h>

struct Person
{
	char name[64];
	int age;
	//int age = 18; //C�����²����Ը��ṹ�帳��ֵ
	//void fun() {}; //  //C�����½ṹ���� �����Էź���
};


//��һ�ֶ���
typedef struct Person
{
	char name[64];
	int age;
}MyPerson;
void test01()
{
	MyPerson p1 = { "aaa",18 };
}

//�ڶ��ֶ���
struct Person2
{
	char name[64];
	int age;
}MyPerson2 = { "bbb", 65 }; //�˴� myPerson2�ǽṹ�����
void  test02()
{
	strcpy(MyPerson2.name, "aaa");
	MyPerson2.age = 18;
}

//�����ֶ���
struct
{
	char name[64];
	int age;
}MyPerson3 = { "22fwe",22 };// ������ �ṹ�����
void test03()
{
	strcpy(MyPerson3.name, "adafe");
	MyPerson3.age = 12;
}


//�ṹ������ڴ� �� ջ 
void test04()
{
	//��ջ��
	struct Person p1 = { "zhangsan", 22 };

	//�ڶ���
	struct Person * p2 = malloc(sizeof(struct Person));
	strcpy(p2->name, "wfwa");
	p2->age = 17;

	free(p2);
}

//��ӡ�ṹ���������
void printPerson(struct Person arr[], int len)
{
	for (int i = 0; i < len;i++)
	{
		printf("%s %d\n", arr[i].name, arr[i].age);
	}
}

//�ṹ���������
void test04()
{
	//��ջ�Ϸ���
	struct Person personArray[] =
	{
		{ "aaa", 10 },
		{ "bbb", 20 },
		{ "ccc", 30 },
		{ "ddd", 40 },
	};
	int len = sizeof(personArray) / sizeof(struct Person);
	printPerson(personArray, len);




	//�ڶ��������ڴ�
	struct Person * pArray = malloc(sizeof(struct Person) * 4);
	for (int i = 0; i < 4; i++)
	{ 
		sprintf(pArray[i].name, "name_%d", i + 1);
		pArray[i].age = i + 18;
	}
	//��ӡ�ṹ�����
	printPerson(pArray, 4);
	if (pArray != NULL)
	{
		free(pArray);
		pArray = NULL;
	}
}


int main()
{
	test04();


	system("pause");
	return EXIT_SUCCESS;
}
