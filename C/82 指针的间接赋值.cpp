#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

//1 һ����ͨ������һ��ָ���������һ���βκ�һ��ʵ�� 
//2 ������ϵ
//3 ͨ�� * ���и�ֵ

void changeValue(int * p) 
{
	*p = 1000;
}

void test01()
{
	int a = 10;
	int * p = NULL;
	p = &a;
	* p = 100;  //�޸�a��ֵ
	
	int a2 = 10;
	changeValue(&a2);
	printf("%d\n",a2);
	
 } 

int main()
{
	test01();
	
	return 0;
}




























