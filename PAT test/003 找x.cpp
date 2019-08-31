#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

void test01()
{
	//接收 n 值
	int n; 
	cin >> n;

	//接收 n 个数值各不相同的数字
	int number[200] = { 0 };    // n最大为200，所以数组大小为200
	for (int i = 0; i < n; i++)
	{
		cin >> number[i];
	}

	//接收 x 
	int x;
	cin >> x;

	//查找数组中与x相同的数字，并返回其下标
	for (int i = 0; i < n; i++)
	{
		if (x == number[i])
		{
			cout << i << endl;
			exit(0);//找到后便不再查询，直接结束程序
		}
	}

	cout << -1 << endl;  //未找到的话，输出-1
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
