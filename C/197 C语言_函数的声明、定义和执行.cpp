#include<stdio.h>
#include<stdlib.h>


//1 ����   ���������ĸ�ʽ 
extern int add01(int a, int b);

int main()
{
	//3 ����   ִ�к���   ��Ҫ���ĳЩ����
	int a = add01(10, 20);
	printf("%d\n",a);
	
	system("pause");
	return 0;
} 

//2 ���� �����Ķ�����ǶԺ������ܵ�ʵ��
int add01(int a, int b)
{
	return a + b;
} 
