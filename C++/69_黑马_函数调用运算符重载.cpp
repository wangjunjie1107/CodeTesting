#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class MyPrint
{
public:
	//重载()运算符
	void operator()(string text)
	{
		cout << text << endl;
	}
};

void myPrint(string text)
{
	cout << text << endl;
}

void test01()
{
	MyPrint mp;
	//仿函数 本质不是函数，而是对象
	//将这样的对象 也称为 函数对象
	mp("hello world");
	mp("hahahah");
	myPrint("hello world");
}

//仿函数 非常灵活 没有固定写法
class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};


void test02()
{
	MyAdd m_Add;
	cout << m_Add(1, 3) << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;

}
