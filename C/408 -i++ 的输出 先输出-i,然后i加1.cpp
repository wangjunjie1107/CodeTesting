#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void test01()
{
	int i = 1;  
	printf("%d\n", -i++);
	printf("%d\n", i);
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
