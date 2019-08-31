#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
using namespace std;




/*
	字符串hash:指将一个字符串S映射为一个整数，使得该整数可以尽可能唯一地代表字符串S
	
	问题：给出N个字符串（每个字符串由三位字母加一位数字组成,共4位），
  	
	      再给出M个查询字符串（也是4位），问每个查询字符串在N个字符串中出现的次数

	解决：散列（hash)将字符串转换为数字，进行比较。

*/ 


const int maxn = 100; //最多有100个字符串
char s[maxn][5], temp[5]; //s为字符数组，用来存储N个字符串。temp用来存储M个查询字符串
int hashTable[52 * 52 * 52 * 10 + 10] = { 0 }; //用来存储从字符串转化为数字id的值 以空间换时间 



//hash函数，将字符串s转化为整数
//转化规则：52进制  其中  0-25 == A-Z     26-52 == a-z
int hashFunc(char s[], int len)
{
	int id = 0;

	//最后一位是数字，所以不转换最后一位，直接将最后一位加在id后面
	for (int i = 0; i < len - 1; i++)
	{
		//如果是大写字母
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			id = id * 52 + (s[i] - 'A');
		}
		//如果是小写字母
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			id = id * 52 + (s[i] - 'a') + 26;
		}
	}

	//转换完成后，加上最后一位数字
	id = id * 10 + (s[len - 1] - '0');

	//返回id
	return id;
}

void test()
{
	int n, m;

	cout << "请输入N和M的值：" << endl;
	cin >> n >> m;

	//读取N中的字符串，并转换
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
		int id = hashFunc(s[i], 4);//将字符串s[i]转换为整数
		++hashTable[id]; //该字符串出现的次数+1
	}

	//读取M中的字符串，并转换，作对比
	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		if (strlen(temp) > 4)
		{
			cout << temp << "长度不符合！" << endl;
			continue;
		}
		
		int id = hashFunc(temp, 4);
		if (hashTable[id] > 0)
		{
			//说明此字符串在N中出现过，打印出现次数
			cout << temp << "在N中出现了" << hashTable[id] << "次。" ;
			cout << "   转换后的id为" << id << endl;
		}
		else
		{
			cout << temp << "没有在N中出现过" << endl; 
		}
	}
}


int main()
{
	test();

	system("pause"); 
	return EXIT_SUCCESS;
}

