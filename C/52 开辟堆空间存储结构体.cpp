#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef struct student ss;  //�������

struct student
{
	char name[20];
	int age;
};
int main()
{
	ss * p = (ss *)malloc(sizeof(ss) * 3);

	for (int i = 0; i < 3; i++)
	{
		scanf("%s%d", p[i].name, &p[i].age);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("������%s\n", p[i].name);
		printf("���䣺%d", p[i].age);
		printf("\n"); 
	}
	getchar();
	return 0;
}
