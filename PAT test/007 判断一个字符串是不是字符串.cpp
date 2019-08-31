#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h> 
using namespace std;


void test()
{
	//接收字符串
	char array[255] = { 0 };
	cin >> array;

	//计算输入的字符串长度
	int len = strlen(array);

	//用字符指针指向字符串的头部和尾部
	char* head = array;
	char* tail = &(array[len - 1]);

	//判断是否为回文串
	while (tail - head >= 0)
	{
		//首尾指针位置差
		cout << "tail - head = " << tail - head << endl;

		if (*head == *tail)
		{
			head++;		
			tail--;
			continue;
		}
		else
		{
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

