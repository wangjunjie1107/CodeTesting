#include<stdio.h>


int main()
{
	int a = 10;
	int b = 20;
	int* p = &a;
	int** pp = &p;
	
	*pp = &b; //�ȼ��� p=&b;
	
	**pp = 100; //�ȼ��� a=100; 
	
	// *pp = 100; //err
	
	printf("%d\n", *p) ;
	
	printf("%d\n", **pp);
	
	printf("%d", a);
	
	//����ָ�� ���� 
	int ***ppp = &pp;
	*ppp==pp=&p;
	**ppp==*pp==p==&a;
	***ppp==**pp==*p==a;
	
	return 0;
 } 
