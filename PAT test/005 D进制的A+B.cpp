#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;


void test()
{
	int numberA;
	int numberB;
	int numberD;

	//输入A和B
	cin >> numberA;
	cin >> numberB;

	//输入D进制数
	cin >> numberD;

	//计算A+B的和
	int sum = numberA + numberB;

	//将十进制的 sum  转换为 numberD 进制数  num为位数
	int z[100] = { 0 };
	int num = 0; 
	while (sum != 0)
	{
		z[num++] = sum % numberD;
		sum = sum / numberD;
	}

	//打印结果
	for (int i = num - 1; i >= 0; --i)
	{
		cout << z[i];
	}
	cout << endl;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

