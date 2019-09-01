#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> //offsetof的头文件 


//指针的步长的意义 
//1 指针变量+1 之后  跳跃的字节数量 
void test01()
{
	char * p = NULL;
	printf("%d\n", p);
	printf("%d\n", p+1);
	
	double * p2 = NULL;
	printf("%d\n", p2);
	printf("%d\n", p2+1); 
}

//2 解引用的时候，取的字节数
void test02()
{
	char buf[1024] = {0};
	
	int a = 1000;
	
	memcpy(buf,&a,sizeof(int));
	
	char * p = buf;//通过p找到buf的首地址
	
	printf("buf中的a = %d\n",*(int *)p);
	 
	
	
 } 
 
 struct Person
 {
 	char a; //0-3
 	int b;  //4-7 
 	char buf[64]; //8-71
 	int d;//72-75

 };

void test03()
{
	struct Person p1 = {'a',10,"hello world",1000};

 	//计算结构体中，属性的偏移量
	 printf("p1.d的偏移量为: %d\n", offsetof(struct Person,d)); 

	//打印d的值
	printf("p1.d的值为： %d\n",*(int*)((char*)&p1 + offsetof(struct Person,d)));
}

int main()
{
	test03();
	
	return 0;
 } 

























