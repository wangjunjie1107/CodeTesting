#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//��ָ��   ��������NULL�ͷǷ���ַ���� 
void test01()
{
	char *p = NULL;
	//��pָ����ڴ����򿽱����� 
	strcpy(p,"111"); //error
 } 
 
 int * dowork()
 {
 	int a = 10;
 	int * p = &a;
 	return p;
  } 
 
//Ұָ��
void test02()
{
	int * p;  //δ��ʼ��ָ�� 
	printf("%d\n", *p);
	
	//malloc��Ҳfreel������ָ��û����Ϊ��
	
	int * = malloc(sizeof(int));
	
	* p = 100;
	
	free(p); //δ�ÿգ�Ұָ��
	
	p = NULL //Ӧ���ÿգ���ֹҰָ����� 
		
	//ָ�������Խ���������� 
	int * p2 = dowork();
	printf("%d\n", *p2);  //p2����Ұָ�� 
	printf("%d\n", *p2);
		
	 
 } 
 
 void test03()
 {
 	int * p = NULL;
 	free(p); //��ָ���ǿ����ͷŵ�
	free(p);
	free(p);
	 
	int * p2 = malloc(4);
	free(p2);
	free(p2); 
  } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
