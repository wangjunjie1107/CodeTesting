#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 

// voidʹ��
//1 ������ ������ͨ�������ʹ������� ԭ���Ǳ�������֪����������ڴ�ռ�
void test01()
{
	//void a = 10;
}


//2 ��;���޶���������ֵ �޶���������
int func(void)
{
	return 10;
}

void test02()
{
	//func(10, 10);
}

//3 void * ����ָ��
void test03()
{
	void * p = NULL;
	//printf("p ���ڴ�ռ��С��%d\n", sizeof(p)); // 4���ֽ�

	int * pInt = NULL;
	char * pChar = NULL;

	pChar = (char *)pInt; //��ͬ����ָ��֮�� ��Ҫǿ������ת��
	pChar = p; //����void * ָ�룬����Ҫǿ������ת�����Ϳ���ת��Ϊ��������ָ��
}


int main()
{


	system("pause");

	return EXIT_SUCCESS;
}


