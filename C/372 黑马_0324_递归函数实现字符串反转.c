#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�ݹ麯��ʵ���ַ�����ת��ӡ
void reverseStr(char * Str)
{
	if (*Str == '\0')
	{
		return;//�ݹ麯������Ҫ��return
		//�ݹ�Ľ�������
	}

	reverseStr(Str + 1);
	printf("%c", *Str);
}

void test()
{
	char * Str = "wangjunjie";

	reverseStr(Str);
}


int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
