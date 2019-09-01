#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//void使用
// 1 无类型 不可以通过无类型创建变量 
//	原因是编译器不知道分配多少内存空间

void test01()
{
	//void a = 10;
}

// 2 用途：限定函数返回值 限定函数参数
int func(void)
{
	return 10;
}

void test02()
{
	//func(10,10);
} 

//3 void * 万能指针
void test03() 
{
	void *p = NULL;
	printf("p 的内存空间大小：%d\n", sizeof(p)); //4个字节 
	
	int * pInt = NULL;
	char * pChar = NULL;
	
	pChar = (char *)pInt;//不同类型指针之间 需要强制类型转换才不会报警告
	pChar = p; //对于万能指针，不需要通过强制类型转换，就可以转换为任意类型指针 
}

int main()
{
	//test01();
	//test02();
	test03(); 
	return 0;
 } 
