#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test()
{
	//1¡¢¸ñÊ½»¯×Ö·û´®
	char buf[1024] = { 0 };
	sprintf(buf, "hello,%s ,get up!", "wangjunjie");
	printf("×Ö·û´®¸ñÊ½»¯:%s\n", buf);

	memset(buf, 0, 1024);
	sprintf(buf, "how old are you? %d", 24);
	printf("%s\n", buf);

	//2¡¢Æ´½Ó×Ö·û´®
	memset(buf, 0, 1024);
	char str1[] = "hello";
	char str2[] = "C";
	sprintf(buf, "%s,%s", str1, str2);
	printf("×Ö·û´®Æ´½Ó£º%s\n", buf);

	//3¡¢Êý×Ö×ª×Ö·û´®
	memset(buf, 0, 1024);
	int num = 1000;
	sprintf(buf, "%d", num);
	printf("Êý×Ö×ª×Ö·û´®£º%s\n", buf);

}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
