#include<stdio.h>
#include<stdlib.h>

 
int main()
{
	int m,n; 
	float a = 122.222311;
	
	printf("������Ҫ�������С��ȣ�\n");
	scanf("%d", &m);
	printf("������Ҫ�����С����λ����\n");
	scanf("%d", &n);
	
	printf("%*.*f\n",m,n,a);
	
	return 0;
}
