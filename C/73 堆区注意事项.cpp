#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//注意事项
//如果主调函数中没有给指针分配内存，被调函数用同级指针是修饰不到主调函数中的指针的。 
void allocateSpace(char *pp)
{
	char * temp = malloc(100);
	if(temp == NULL)
	{
		return;
	}
	memset(temp,0,100); //内存设置，全置为0 
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
