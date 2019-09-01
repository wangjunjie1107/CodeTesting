#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 




void test01()
{
	//字符串结尾要加\0 
	char str1[] = { 'h', 'e', 'l', 'l', 'o','\0' };
	printf("%s\n", str1);


	char str2[100] = { 'h', 'e', 'l', 'l', 'o' };
	printf("%s\n", str2);
	printf("sizeof str2:%d\n", sizeof(str2)); //100
	printf("strlen str2:%d\n", strlen(str2)); //5



	char str3[] = "hello";
	printf("%s\n", str3);
	printf("sizeof str:%d\n", sizeof(str3)); //6
	printf("strlen str:%d\n", strlen(str3)); //5


	char str4[100] = "hello";
	printf("sizeof str:%d\n", sizeof(str4)); // 100
	printf("strlen str:%d\n", strlen(str4)); // 5

	char str5[] = "hello\0world";
	printf("%s\n", str5);
	printf("sizeof str5:%d\n", sizeof(str5)); // 12 
	printf("strlen str5:%d\n", strlen(str5)); // 5

	char str6[] = "hello\012world";
	printf("%s\n", str6); // \012 八进制数字 转为十进制 10   对应ASCII 换行
	printf("sizeof str6:%d\n", sizeof(str6)); // 12 
	printf("strlen str6:%d\n", strlen(str6)); // 11


}



int main()
{
	test01();

	system("pause"); 
	return EXIT_SUCCESS;
}


