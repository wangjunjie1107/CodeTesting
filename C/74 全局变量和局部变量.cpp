#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��̬����
//�ص㣺ֻ��ʼ��һ�Σ��ڱ���׶ξͷ����ڴ棬�����ڲ��������ԣ�ֻ���ڵ�ǰ�ļ���ʹ�á�
 
static int a = 10;

void test01()
{
	//�ֲ���̬������������ֻ���ڵ�ǰtest01�� 
	static int b = 20;
	//a��b������������һ���� 
}

//2 ȫ�ֱ���
//��C�����У�ȫ�ֱ���ǰ�����ؼ��˹ؼ���
//extern  �����ⲿ�������� 
extern int g_a = 100;

void test02()
{
	//���߱����� g_b���ⲿ�������Ա���
	//������ʹ���������ʱ��Ҫ���� 
	extern int g_b = 100;
	
	printf("g_b = %d\n", g_b); 
 } 
 
 
