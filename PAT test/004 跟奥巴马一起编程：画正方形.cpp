#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

void test01()
{
	//接收正方形边长N   3 <= N <= 20
	int n;
	cin >> n;

	//接收字符
	char c;
	cin >> c;

	//根据边长和字符画正方形
	int weight = 0; //行数 - 2 ,也就是中间的边数
	if (n % 2 == 0)
	{
		weight = n / 2 - 2;
	}
	else
	{
		weight = n / 2 + 1 - 2;
	}


	//输出顶部的边
	for (int i = 0; i < n; i++)
	{
		cout << c;
	}
	cout << endl; //第一行完毕，换行

	//输出中间的边
	while (weight != 0)
	{
		//首个字符
		cout << c; 

		//中间的空格
		for (int i = 0; i < n - 2; i++)
		{
			cout << " ";
		}

		//最后一个字符
		cout << c;

		//换行
		cout << endl;

		//行数减一
		--weight;
	}


	//输出底部的边
	for (int i = 0; i < n; i++)
	{
		cout << c;
	}
	cout << endl; //最后一行完毕，换行

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
