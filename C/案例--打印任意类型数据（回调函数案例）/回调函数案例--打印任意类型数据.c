#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//提供一个函数，可以打印任意类型数据
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
	printf("姓名：%s 年龄：%d\n", person->name, person->age);
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