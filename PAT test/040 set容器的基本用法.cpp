#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<set>
#include<vector>

using namespace std;

/*
 
	set容器: 内部自动有序且不含重复元素的容器

	作用：自动去重并按升序排序，碰到需要去重却不方便直接开数组的情况可以尝试用set解决。

*/

struct node
{
	int x;
	struct node* next;
};

//定义一个set容器
void test01()
{
	set<int> s1;
	set<double> s2;
	set<string> s3;
	set<char> s4;
	set<vector<int> > s5;
	set<vector<node> > s6;
	set<vector<node> > s7[100];
}


//通过一个set迭代器访问元素  自动排序并实现去除重复元素的功能
void test02()
{
	// 自动排序并实现去除重复元素的功能
	set<int> s1;
	s1.insert(100);
	s1.insert(240);
	s1.insert(240);
	s1.insert(240);
	s1.insert(1130);
	s1.insert(1130);
	s1.insert(4);
	s1.insert(4);
	s1.insert(-50);
	s1.insert(4);
	s1.insert(100);

	for (set<int>::iterator it = s1.begin(); it != s1.end(); ++it)
	{
		cout << *it << endl;
	}
}

//常用函数
void test03()
{
	
	// 自动排序并实现去除重复元素的功能
	set<int> s1;
	s1.insert(100);
	s1.insert(240);
	s1.insert(240);
	s1.insert(30);
	s1.insert(-10);
	s1.insert(99);
	s1.insert(240);
	s1.insert(240);
	s1.insert(100);
	s1.insert(12230);
	s1.insert(45);
	s1.insert(64);
	s1.insert(94);
	s1.insert(7);
	s1.insert(94);
	s1.insert(-50);
	s1.insert(4);
	s1.insert(100);

	set<int>::iterator it = s1.begin();
	for (it = s1.begin(); it != s1.end(); ++it)
	{
		cout << *it << endl;
	}

	//查找特定元素
	s1.find(100);
	cout << *(s1.find(100)) << endl;

	//删除特定元素  结合find()函数
	s1.erase(s1.find(-50));

	//删除一个特定元素
	s1.erase(100);

	//删除一个区间内的所有元素  删除 -4 到 100  之间的元素
	s1.erase(s1.find(-4), s1.find(100));

	//获得元素个数
	int count = s1.size();
	cout << count << endl;

	//清空元素
	s1.clear();
}

int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;
}

