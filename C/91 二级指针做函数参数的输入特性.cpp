#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//����ָ����������������������
//�������������ڴ棬��������ʹ��

void printArray(int ** pArray, int len)
{
	for(int i = 0; i < len; i++)
	{
		printf("%d\n",*pArray[i]);
		
	} 
}

void test()
{
	//�ڶ��������ڴ�
	int ** p = malloc(sizeof(int*)*5);
    
    //��ջ�ϴ�������
    int a1 = 10;
    int a2 = 20;
    int a3 = 30;
    int a4 = 40;
    int a5 = 50;
    
    p[0] = &a1;
    p[1] = &a2;
    p[2] = &a3;
    p[3] = &a4;
    p[4] = &a5;
    
    printArray(p,5);
}
void test02()
{
	//��ջ�ϴ���
	int * pArray[5];
	
	for(int i = 0; i < 5; i++)
	{
		pArray[i]=malloc(4);
		*(pArray[i]) = 100 + i;
	} 
	
	printArray(pArray,5);
} 

int main()
{
	test01();
	test02();
	
	return 0;
	 
}
