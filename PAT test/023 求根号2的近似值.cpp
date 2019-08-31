#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<algorithm>

using namespace std;

/*
   二分查找：在10的-5次方的精度下，查找根号2的近似值
*/

const double eps = 0.00001;

//利用f()将x与2进行比较
double f(double x)
{
	return x * x;
}

double calSqrt()
{
	double left = 1;
	double right = 2;
	double mid;
	
	//当精度满足要求时
	while (right - left > eps)
	{
		mid = (right + left) / 2;

		if (f(mid) > 2)
		{
			//说明应该往左区间进行查找
			right = mid;
		}
		else if(f(mid) < 2)
		{
			//说明应该往右区间进行查找
			left = mid;
		}
	}
	
	//精度达到要求后，返回值
	return mid;
}

void test()
{
	cout << calSqrt() << endl;
}


int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

