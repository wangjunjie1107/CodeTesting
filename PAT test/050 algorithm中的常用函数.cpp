#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<set>
#include<vector>
#include<string>
#include<map>				//map和multimap的头文件
#include<unordered_map>		//unordered_map
#include<queue>
#include<utility>
#include<algorithm>

using namespace std;




void test01()
{
	//最大值 最小值 绝对值
	cout << max(1, -1) << endl;
	cout << min(10, -11) << endl;
	cout << abs(-100) << endl;
	
	//交换两个变量的值
	int x = 10;
	int y = -20;
	swap(x, y);
	cout << x << " " << y << endl;

	//反转  反转一个字符串
	string str = "wnagjuneieagr";
	reverse(str.begin(), str.end());
	cout << str << endl;


	//fill  将一个区间赋值任意一个值
	string str2 = "waggfertdyjyhg";
	fill(str2.begin() + 3, str2.end(), 'w');
	cout << str2 << endl;

}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

