#include<stdio.h>

int main()
{
	//extern �ؼ���ֻ���������������κζ���
	//����һ������a,a������û�н����洢�ռ�
	
	extern int a;
	
	a = 10; //error û�пռ䣬�Ͳ��ܸ�ֵ
	
	int b = 10; //����һ������b, b������Ϊint�� b��ֵΪ10
	
	return 0; 
} 
