#include<stdio.h>

/*

		�Զ�ת��(��ʽת��)����ѭһ���Ĺ���,�ɱ���ϵͳ�Զ���ɡ�

		ǿ������ת�����ѱ��ʽ��������ǿ��ת����������������͡�

		����ת����ԭ��ռ���ڴ��ֽ�����(ֵ��С)�����ͣ���ռ���ڴ��ֽ�����(ֵ���)������ת�����Ա�֤���Ȳ����͡�
*/ 

//��ʽת�� 
int SecretTransport()
{
	int num = 5;
	printf("s1 = %d\n", num/2);
	printf("s2 = %lf\n", num/2.0);
	
	return 0;
}

//��ʽת�� 
int  OutsideTransport()
{
	float x = 0;
	int i = 0;
	
	x = 3.6f;
	
	i = x; //x Ϊʵ�ͣ� iΪ���ͣ�ֱ�Ӹ�ֵ���о���
	i = (int)x; //ʹ��ǿ������ת��
	
	printf("x = %f, i = %d\n", x, i);
	
	return 0; 
 } 
 
 int main()
 {
 	SecretTransport();
 	OutsideTransport();
 	return 0;
 }
