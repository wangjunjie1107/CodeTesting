#include<stdio.h>

#define MAX 10 //������һ�����������ֽ�MAX��ֵ��10 
				//������ֵһ����ʼ���Ͳ��ɸ���

int main()
{
	int a; //������һ��������������Ϊint�� ���ֽ�a
	
	const int b = 10; //������һ��const��������Ϊb��ֵΪ10
	
	b = 11; //error ������ֵ���ܸı�
	
	MAX = 100; //error ������ֵ���ܸı�
	
	a = MAX; //�� a ��ֵ����ΪMAX��ֵ
	a = 123;
	
	printf("%d\n", a);  //��ӡ���� a ��ֵ
	
	return 0;  
 } 
