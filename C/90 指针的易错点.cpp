#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void  test01()
{
	char * p = malloc(sizeof(char)*12);
	
	//利用临时指针，操作里面的内存
	char * pp = p;
	
	for(int i = 0; i < 10; i++)
	{
		*pp = i + 97;
		printf("%c", *pp);
		pp++; //申请的首地址指针偏移后，就不可以利用这个指针释放堆区了。 
	} 
	
	if(p != NULL)
	{
		free(p);
		p = NULL;
	}
	 
 } 
 
 int main()
 {
 	test01();
 	
 	return 0;
 }
