#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//voidʹ��
// 1 ������ ������ͨ�������ʹ������� 
//	ԭ���Ǳ�������֪����������ڴ�ռ�

void test01()
{
	//void a = 10;
}

// 2 ��;���޶���������ֵ �޶���������
int func(void)
{
	return 10;
}

void test02()
{
	//func(10,10);
} 

//3 void * ����ָ��
void test03() 
{
	void *p = NULL;
	printf("p ���ڴ�ռ��С��%d\n", sizeof(p)); //4���ֽ� 
	
	int * pInt = NULL;
	char * pChar = NULL;
	
	pChar = (char *)pInt;//��ͬ����ָ��֮�� ��Ҫǿ������ת���Ų��ᱨ����
	pChar = p; //��������ָ�룬����Ҫͨ��ǿ������ת�����Ϳ���ת��Ϊ��������ָ�� 
}

int main()
{
	//test01();
	//test02();
	test03(); 
	return 0;
 } 
