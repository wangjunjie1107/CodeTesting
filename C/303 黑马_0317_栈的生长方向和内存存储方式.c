#include "STD.c"

//ջ����������  �������� 
void test01()
{
	int a = 10;  //������ջ  λ��ջ��  �ߵ�ַ 
	int b = 10;
	int c = 10;
	int d = 10;	//�����ջ   λ��ջ��  �͵�ַ
	
	printf("%d\n", &a); 
	printf("%d\n", &b); 
	printf("%d\n", &c); 
	printf("%d\n", &d); 
} 

//�ڴ�洢��ʽ  С�˶���
void test02()
{
	//���ڴ�����δ洢 a  
	int a = 0x11223344; //ʮ������
	char *p = &a; //��Ϊ��char���͵�ָ�룬����һ��ֻ��ӡһ���ֽڵ��ڴ��ֵ
	
	printf("%x\n", *p); //44 ----��λ�ֽ�----�͵�ַ
	
	printf("%x\n", *(p + 1)); // 33 ----��λ�ֽ� ---�ߵ�ַ 
	
	printf("%x\n", *(p + 2));
	
	printf("%x\n", *(p + 3));
} 


int main()
{
	//test01();
	test02();	
	return 0;
 } 
