#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ַ�����ת
// abcdefg --> gfedcba

//��һ�ַ�ʽ�����������±�
void reverseString01(char *str)
{
	int len = strlen(str);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];

		str[end] = temp;

		start++;
		end--;
	}
}

//�ڶ��ַ�ʽ ������ָ��
void reverseString01(char *str)
{
	int len = strlen(str);

	char * start = str; //ָ���һ���ַ���ָ��
	char * end = str + len - 1; //ָ�����һ���ַ���ָ��

	while (start++ < end--)
	{
		//����Ԫ��
		char temp = *start;
		*start = *end;
		*end = temp;
	}
}

int main()
{
	char str[] = "abcdefg";

	//reverseString01(str);

	reverseString02(str);

	printf("%s\n", str);
	system("pause");
	return EXIT_SUCCESS;
}
