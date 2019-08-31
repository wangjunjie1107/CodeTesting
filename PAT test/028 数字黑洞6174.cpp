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

/*
	数字黑洞6174：
		
		给定任一个各位数字不完全相同的四位正整数，如果先把四个数字按给递增排序，
		再按非递减排序，然后用第一个数字减第二个数字，将得到一个新的数字。一直重复这样做，
		很快会停在有“数字黑洞”之称的6174，这个神奇的数字也叫做Kaprekar常数

		输入：0-10000之间的正整数

		输出：演示程序到达“数字黑洞”的过程，如果N的四位数字全相等，则在一行内输入“N - N = 0000” 

*/

using namespace std;

int num = 0;			//存储输入的数字
int arr[4] = { 0 };     //将数字的各位存储到数组中

//递减排序
bool MyCmpDown(int a, int b)
{
	return a > b;
}

//递增排序
bool MyCmpUp(int a, int b)
{
	return a < b;
}

//将数字的每一位存储在数组中
void ToArr(int n, int arr[])
{
	for (int i = 0; i < 4; i++)
	{
		arr[i] = n % 10; 
		n /= 10;
		//cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

//将数组中的数字转换为整数
int ToNumber(int arr[])
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum = sum * 10 + arr[i];
		//cout << "sum = " << sum << endl;
	}
	return sum;
}

//数字黑洞 6174
void BlackHoleOfNumber()
{
	//取得数字的每一位，并放入到数组中
	cin >> num;
	ToArr(num, arr);

	//排序
	int result = num;
	int result1 = 0;
	int result2 = 0;
	while (result != 6174)
	{
		//非递增
		sort(arr, arr + 4, MyCmpDown);
		result1 = ToNumber(arr);
		
		//非递减
		sort(arr, arr + 4, MyCmpUp);
		result2 = ToNumber(arr);
		
		//计算结果
		result = result1 - result2;

		//输出 使用printf格式化输出
		printf("%04d - %04d = %04d\n", result1, result2, result);

		//将result重新存储在数组中  继续下一轮循环
		ToArr(result, arr);
		
		//加判断
		if (result == 0)
		{
			break;
		}
	}

	

}
int main()
{
	BlackHoleOfNumber();

	system("pause");
	return EXIT_SUCCESS;
}

