#include<stdio.h>
#include<string.h>

int main()
{
	char a[20] = "Wang";
	char b[20] = " junjie";
	char c[20];
	char D[20];
	
	int d = strlen(a);  //测定字符串长度,不包括字符数组结束符 \n 
	strcpy(c,a); //字符串拷贝
	strcat(a,b) ; //字符串连接
	
	printf("%d\n", d);
	printf("%s\n", c);
	printf("%s\n", a);
	
	gets(D);  //头文件为stdio.h  更为方便的字符串输入输出函数 
	puts(D);  //gets()可以接收字符串中的空格，而scanf()不行。 
	
	return 0;
	
	
 } 
