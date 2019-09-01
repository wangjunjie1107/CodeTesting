#include<stdio.h>
#include<ctype.h>

//函数tolower在头文件<ctype.h>中定义
//它把大写字母转换为小写形式
//并且把其他字符原样返回 

int main()
{
	int c;
	while((c = getchar()) != EOF)
		putchar(tolower(c));
	return 0;
 } 
