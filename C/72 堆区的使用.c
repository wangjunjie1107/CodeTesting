#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int * getSpace()
{
	int * p = malloc(sizeof(int)*5);
	if(p == NULL)
		return NULL;
	int i;
	for(i = 0; i < 5; i++)
		p[i] = i + 100;
	return p; 
}

void test01()
{
	int *p = getSpace();
	int i;
	for(i = 0; i < 5; i++)
		printf("%d\n",p[i]);
		
	//�ֶ��ڶ������������ݣ��ǵ��ֶ��ͷ�
	free(p);
	p = NULL;  //��ֹp��ΪҰָ�� 
}

int main()
{
	test01();
	return 0;	
}
