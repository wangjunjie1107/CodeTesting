#include "STD.c"

int * B()
{
	int a = (int)malloc(sizeof(int)); //�������� ����������A�ж�����ʹ�� 
	
	a = 10;
	printf("����B��a = %d\n", a);
	
	return &a;
}

void A(int *A)
{
	A = 100;
	printf("A = %d\n", A); 
	int b; //�ں���A��B�п���ʹ�ã���main��ʹ�ò���
 
	
	int * p = 	B(); //����a�ĵ�ַ 
	printf("����A�� a = %d\n", *p);
} 

int main()
{
	int a; //��main������A ��B�ж�����ʹ��
	
	A(&a); 
	
	int * p = B(); //����a�ĵ�ַ 
	printf("�������� a = %d\n", *p);
	return 0;
}


