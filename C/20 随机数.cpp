#define _CRT_SECURE_NO_WORNINGS 
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	//����   #include<time.h>  ��ȡ��ǰϵͳʱ��
	
	//����   #include<stdlib.h>  ��ȡ��������� 
	//������������
	 
	 time_t timer=time(NULL);
	 srand((size_t)time(NULL));
	 for(int i=0; i<100; i++) 
	 {
	 	printf("%d\n", rand()%51+50); //�������ΧΪ 51-100 
	 }
	 return 0; 
 } 
