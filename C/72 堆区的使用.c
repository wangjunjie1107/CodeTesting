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
		
	//手动在堆区创建的数据，记得手动释放
	free(p);
	p = NULL;  //防止p称为野指针 
}

int main()
{
	test01();
	return 0;	
}
