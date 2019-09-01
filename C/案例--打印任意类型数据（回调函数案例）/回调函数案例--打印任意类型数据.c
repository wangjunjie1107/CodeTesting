#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ṩһ�����������Դ�ӡ������������
void myPrint(void * data, void(*myPrint)(void *))
{
	//double * num = data;
	//printf("%f\n",num);

	myPrint(data);
}

struct Person {
	char name[64];
	int age;
};

void printInt(void * data)
{
	int * num = data;
	printf("%d\n", *num);
}

void printDouble(void * data)
{
	double * num = data;
	printf("%f\n", *num);
}

void printPerson(void * data)
{
	struct Person * person = data;
	printf("������%s ���䣺%d\n", person->name, person->age);
}
void test()
{
	int a = 10;
	myPrint(&a, printInt);

	double b = 3.14;
	myPrint(&b, printDouble);

	struct Person p1 = { "aaa",22 };
	myPrint(&p1, printPerson);
}

int main()
{
	test();


	system("pause");
	return EXIT_SUCCESS;
}