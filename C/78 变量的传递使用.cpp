#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int g_a = 100;  //ȫ���������� ����main��func1��func2�ж�����ʹ�� 
//�Ӻ���1 
void func1()
{
	int a = 10; //��main�����в�����ʹ�ã���func1��func2�ж�����ʹ�� 
	func2();
} 

void func2()
{
	
 } 
 
 int main()
 {
 	int a = 1;//��main��func1��func2�ж�����ʹ�� 
 }
