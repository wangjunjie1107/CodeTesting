#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;


void test01()
{
	//接收正整数n
	int n = 0;
	cout << "请输入一个小于1000的正整数：" << endl;
	cin >> n;

	int temple = n;	//先记住n的值

	int count = 0;//计数
	while (n != 1)
	{
		//判断n是否为整数，如果不是则退出
		if (n <= 0)
		{
			cout << n << " 为非正整数，输入错误!" << endl;
			break;
		}

		if (n % 2 == 0)
		{
			n /= 2;
			++count;
		}
		else if (n % 2 == 1)
		{
			n = (3 * n + 1) / 2;
			++count;
		}

		
	}

	//如果成功计数,则打印信息
	if (count > 0)
	{
		cout << "需要 " << count << " 步才能从 " << temple << " 到 1" << endl;
	}
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
