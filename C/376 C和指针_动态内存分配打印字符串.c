#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ö�̬�����ڴ�����һ���ַ�����һ�ݿ���
char * my_strcpy(char const * string)
{
	char * new_string = NULL;

	//�����㹻���ȵ��ڴ棬���ڴ洢�ַ��������Ľ�β
	new_string = malloc(strlen(string) + 1);

	if(new_string != NULL)
	{
		strcpy(new_string, string);
	}

	return new_string;
}
int main()
{
	char * string = "wangjunjie";
	char * new_string = my_strcpy(string);


	printf("%s\n", new_string);

	system("pause");
	return EXIT_SUCCESS;
}
