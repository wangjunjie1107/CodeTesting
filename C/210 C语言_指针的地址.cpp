#include<stdio.h>

int main()
{
	int a = 0;
	int b = 100;
	printf("%p\t%p\n", &a, &b);
	
	int *p;
	printf("%p\n", &p); //��ӡָ�����p�ĵ�ַ
	p = &a; 
	//p = &a;
	printf("%p\n",&*p);//ָ�����pָ��a, ��ӡa�ĵ�ַ
	printf("%d\n", *p);//��ӡ��ַ�еĴ�ŵ�ֵ 
	
	int *p1 = &b;
	printf("%d\n", *p1);
	
	return 0;
 } 
