#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>

/*
遍历算法 遍历容器元素
@param beg 开始迭代器
@param end 结束迭代器
@param _callback  函数回调或者函数对象
@return 函数对象
*/


//函数对象  MyPrint()
struct MyPrint
{
	int m_Count;

	MyPrint()
	{
		m_Count = 0;
	}

	void operator()(int val)
	{
		cout << val << endl;
		m_Count++;
	}
};

//回调函数 myPrint
void myPrint(int val)
{
	cout << val << endl;
	
}


//1、for_each基本使用
void test01()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}


	//回调函数 myPrint
	for_each(v.begin(), v.end(), myPrint);


	//函数对象  MyPrint()
	for_each(v.begin(), v.end(), MyPrint());
}

//2、for_each 有返回值
void test02()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	//函数对象  MyPrint()  返回值也为函数对象
	MyPrint mp1 = for_each(v.begin(), v.end(), MyPrint());
	cout << "mp1中count值为：" << mp1.m_Count << endl;


}


class MyPrint2:public binary_function<int,int,void>
{
public:
	void operator()(int val, int start)const
	{
		cout << val + start << endl;
	}
};

//3、for_each可以绑定参数
void test03()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//绑定初始值 1000
	for_each(v.begin(), v.end(), bind2nd(MyPrint2(), 1000));
}

/*
transform算法 将指定容器区间元素搬运到另一容器中
注意 : transform 不会给目标容器分配内存，所以需要我们提前分配好内存
@param beg1 源容器开始迭代器
@param end1 源容器结束迭代器
@param beg2 目标容器开始迭代器
@param _cakkback 回调函数或者函数对象
@return 返回目标容器迭代器
*/

class MyTransform
{
public:
	int operator()(int val)
	{
		return val + 100;
	}
};

void test04()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>vTarget;//目标容器
	vTarget.resize(v.size()); //开辟容量


	//将 v 容器中的数字 以 函数对象 的方式 搬运到 目标容器
	// 函数对象的方式  return val + 100;

	transform(v.begin(), v.end(), vTarget.begin(), MyTransform());


	//打印
	for_each(vTarget.begin(), vTarget.end(), myPrint);
}

int main() 
{
	test01();
	test02();
	test03();
	test04();


	system("pause");
	return EXIT_SUCCESS;
}
