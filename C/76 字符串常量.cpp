#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//字符串常量 
void test03()
{
	char *p1 = "hello";
	char *p2 = "hello";
	char *p3 = "hello";
	
	printf("%d\n",p1); 
	printf("%d\n",p2);
	printf("%d\n",p3);
	printf("%d\n",&"hello");
	
	p1[0] = 'z'; //不允许修改字符串常量 
	printf("%c\n",p1[0]);
}

int main()
{
	test03();
	return 0;
}
