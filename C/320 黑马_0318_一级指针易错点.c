#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//数组下标越界 造成打印错误
void test01()
{
	char buf[3] = "abc";
	printf("%s\n", buf);
}

//指针叠加会不断的改变指针的指向，从而可以访问不同的内存
void test02()
{
	char *p = (char *)malloc(sizeof(char) * 20);
	char buf[] = "abcdefg";

	int n = strlen(buf);
	int i;

	for (i = 0; i < n; i++)
	{
		*p = buf[i];
		printf("%c", *p);

		//修改指针的指向
		p++;
		
	}
	
}
int main()
{
	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
