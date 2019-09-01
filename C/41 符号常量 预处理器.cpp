#include<stdio.h>

#define PRAISE "You are an extraordinary being." 
 //编译时替换 习惯上用大写表示符号常量  

int main(void)
{
	char name[40];
	
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	
	return 0;
	
}
