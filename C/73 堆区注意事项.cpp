#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//ע������
//�������������û�и�ָ������ڴ棬����������ͬ��ָ�������β������������е�ָ��ġ� 
void allocateSpace(char *pp)
{
	char * temp = malloc(100);
	if(temp == NULL)
	{
		return;
	}
	memset(temp,0,100); //�ڴ����ã�ȫ��Ϊ0 
	strcpy(temp,"hello world");
	pp = temp;

}
void test02()
{
	char * p =NULL;
	allocateSpace(p);
	
	printf("%s\n",p);
}
void allocateSpace(char **pp)
{
	char * temp = malloc(100);
	memset(temp,0,100);
	strcpy(temp,"hello world");
	*pp = temp;
}
void test03()
{
	char * p = NULL;
	allocateSpace2(&p);
	printf("%s\n",p);
	free(p);
	p = NULL;
}
int main()
{
	test03();
	return 0;
 } 
