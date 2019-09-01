#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test01()
{
	char * p = malloc(sizeof(char) * 64);

	char * pp = p;

	int i; 
	for (i = 0; i < 10; i++)
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
	return EXIT_SUCCESS;
}
