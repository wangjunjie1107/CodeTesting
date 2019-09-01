#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>

int main()
{
	//三字母词
	printf("\n三字母词\n");

	printf("??( 表示 [\n");
	printf("??) 表示 ]\n");
	printf("??! 表示 |\n");
	printf("??< 表示 {\n");
	printf("??> 表示 }\n");
	printf("??' 表示 ^\n");
	printf("??= 表示 #\n");
	printf("??/ 表示 \\\n");
	
	//转义序列
	printf("\n转义序列\n");
	printf("\\\? 表示 ?\n");
	printf("\\\" 表示 \"\n");
	printf("\\\' 表示 \'\n");
	printf("\\\\ 表示 \\\n");

	//转义字符
	printf("\n转义字符\n");
	printf("\\\a 表示警告字符，响铃 \a\n");
	printf("\\\b 表示退格键\n");
	printf("\\\f 表示进纸字符？？？\n");
	printf("\\\n 表示换行符\n");
	printf("\\\r 表示回车符\n");
	printf("\\\t 表示水平制表符\n");
	printf("\\ddd 表示1-3个八进制数字\n");
	printf("\\xddd 表示1-3个十六进制数字\n");







	system("pause");
	return EXIT_SUCCESS;
}
