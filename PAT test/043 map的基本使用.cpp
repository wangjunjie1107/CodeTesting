#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<set>
#include<vector>
#include<string>
#include<map>				//map和multimap的头文件
#include<unordered_map>		//unordered_map

using namespace std;

/*
	map:映射

	map的内部是使用红黑树实现的（set也是），在建立映射的过程中会自动实现从小到大的排序功能

*/

//map基本使用
void test01()
{
	//建立单个字符char到int的映射
	map<char, int> s1;

	s1['d'] = 10;
	s1['f'] = 1550;
	s1['e'] = 50;
	s1['c'] = 100;
	s1['c'] = 200;
	s1['a'] = 100;
	s1['b'] = 100;
	
	//输出200，因为之前的值会被覆盖，一个key值只对应一个value
	cout << s1['c'] << endl;

	//迭代器
	for (map<char,int>::iterator it = s1.begin(); it != s1.end(); ++it)
	{
		//first代表key值，second代表值
		//map会以key值的大小，以从小到大的顺序自动排序
		cout << it->first << " " << it->second << endl;
	}
}

//map常用函数
void test02()
{
	map<string, int> mp;

	//map的insert的用法，要加	pair<string,int>
	mp.insert(pair<string, int>("wang", 111));

	mp["wang"] = 100;
	mp["zhao"] = 200;
	mp["qian"] = 300;
	mp["li"] = 400;
	mp["sun"] = 500;
	mp["zhou"] = 600;

	map<string, int>::iterator it;
	
	//find()函数
	it = mp.find("wang");
	cout << "find()函数：" << it->first << "  " << it->second << endl;

	//size()函数
	cout << "size()函数：" << mp.size() << endl;

	//clear()函数 清空所有的元素
	mp.clear();
	cout << "clear()函数之后的size()：" << mp.size() << endl;


	//erase()函数
	mp["wang"] = 100;
	mp["zhao"] = 200;
	mp["qian"] = 300;
	mp["li"] = 400;
	mp["sun"] = 500;
	mp["zhou"] = 600;

	mp.erase("li");							//按key值删除
	mp.erase(mp.find("zhao"));				//按元素相应的迭代器删除
	mp.erase(mp.find("wang"), mp.end());	//删除一个区间

}

//可以存储重复key值的 multimap容器
void test03()
{
	multimap<string, int> multimp;
	
	multimp.insert(pair<string, int>("wang", 111));
	multimp.insert(pair<string, int>("wang", 221));
	multimp.insert(pair<string, int>("wang", 331));
	multimp.insert(pair<string, int>("wang", 1441));

	
	for (multimap<string, int>::iterator it = multimp.begin(); it != multimp.end(); it++)
	{
		cout << it->first << "  " << it->second << endl;
	}
}

//unorder_map 内部不排序，速度快很多
void test04()
{
	unordered_map<string, int> ump;
	ump["wang"] = 123;
	ump["wang"] = 1333;	//会覆盖到上层的元素
	ump["zhang"] = 123;
	ump["zhao"] = 123;

	for (unordered_map<string,int>::iterator it = ump.begin(); it != ump.end(); ++it)
	{
		cout << it->first << " " << it->second << endl;
	}
}
int main()
{
	
	//test01();
	//test02();
	//test03();
	test04();

	system("pause");
	return EXIT_SUCCESS;
}

