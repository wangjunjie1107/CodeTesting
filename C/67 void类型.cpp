#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1�� �������ǲ����Դ��������� 
void test01()
{
	// void a = 1; ������ֱ�ӱ��� ����Ϊ��֪����a������ٵ��ڴ�ռ� 
} 

//2�������޶������ķ���ֵ 
test02()
{
	return 10;
 } 

//3���޶������Ĳ����б�,  ˵���˺����޲����������õ�ʱ���в������ͻᱨ�� 
int fun2(void)
{
	return 10;
} 
void test03()
{
	printf("%d\n", fun2());
}

// 4�� void* ����ָ��
 void test04()
 {
 	void *p = NULL;
 	int *pint = NULL;
 	char *pchar = NULL;
 	
 	pint = pchar; 				//���󣬲�ͬ���͵�ָ��
 	pint = (int *)pchar;		//��Ҫ����ת�� 
	pint = p; 	//��ȷ�� p ������ָ�룬���Բ���Ҫǿ��ת���Ϳ��Ը��Ⱥ���߸�ֵ 
  } 
int main()
{
	test03();
	return 0;
}













