#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test()
{
	//1����ʽ���ַ���
	char buf[1024] = { 0 };
	sprintf(buf, "hello,%s ,get up!", "wangjunjie");
	printf("�ַ�����ʽ��:%s\n", buf);

	memset(buf, 0, 1024);
	sprintf(buf, "how old are you? %d", 24);
	printf("%s\n", buf);

	//2��ƴ���ַ���
	memset(buf, 0, 1024);
	char str1[] = "hello";
	char str2[] = "C";
	sprintf(buf, "%s,%s", str1, str2);
	printf("�ַ���ƴ�ӣ�%s\n", buf);

	//3������ת�ַ���
	memset(buf, 0, 1024);
	int num = 1000;
	sprintf(buf, "%d", num);
	printf("����ת�ַ�����%s\n", buf);

}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
