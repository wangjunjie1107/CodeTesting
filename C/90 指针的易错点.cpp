#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void  test01()
{
	char * p = malloc(sizeof(char)*12);
	
	//������ʱָ�룬����������ڴ�
	char * pp = p;
	
	for(int i = 0; i < 10; i++)
	{
		*pp = i + 97;
		printf("%c", *pp);
		pp++; //������׵�ַָ��ƫ�ƺ󣬾Ͳ������������ָ���ͷŶ����ˡ� 
	} 
	
	if(p != NULL)
	{
		free(p);
		p = NULL;
	}
	 
 } 
 
 int main()
 {
 	test01();
 	
 	return 0;
 }
