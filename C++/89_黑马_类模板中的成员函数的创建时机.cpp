#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2" << endl;
	}
};

//类模板中成员函数并不是一开始创建，而是在替换T后，才去生成
template<class T>
class testClass
{
public:
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}

	T obj;
};


void test01()
{
	testClass<Person1>tc;
	tc.func1();
}
int main() 
{
	test01();
	
	system("pause");
	return EXIT_SUCCESS;
}
