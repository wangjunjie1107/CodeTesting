#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//�꺯��ע�⣺��֤�����������
//�꺯��ʹ�ó�������Ƶ����С�ĺ��� ����װΪ�꺯��
//�ŵ㣺�Կռ任ʱ��

#define MYADD(x,y) ((x) + (y))

int myAdd(int x, int y)
{
	return x + y;
}


void test01()
{
	int a = 10;
	int b = 10;

	printf("a + b = %d\n", MYADD(a, b) * 20); // 400 �꺯��Ҫ��֤����������
	printf("a + b = %d\n", myAdd(a,b)); //20

}
int main()
{
	test01();

	system("pause"); 
	return EXIT_SUCCESS;
}


