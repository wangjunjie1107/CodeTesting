#include<stdio.h>

int main()
{
	int a = 123;		//ʮ���� 
	int b = 0567;		//�˽��� 
	int c = 0xabc;  	// ʮ������ 
	
	printf("a = %d\n", a);
	
	printf("8���ƣ�b = %o\n", b);
	printf("10���ƣ�b = %d\n", b);
	 
	printf("16���ƣ�c = %x\n", c); 
	printf("16���ƣ�c = %X\n", c); //��ĸ x ��д�����Դ�д��ĸ���ʮ�������� 
	printf("10���ƣ�c = %d\n", c); 
	
	//�����޷���int ��������16���Ʒ�ʽ��ֵ 
	unsigned int d = 0xffffffff;
	
	printf("�з���ʮ���Ʒ�ʽ��ӡ��d = %d\n", d);
	printf("�޷���ʮ���Ʒ�ʽ��ӡ��d = %u\n", d);
	
	return 0; 
	
} 
