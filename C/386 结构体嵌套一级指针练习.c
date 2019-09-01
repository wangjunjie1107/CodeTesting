#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//�ṹ�����
struct Person
{
	char * name;
	int age;
};

//����ռ䲢�Ҹ�ֵ  
//Ҫ�ٿ�һ��ָ��  ���ݵĲ���������һ��ָ��ĵ�ַ��Ҳ�����βα���Ϊ����ָ��
void allocateSpace(struct Person ** myPerson)
{
	if (myPerson == NULL)
	{
		return;
	}
	
	struct Person * temp = malloc(sizeof(struct Person));

	temp->name = malloc(sizeof(char)*64);
	strcpy(temp->name, "wangjunjie");
	//sprintf(temp->name, "%d wangjunjie", 1);
	temp->age = 22;

	*myPerson = temp;
}


//��ӡ��Ա��Ϣ
void printPerson(struct Person ** myPerson)
{
	if (myPerson == NULL)
	{
		return;
	}

	printf("������%s  ���䣺%d\n", (*myPerson)->name, (*myPerson)->age);
}

//�ͷŶ�������
void freeSpace(struct Person * myPerson)
{
	if (myPerson == NULL)
	{
		return;
	}

	if (myPerson->name != NULL)
	{
		printf("%s���ͷ��ˣ�\n",myPerson->name);
		free(myPerson->name);
		myPerson->name = NULL;
	}

	free(myPerson);

}
void test()
{
	//�����ڴ�ռ�
	struct Person * myPerson = malloc(sizeof(struct Person));

	//�����ڴ沢��ֵ
	allocateSpace(&myPerson);

	//��ӡ��Ա��Ϣ
	printPerson(&myPerson);

	//�ͷŶ�������
	freeSpace(myPerson);
	myPerson = NULL;

}
int main()
{

	test();
	system("pause");
	return EXIT_SUCCESS;
}
