#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<time.h>
#include<ctime>

using namespace std;
/*
	分数的表示与化简

*/


//用结构体表示分数
struct Fraction
{
	int up;			//分子
	int down;		//分母
};


//求最大公约数
int gcd(int a, int b)
{
	//return !b ? a : gcd(b, a % b);

	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b); //递归求公约数，不断缩小范围
	}
}

//分数的化简
Fraction reduction(Fraction result)
{
	//1、如果分子为0，分母则为1
	if (result.up == 0)
	{
		result.down = 1;
	}

	//2、如果分母为负数，则分子分母变为相反数
	if (result.down < 0)
	{
		result.up = -result.up;
		result.down = -result.down;
	}

	//3、若分子不为0，则化简，除以分子分母的最大公约数，以化简分数
	if (result.up != 0)
	{
		int d = gcd(abs(result.up), abs(result.down));	//求最大公约数
		result.up /= d;
		result.down /= d;
	}

	return result;
}

//重载<<表示式
ostream& operator<<(ostream& cout, Fraction s)
{
	cout << s.up << " / " << s.down << endl;
}

//分数的加法
Fraction FractionAdd(Fraction a, Fraction b)
{
	Fraction result;
	
	//计算
	result.up = a.up * b.down + b.up * a.down;
	result.down = a.down * b.down;

	//化简
	return reduction(result);			
}

//分数的乘法
Fraction FractionMult(Fraction a, Fraction b)
{
	Fraction result;

	//计算
	result.up = a.up * b.up;
	result.down = a.down * b.down;

	//化简
	return reduction(result);
}

//分数的减法
Fraction FractionMinu(Fraction a, Fraction b)
{
	Fraction result;

	//计算
	result.up = a.up * b.down - b.up * a.down;
	result.down = a.down * b.down;

	//化简
	return reduction(result);
}

//分数的除法
Fraction FractionDiv(Fraction a, Fraction b)
{
	Fraction result;

	//如果除数为0
	if (b.up == 0)
	{
		cout << "除数错误" << endl;
		result.up = 0;
		result.down = 1;
		return reduction(result);
	}

	//如果被除数为0
	if (a.up == 0)
	{
		result.up = 0;
		result.down = 1;
		return reduction(result);
	}


	//计算  除一个分数相当于乘以它的倒数
	result.up = a.up * b.down;
	result.down = a.down * b.up;

	//化简
	return reduction(result);
}

//打印分数的结果
void showResult(Fraction r)
{
	r = reduction(r); //化简

	if (r.down == 1)
	{
		//整数
		cout << r.up << endl;
	}
	else if (abs(r.up) > r.down)
	{
		//假分数
		cout << r.up / r.down << " " << abs(r.up) % r.down << " / " << r.down << endl;
	}
	else
	{
		cout << r.up << " / " << r.down << endl;
	}
}
void test()
{
	//建立两个分数
	Fraction a; // 1 / 2 
	a.up = 2;
	a.down = 4;

	Fraction b; // 3 / 4
	b.up = 3;
	b.down = 4;

	//加法
	showResult(FractionAdd(a, b));
	//减法
	showResult(FractionMinu(a, b));
	//乘法
	showResult(FractionMult(a, b));
	//除法
	showResult(FractionDiv(a, b));

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

