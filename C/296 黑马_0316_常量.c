#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//const ���εĳ���
//ȫ��const������ ���ڳ������У��ܵ��������ı��� 
const int a = 10;
 
void test01()
{
	//ֱ���޸�ʧ��
	//a = 100;
	
	//����޸� Ҳʧ�� 
	int * p = &a;
	*p = 100;
	
	printf("%d\n", a); 
}

//�ֲ�const���γ���
void test02()
{
	const int b = 10; //���ݴ����ջ����α����
	//ֱ���޸�ʧ��
	//b = 100; 
	int *p = &b;
	*p = 100;
	printf("%d\n", b); //����޸ĳɹ� 
	
	//int arr[b]; //α���� �����Գ�ʼ������ 
} 

//�ַ��������ǿ��Թ����
void test03()
{
	char *p1 = "AAA";
	char *p2 = "AAA";
	char *p3 = "AAA";
	
	//��ӡ��ַ 
	printf("%d\n", p1); 
	printf("%d\n", p2); 
	printf("%d\n", p3); 
	printf("%d\n", &"AAA"); 
} 

//�ַ��������Ƿ��ܹ��޸ģ�  
void test04()
{
	char * p1 = "AAA";
	
	p1[0] = "B";
	
	printf("%s\n", p1); //�޸�ʧ�� 
 } 
int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	return 0;
 } 
