#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//�����޸ķ�ʽ
void test01()
{
	//1��ֱ���޸�
	int a = 10;
	a = 20;

	//2������޸�
	int * p = &a;
	*p = 200;
	printf("a = %d\n", a);
}

//�Զ�������������ϰ
struct Person
{
	char  a;      // 0-3
	int   b;      // 4-7
	char  c;    // 8-11
	int   d;    // 12-15    ��16���ֽ�
};
void test02()
{
	struct Person p1 = { 'a', 10, 'b', 20 };

	//ֱ���޸�
	p1.d = 100;

	//����޸�
	char * p = &p1;
	printf("%d\n", *(int *)(p + 12));

	printf("%d\n", *(int *)((int *)p + 3));

}
int main()
{

	test01();
	test02();

	system("pause"); 

	return EXIT_SUCCESS;
}


