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
   ���ֲ��ң���10��-5�η��ľ����£����Ҹ���2�Ľ���ֵ
*/

const double eps = 0.00001;

//����f()��x��2���бȽ�
double f(double x)
{
	return x * x;
}

double calSqrt()
{
	double left = 1;
	double right = 2;
	double mid;
	
	//����������Ҫ��ʱ
	while (right - left > eps)
	{
		mid = (right + left) / 2;

		if (f(mid) > 2)
		{
			//˵��Ӧ������������в���
			right = mid;
		}
		else if(f(mid) < 2)
		{
			//˵��Ӧ������������в���
			left = mid;
		}
	}
	
	//���ȴﵽҪ��󣬷���ֵ
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

