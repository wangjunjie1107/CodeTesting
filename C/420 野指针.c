#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


void test01()
{
	char * p = NULL;
	//��pָ����ڴ����򿽱�����
	//strcpy(p, "wangjunjie"); //err

	char * q = 0x1122;
	//��qָ����ڴ����򿽱�����
	//strcpy(q, "wangjunjie");//err
}

int * doWork()
{
	int a = 10;
	int * p = &a;
	return p;
}

//Ұָ��
void test02()
{
	// 1������δ��ʼ��ָ��
	//int * p;
	//printf("%d\n", *p);

	// 2��malloc��free��ָ��
	int * p = malloc(100);
	free(p);
	//*p = 100;//err  ����Ұָ��
	p = NULL;//Ӧ�ý�Ұָ���ÿ�
	
    //��ָ���Ƿ�����ظ��ͷţ�
   //��ָ������ظ��ͷ� ��Ұָ�벻�����ظ��ͷ�
	free(p);

	//3��ָ�����������������
	int *p2 = doWork();
	printf("p2 = %d\n", *p2);
	printf("p2 = %d\n", *p2);
}


int main()
{

	test02();
	system("pause"); 
	return EXIT_SUCCESS;
}


