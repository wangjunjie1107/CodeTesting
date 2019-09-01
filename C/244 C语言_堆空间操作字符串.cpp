#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void test()
{
	//开辟多大堆空间 就要操作多大堆空间
	char *p = (char *)malloc(sizeof(char) * 20);
	
	strcpy(p, "Hello wangjunjie");
	
	printf("%s", p);
	
	free(p);
	
	
 } 
 
 void test2()
 {
 	char arr[100] = "hello world";
 	arr[1] = 'A';
 	char * p = (char *)malloc(sizeof(char) * 100);
 	
 	char * p1 = "hello world";
 	char * p2 = "hello world";
 	
 	// p1 和 p2 地址相同 
 	printf("%p\n", p1);
 	printf("%p\n", p2); 
 	
 	strcpy(p, "hello world");
 	*p = 'A';
 	printf("%p\n", p);
 	printf("%s\n", p);
 	
 	free(p);
 
 }
 
 int main()
 {
 	test2();
 	
 	return 0;
 }
