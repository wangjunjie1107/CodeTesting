#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>




int main()
{
	
	//字符输入和输出
	char a;
	a = getchar();
	putchar(a);
	
	//换行效果不同 
	printf("\n");
	//puts("\n");
	
	//文本行输入和输出 ????? gets函数如何使用？ 
	 puts("wangjunjie");

	
	char q2[20] = { 0 };
	scanf("%s", q2);
	printf("%s\n", q2);
	
	system("pause");
	return EXIT_SUCCESS;
}
