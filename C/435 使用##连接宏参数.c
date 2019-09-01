#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

// 可以使用 #  把宏参数变为一个字符串
#define STR(s)  #s

// 可以使用 ## 把两个宏参数贴合在一起
#define CONS(a,b) (int)(a##e##b)

void test01()
{
	printf(STR(hello));
	printf("\n");
	printf("%d\n", CONS(2, 3));  // 2e3 = 2000
}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
