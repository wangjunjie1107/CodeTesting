#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//空指针   不允许向NULL和非法地址拷贝 
void test01()
{
	char *p = NULL;
	//给p指向的内存区域拷贝内容 
	strcpy(p,"111"); //error
 } 
 
 int * dowork()
 {
 	int a = 10;
 	int * p = &a;
 	return p;
  } 
 
//野指针
void test02()
{
	int * p;  //未初始化指针 
	printf("%d\n", *p);
	
	//malloc后也freel，但是指针没有置为空
	
	int * = malloc(sizeof(int));
	
	* p = 100;
	
	free(p); //未置空，野指针
	
	p = NULL //应该置空，防止野指针出现 
		
	//指针操作超越变量作用域 
	int * p2 = dowork();
	printf("%d\n", *p2);  //p2就是野指针 
	printf("%d\n", *p2);
		
	 
 } 
 
 void test03()
 {
 	int * p = NULL;
 	free(p); //空指针是可以释放的
	free(p);
	free(p);
	 
	int * p2 = malloc(4);
	free(p2);
	free(p2); 
  } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
