#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;


//接收一个字符串，然后倒序输出
void test()
{
	int num = 0;  //单词的个数
	char ans[90] = { 0 };

	//读取一整行
	gets(ans);
	
	//倒序输出 首尾指针，尾指针移动，首指针不动
	char* head = ans;
	char* tail = &ans[strlen(ans) - 1];

	while (tail - head >= 0)
	{
		cout << *tail;
		--tail;
	}
	cout << endl;
}

int main()
{
	test();

	system("pause"); 
	return EXIT_SUCCESS;
}

