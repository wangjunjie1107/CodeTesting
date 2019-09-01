#define _CRT_SRCURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void test01()
{
	char * p = "helloworld@itcast.cn";

	char p1[1024] = { 0 };
	char p2[1024] = { 0 };

	sscanf(p, "%10s", p1);
	sscanf(p, "%*[^@]@%s", p2); //可以在后面直接连起来 

	printf("%s ", p1);
	printf("%s\n", p2);

}

void test02()
{
	char * p = "wihgri3253#@$%#$wangjunjie@@3rnesgon";

	char p1[1024] = { 0 };


	sscanf(p, "%*6s%*d%*[^w]%10s", p1);


	printf("%s\t", p1);
}

void test03()
{
	char * p = "127.0.0.1";

	char p1[1024] = { 0 };

	int num1;
	int num2;
	int num3;
	int num4;
	
	sscanf(p, "%d.%d.%d.%d", &num1, &num2, &num3, &num4); //传入的是地址，要加取值符号 


	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num3 = %d\n", num3);
	printf("num4 = %d\n", num4);
}

int main()
{

	test01();
	//test02();
	//test03();
	
	system("pause");
	return EXIT_SUCCESS;
}
