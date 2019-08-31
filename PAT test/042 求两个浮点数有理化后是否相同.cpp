#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<set>
#include<vector>
#include<string>

using namespace std;

/*
	给出三个数：

		一个N： 表示要化简的位数   N < 100

		一个A：浮点数，表示要化简的数

		一个B：浮点数，表示要化简的数

		A 和 B 大于0  小于10的100次方


	解决：采用大数,先将数字有理化，然后比较

*/

int n = 0;

char numberA[102] = { 0 };
int countA = 0;				//计数
int pointPositionA = 0;	    //记录小数点的位置
string a1;

char numberB[102] = { 0 };
int countB = 0;				//计数
int pointPositionB = 0;	    //记录小数点的位置
string b1;


//将数字A有理化
void significant_digitsA()
{
	//如果有理化的位数为0 或者小于0，直接返回
	if (n <= 0)
	{
		return;
	}

	//如果有理化的位数大于数字本身的有效位数，则直接返回，不用有理化
	if (n > countA)
	{
		return;
	}

	//有理化,将n位之后的数字全部置为0
	for (int i = n; i < countA; i++)
	{
		numberA[i] = 0;
	}
	return;
}

//将数字B有理化
void significant_digitsB()
{
	//如果有理化的位数为0 或者小于0，直接返回
	if (n <= 0)
	{
		return;
	}

	//如果有理化的位数大于数字本身的有效位数，则直接返回，不用有理化
	if (n > countB)
	{
		return;
	}

	//有理化,将n位之后的数字全部置为0
	for (int i = n; i < countB; i++)
	{
		numberB[i] = 0;
	}
	return;
}

//有理化之后的对比
bool compareAandB()
{
	for (int i = 0; i < n; i++)
	{
		if (numberA[i] != numberB[i])
		{
			return false;
		}
	}
	return true;
}

//数字整理输出
void replace_numberA()
{
	//如果首位为0，则全部为0
	if (numberA[0] == '0')
	{
		for (int i = 0; i < n; i++)
		{
			numberA[i] = 0;
		}
	}

	//如果末尾为小数点，则省略它
	if (numberA[n - 1] == '.')
	{
		numberA[n - 1] = 0;

		a1 = "0.";
		a1 += numberA;
		a1 += "*10";
		cout << a1;
		if (pointPositionA > 0)
		{
			cout << "^";
			cout << pointPositionA - 1;

		}
		else
		{
			cout << "^";
			cout << countA;
		}

		return;
	}

	a1 = "0.";
	a1 += numberA;
	a1 += "*10";
	cout << a1;
	if (pointPositionA > 0)
	{
		cout << "^";
		cout << pointPositionA - 1;

	}
	else
	{
		cout << "^";
		cout << countA;
	}
	return;
}
void replace_numberB()
{
	//如果首位为0，则全部为0
	if (numberB[0] == '0')
	{
		for (int i = 0; i < n; i++)
		{
			numberB[i] = 0;
		}
	}

	//如果末尾为小数点，则省略它
	if (numberB[n - 1] == '.')
	{
		numberB[n - 1] = 0;

		b1 = "0.";
		b1 += numberB;
		b1 += "*10";
		cout << b1;
		if (pointPositionB > 0)
		{
			cout << "^";
			cout << pointPositionB - 1;

		}
		else
		{
			cout << "^";
			cout << countB;
		}
		return;
	}

	b1 = "0.";
	b1 += numberB;
	b1 += "*10";
	cout << b1;
	if (pointPositionB > 0)
	{
		cout << "^";
		cout << pointPositionB - 1;

	}
	else
	{
		cout << "^";
		cout << countB;
	}

	return;
}
void test()
{
	//先输入n
	cin >> n;

	//然后输入A和B，以字符串的形式读取
	string a;
	string b;
	cin >> a;
	cin >> b;

	//将 a 和 b 转换到字符数组中
	for (int i = 0; i < a.length(); i++)
	{
		numberA[countA++] = a[i];
		if (a[i] == '.')
		{
			//记录下小数点的位置
			pointPositionA = countA;
		}
	}

	for (int i = 0; i < b.length(); i++)
	{
		numberB[countB++] = b[i];
		if (b[i] == '.')
		{
			//记录下小数点的位置
			pointPositionB = countB;
		}
	}

	//将数字有理化
	significant_digitsA();
	significant_digitsB();

	//将数字进行对比,如果有理化结果一样 则只输出一个数
	if (compareAandB() == true)
	{
		cout << "Yes" << " ";
		replace_numberA();
		cout << endl;
	}
	else
	{
		cout << "No" << " ";
		replace_numberA();
		cout << " ";
		replace_numberB();
		cout << endl;
	}
}

int main()

{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

