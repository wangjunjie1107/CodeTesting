#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
1.ǳ������ ��ԭ�����ԭ���������ֱ�Ӹ����¶��������飬�¶�������ֻ��ԭ�����һ������

2.����� ����һ���µĶ�������飬��ԭ����ĸ������Եġ�ֵ�������������Ԫ�أ������������ǡ�ֵ�������ǡ����á�
*/
 
struct Person {
	char *name; //ֻ��һ����������δ���ٿռ�
}MyPerson;

int main()
{
	struct Person t1;
	t1.name = malloc(64);
	strcpy(t1.name, "wnagjunjie");


	struct Person t2;
	t2 = t1;
	printf("%s\n", t2.name);//t2.name ָ����Ϊt1���ٵ��ڴ� �Լ���δ�����ڴ�
	
	t2.name = malloc(64); //�������ڴ���ٽ��п���
	strcpy(t2.name, t1.name);
	printf("%s\n", t2.name);

	free(t1.name);
	t1.name = NULL;
	free(t2.name);
	t2.name = NULL;

	system("pause");
	return EXIT_SUCCESS;
}
