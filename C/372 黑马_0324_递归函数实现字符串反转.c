#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//递归函数实现字符串反转打印
void reverseStr(char * Str)
{
	if (*Str == '\0')
	{
		return;//递归函数必须要有return
		//递归的结束条件
	}

	reverseStr(Str + 1);
	printf("%c", *Str);
}

void test()
{
	char * Str = "wangjunjie";

	reverseStr(Str);
}


int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
