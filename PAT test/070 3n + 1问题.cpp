#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
	long long n;
	cin >> n;	//输入大于 1 的自然数 
	
	int count = 0;	//计算 从 n 到 1 所用的步数 
	
	while(n != 1)
	{
		if(n % 2 == 0)
		{
			//偶数
			n /= 2; 
		}
		else
		{
			//奇数
			n = 3 * n + 1;	
		} 
		++count;
	} 
	
	cout << count << endl;
	return EXIT_SUCCESS;
} 
