#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1��const ���ε�ȫ�ֱ���
//��ʹ�﷨ͨ��������������ʱ���ܵ��������ı���������ʧ�� 
const int a = 10; //���ڳ����� 

void test01()
{
	//a = 100; //ֱ���޸ģ�ʧ�� 
//	int * p = &a;
//	*p = 100;
	
//	printf("%d\n",a);
 } 
 
 void test02()
 {
 	const int b = 10;//���䵽ջ�� 
 	//b = 100; //ֱ���޸ģ�ʧ��
	
	//����޸� �ɹ�
	//��C�����£���Ϊα���� 
	int * p = &b;
	*p = 100;
	printf("%d\n",b); 
	
	//int a[b]; //α�����ǲ����Գ�ʼ������� 
  } 
 
 int main()
 {
 	test02();
 	
 	return 0;
 }
