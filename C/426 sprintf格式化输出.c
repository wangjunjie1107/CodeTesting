#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


void test01()
{
	char buf[1024] = { 0 };
	memset(buf, 0, 1024);

	//1����ʽ��д��

	//����1 ��ʽ����Ŀ���ַ���
	//����2  ��ʽ����ʽ
	//����3... ��ʽ���еĲ���
	sprintf(buf, "������ %d�� %d�� %d��\n", 2019, 5, 8);
	
	printf("%s\n", buf);

	//2��ƴ���ַ���
	memset(buf, 0, 1024);
	char str1[] = "wangjunjie";
	char str2[] = "hahaha";


	printf("strlen�������ַ������ '\\0' ������  strlen str2 = %d\n",   strlen(str2)); // Ҫ��� \0  ��Ӧ������ \\0 ˫б�ܴ������ \
	printf("sizeof  �����ַ������ '\\0' ������  sizeof str2 = %d\n\n", sizeof(str2));


	int len = sprintf(buf, "%s  %s", str1, str2);
	//����ֵ�� strlen�Ľ��
	printf("buf:%s  len: %d\n", buf, len);

	//3������ת�ַ���
	memset(buf, 0, 1024);
	int num = 100;
	sprintf(buf, "%d", num);
	printf("buf:%s\n", buf);
}

void test02()
{
	char buf[1024];
	int num = 100;

	//���ÿ�� �Ҷ���
	memset(buf, 0, 1024);
	sprintf(buf, "%8d", num);
	printf("buf:%s\n", buf);

	//���ÿ�� �����
	memset(buf, 0, 1024);
	sprintf(buf, "%-8d", num);
	printf("buf:%s111\n", buf);

	//ת��16�����ַ��� Сд
	memset(buf, 0, 1024);
	sprintf(buf, "%0x%x", num);
	printf("buf:%s\n", buf);

	//ת��8�����ַ��� 
	memset(buf, 0, 1024);
	sprintf(buf, "0%o", num);
	printf("buf:%s\n", buf);
}




int main()
{
	test01();
	test02();

	system("pause"); 
	return EXIT_SUCCESS;
}


