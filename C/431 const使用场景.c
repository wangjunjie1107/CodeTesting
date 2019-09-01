#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


struct Person
{
	char name[64];
	int age;
	int Id;
	double score;
};


void printPersonInfo(const struct Person * p)
{
	//p->age = 200; //error 不能修改

	printf("姓名：%s\n", p->name);
}

void test01()
{

	printf("sizeof struct Person = %d\n", sizeof(struct Person));  // 80

	struct Person p1 = { "wangjunjie",18,2019,99 };


	printPersonInfo(&p1);

	printf("姓名：%s\n", p1.name);
}


int main()
{
	test01();

	system("pause"); 
	return EXIT_SUCCESS;
}


