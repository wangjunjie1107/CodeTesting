#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

void test01()
{
	int * p1 = malloc(sizeof(int)*10);
	
	for(int i = 0; i < 0; i++)
	{
		printf("%d\n",p1[i]);
	}
	
	if(p1 != NULL)
	{
		free(p1);
		p1 = NULL;
	} 
	
	//calloc��malloc��֮ͬ�����ڣ��Ὣ������������ݳ�ʼ��Ϊ0 
	int * p2 = calloc(10,sizeof(int));
	
	for(int i = 0; i < 0; i++)
	{
		printf("%d\n",p2[i]);
	}
	
	if(p2 != NULL)
	{
		free(p2);
		p2 = NULL;  //�ֶ������ֶ��ͷ� 
	} 
	
}

//  realloc �����ڶ��������ڴ�
//  realloc�Ļ��ƣ������ԭ��������ڴ�Ҫ����������� 
//  ���1  ���ԭ���Ŀռ������ �㹻��Ŀ��пռ䣬��ôֱ���ں�����������ڴ棬����ԭ�е�ַ 
//
//  ���2   ���ԭ���Ŀռ���棬û���㹻��Ŀ��пռ䣬��ôϵͳ��ֱ�ӷ���һ���µĿռ� 
//          ����¿ռ������Ҫ���ڴ�ռ䣬��ԭ�пռ��µ����ݿ������¿ռ��£�
//          ���ҽ�ԭ�пռ��ͷţ������¿ռ���׵�ַ 
void test02()
{
	int * p3 = malloc(sizeof(int)*10);
	
	printf("%d\n",p3);
	
	for(int i = 0; i < 10; i++)
	{
		p3[i] = i;
	}
	
	p3 = realloc(p3,sizeof(int)*20);
    
	for(int i = 0; i < 20; i++)
    {
    	printf("%d\n",p3[i]);
	}
	
	printf("%d\n",p3);
 	
	if(p3 != NULL)
	{
		free(p3);
		p3 = NULL;
	} 
 	
 } 
 
 int main()
 {
 	test02();
 	
 	return 0;
 }
 



















