#include "STD.c"
 
char * func()
{
	char * str = malloc(100);
	strcpy(str, "hello world");
	printf("%s\n", str);
}

void test01()
{
	char * p = NULL;
	p = func();
	printf("%s\n", p);
}

void allocateSpace(char *p)
{
	p = malloc(100);
	strcpy(p, "hello world");
	printf("%s\n", p); 
}

void test02()
{
	char * p = NULL;
	allocateSpace(p);
	printf("%s\n",p);
}
int main()
{
	//test01();
	test02();
	return 0;
}
