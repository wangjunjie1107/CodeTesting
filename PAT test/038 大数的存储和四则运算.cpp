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
#include<limits>
using namespace std;

/*
 
	大整数: 用基本数据类型无法存储其精度的整数

*/

//大数结构体
struct big_number
{
	int d[100];		//存储数字各个位置的数，数组低位存储数字本身的低位
	int len;		//存储数字的长度

	//构造函数，用于初始化对象
	big_number()
	{
		memset(d, 0, sizeof(d));
		len = 0;
	}
};

//如果大整数以字符串的形式输入，则整数的高位会变成数组的低位，而整数的低位会变成数组的高位
//此时为了让整数在结构体中是顺位存储的，即整数的低位到高位在数组中是从0-n的下标存储的
//需要让字符串倒着赋给d[]数组
//string --  array
big_number change_to_array(string str)
{
	big_number a;

	a.len = str.length();
	for (int i = 0; i < str.length(); i++)
	{
		//从字符串的后面的位开始赋值
		a.d[i] = str[str.length() - i - 1] - '0';
	}

	return a;
}


//b1 > b2  返回 1
//b1 < b2  返回 -1
//b1 =b2  返回 =
//两个大数比较
int big_number_compare(big_number b1, big_number b2)
{
	//位数不同的情况
	if (b1.len > b2.len)
	{
		return 1;  // b1 大
	}
	else if (b1.len < b2.len)
	{
		return -1; // b2 大
	}

	//位数相同的情况下
	for (int i = b1.len - 1; i >= 0; --i)
	{
		if (b1.d[i] > b2.d[i])
		{
			return 1;  // b1 大
		}
		else if(b1.d[i] < b2.d[i])
		{
			return -1; // b2 大
		}
	}

	//两数相等
	return 0;

}

//两个大数相加  高精度加法 b1 + b2
big_number big_number_add(big_number b1,big_number b2)
{
	big_number result;

	//进位
	int carry = 0;

	//以较长的len为界限，因为如果此位不存在，则为0，所以不影响 长位-短位
	for (int i = 0; i < b1.len || i < b2.len; ++i)
	{
		//两个对应的位相加，还要加上进位
		int temp = b1.d[i] + b2.d[i] + carry;
		//将结果存储在result中，先取个位
		result.d[i] = temp % 10;
		//计算进位，以便下次进行加
		carry = temp / 10;
	}

	//如果最后还有进位的话，直接赋值到最高位
	if (carry != 0)
	{
		result.d[result.len++] = carry;
	}

	return result;
}


//两个大数相减  高精度减法  b1 - b2
big_number big_number_sub(big_number b1, big_number b2)
{
	big_number result;

	//以较长的len为界限，因为如果此位不存在，则为0，所以不影响 长位-短位
	for (int i = 0; i < b1.len || i < b2.len; ++i)
	{
		//如果不够减，则向前借位
		if (b1.d[i] < b2.d[i])
		{
			b1.d[i + 1]--;  //高位减1
			b1.d[i] += 10;  //低位加10
		}

		//减法结果为当前位的结果
		result.d[i] = b1.d[i] - b2.d[i];
	}

	while (result.len - 1 >= 1 && result.d[result.len - 1] == 0)
	{
		//去除最高位的0，同时至少保留一位最低位
		--result.len;
	}

	return result;
}

//高精度与低精度的乘法  b1 * b2
//低精度：可以用基本数据类型存储的数据
//方法：取大数的某位与int型整体相乘，再与进位相加，所得的结果的个位数作为该位的结果，高位部分作为新的进位
big_number big_number_mulit(big_number b1, int b2)
{
	big_number result;

	//乘法的进位
	int carry = 0;

	//以较长的len为界限，因为如果此位不存在，则为0，所以不影响 长位-短位
	for (int i = 0; i < b1.len; ++i)
	{
		//取大数的某位与int型整体相乘，再与进位相加
		int temp = b1.d[i] * b2 + carry;
		//所得的结果的个位数作为该位的结果
		result.d[i] = temp % 10;
		//高位部分作为新的进位
		carry = temp / 10;
	}

	while (carry != 0)
	{
		//如果最后的进位不为0，则将其保存到最高位
		result.d[result.len++] = carry % 10;
		//因为进位可能大于10，所以继续除10，取进位的下一位存储
		carry /= 10;
	}

	return result;
}

//高精度与低精度的除法  b1 / b2   r为余数
big_number big_number_div(big_number b1, int b2, int& r)
{
	big_number result;

	//被除数的每一位和商的每一位是一一对应的，因此先令长度相等
	result.len = b1.len;

	//从高位开始除法
	for (int i = b1.len - 1; i >= 0; --i)
	{
		//和上一位遗留的余数组合
		r = r * 10 + b1.d[i];

		//如果不够除，该位为0
		if (r < b2)
		{
			result.d[i] = 0;
		}
		else
		{
			//如果够除,计算结果和余数
			result.d[i] = r / b2;
			r = r % b2;
		}
	}

	while (result.len - 1 >= 1 && result.d[result.len - 1] == 0)
	{
		//去除最高位的0，同时至少保留一位最低位
		--result.len;
	}

	return result;
}

int main()
{
	string str1;
	big_number b1;
	cin >> str1;
	b1 = change_to_array(str1);

	string str2;
	big_number b2;
	cin >> str2;
	b2 = change_to_array(str2);

	cout << big_number_compare(b1, b2) << endl;

	//加法
	big_number result;
	result = big_number_add(b1, b2);
	for (int i = 0; i < result.len; i++)
	{
		cout << result.d[i];
	}
	cout << endl;


	//减法
	result = big_number_sub(b1, b2);
	for (int i = 0; i < result.len; i++)
	{
		cout << result.d[i];
	}
	cout << endl;


	//乘法
	int x = 99;
	result = big_number_mulit(b1, x);
	for (int i = 0; i < result.len; i++)
	{
		cout << result.d[i];
	}
	cout << endl;

	//除法
	int s = 22;		 //除数
	int r = 0;		//余数
	result = big_number_div(b1, s, r);
	for (int i = 0; i < result.len; i++)
	{
		cout << result.d[i];
	}
	cout << endl;

	system("pause");
	return EXIT_SUCCESS;
}

