#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//�ַ�������

//��һ��ʵ�ַ�ʽ
void copyString01(char * dest, char * source)
{
	//�����±귽ʽ����
	int len = strlen(source);
	for (int i = 0;i < len;i++)
	{
		dest[i] = source[i];
	}
	dest[len] = '\0';
}

//�ڶ���ʵ�ַ�ʽ
void copyString02(char * dest, char * source)
{
	//�����ַ���ָ��
	int len = strlen(source);
	while (*source != '\0')
	{
		*dest = *source;

		dest++;
		source++;
	}

	*dest = '\0';
}

//������ʵ�ַ�ʽ
void copyString03(char * dest, char * source)
{
	while (*dest++ = *source++);
}

void test01()
{
	char * str = "hello world";

	char buf[1024];

	copyString01(buf, str);
	printf("buf = %s\n", buf);

	copyString02(buf, str);
	printf("buf = %s\n", buf);

	copyString03(buf, str);
	printf("buf = %s\n", buf);
}

//�ַ�����ת


//��һ�ַ�ʽ  �±�ķ�ʽ
void reverseString1(char * str)
{
	int len = strlen(str);
	
	int start = 0;      //��һ��Ԫ�ص��±�

	int end = len - 1; //���һ��Ԫ�ص��±�

	while (start < end)
	{
		//������β�±�Ԫ��
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
	
}

//�ڶ��ַ�ʽ  ָ��ķ�ʽ
void reverseString2(char * str)
{
	int len = strlen(str);

	char * start = str; //ָ���ַ����еĵ�һ��Ԫ��
	char * end = str + len - 1;//ָ���ַ����е����һ��Ԫ��

	while (start < end)
	{
		//����Ԫ��
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

void test02()
{
	char str[] = "wangjunjie";

	reverseString1(str);
	printf("%s\n", str);

	reverseString2(str);
	printf("%s\n", str);
}

int main()
{
	//test01();
	test02();
	system("pause"); 
	return EXIT_SUCCESS;
}


