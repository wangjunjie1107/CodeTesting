#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//��̬����
//��������ǰ�����ڴ�
//���������ڳ������н��� ����
//Ĭ�������ڲ��������ԣ��ڵ�ǰ�ļ���ʹ��
static int a = 10; //ȫ��������


//ȫ�ֱ���  Ĭ���ⲿ��������  ǰ��Ĭ�ϼ���extern�ؼ���
int val = 12000;


void test01()
{
	static int b = 20; //�ֲ�������
}

//ȫ�ֱ���
// Ĭ����c������  ȫ�ֱ���ǰ���˹ؼ��� extern
// �����ⲿ��������
extern int b = 10;



int main()
{
	//g_aĬ���ڲ��������ԣ����ļ���g_a�Ƿ��ʲ�����
	//g_a = 1000;


	// ���߱����� �����ļ�����һ��g_b ��
	//����ʱ���������ļ���Ѱ��
	extern int g_b; 
	printf("g_b = %d\n", g_b);


	system("pause"); 
	return EXIT_SUCCESS;
}







