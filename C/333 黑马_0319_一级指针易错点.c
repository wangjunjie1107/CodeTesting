#define _CRT_SECURT_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stddef.h> 
#include<stdlib.h>
#include<math.h>
#include<time.h> 

void test01()
{
	char * p = malloc(sizeof(char) * 64);

	char * pp = p;

	for (int i = 0; i < 10; i++)
	{
		*pp = i + 97;
		printf("%c\n", *pp);
		pp++;
	}

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}
int main()
{
	test01();


	system("pause");
	return  EXIT_SUCCESS;
}


