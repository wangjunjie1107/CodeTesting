#include<stdio.h>  //�������� 

int main()
{
	//����
    const int a=10;
	//a=100; error
	//ͨ��ָ�����޸ĳ�����ֵ 
	int* p = &a;
	*p = 2525;
	printf("%d\n", a);
	return 0; 
}


