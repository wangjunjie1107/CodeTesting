#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

//将p进制的数字a转换为十进制的数字b
void test()
{
	int a;
	int b = 0;
	int p;

	//输入数字a 和 该数字的进制p
	cin >> a;
	cin >> p;

	//将p进制的数字a转换为十进制的数字b
	int produce = 1;
	while (a != 0)
	{
		b = b + (a % 10) * produce;  // a % 10 是为了每次获取 a 的个位数
		a = a / 10; //去掉a的个位数
		produce = produce * p;
	}

	cout << b << endl;
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

