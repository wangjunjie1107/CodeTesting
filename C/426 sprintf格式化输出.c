#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


void test01()
{
	char buf[1024] = { 0 };
	memset(buf, 0, 1024);

	//1、格式化写入

	//参数1 格式化后目标字符串
	//参数2  格式化形式
	//参数3... 格式化中的参数
	sprintf(buf, "今年是 %d年 %d月 %d日\n", 2019, 5, 8);
	
	printf("%s\n", buf);

	//2、拼接字符串
	memset(buf, 0, 1024);
	char str1[] = "wangjunjie";
	char str2[] = "hahaha";


	printf("strlen不计算字符串后的 '\\0' 结束符  strlen str2 = %d\n",   strlen(str2)); // 要输出 \0  则应该输入 \\0 双斜杠代表输出 \
	printf("sizeof  计算字符串后的 '\\0' 结束符  sizeof str2 = %d\n\n", sizeof(str2));


	int len = sprintf(buf, "%s  %s", str1, str2);
	//返回值是 strlen的结果
	printf("buf:%s  len: %d\n", buf, len);

	//3、数字转字符串
	memset(buf, 0, 1024);
	int num = 100;
	sprintf(buf, "%d", num);
	printf("buf:%s\n", buf);
}

void test02()
{
	char buf[1024];
	int num = 100;

	//设置宽度 右对齐
	memset(buf, 0, 1024);
	sprintf(buf, "%8d", num);
	printf("buf:%s\n", buf);

	//设置宽度 左对齐
	memset(buf, 0, 1024);
	sprintf(buf, "%-8d", num);
	printf("buf:%s111\n", buf);

	//转成16进制字符串 小写
	memset(buf, 0, 1024);
	sprintf(buf, "%0x%x", num);
	printf("buf:%s\n", buf);

	//转成8进制字符串 
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


