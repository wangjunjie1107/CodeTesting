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

using namespace std;


const int maxn = 100000;		//最多字符个数
int MOD = 1000000007;		    //取余
char str[maxn] = { 0 };			//存储字符串
int leftNumber[maxn] = { 0 };   //存储每一位的左侧的P的个数
int rightNumber = 0;			//存储右侧T的个数
int ans = 0;					//做种结果

void NumberOfPAT()
{
	//读取一行字符
	gets(str);   
	
	//计算有效字符个数
	int len = strlen(str); 

	//遍历左侧，计算P的个数
	for (int i = 0; i < len; i++)
	{
		if (i > 0)
		{
			//先继承上一位的个数
			leftNumber[i] = leftNumber[i - 1];
		}

		if (str[i] == 'P')
		{
			//如果本位置是P，则计数加1
			++leftNumber[i];
		}
	}


	//从右向左遍历，统计右侧T的个数，并计算结果
	for (int i = len - 1; i >= 0; --i)
	{
		if (str[i] == 'T')
		{
			++rightNumber;
		}
		else if (str[i] == 'A')
		{
			ans = (ans + rightNumber * leftNumber[i]) % MOD;
		}
	}

	cout << ans << endl;
}

int main()
{
	NumberOfPAT();

	system("pause");
	return EXIT_SUCCESS;
}

