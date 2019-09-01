#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person1
{
public:
	void showPerson1()
	{
		cout << "showPerson1" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "showPerson2" << endl;
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
	//类模板中成员函数并不是一开始创建，
	//而是在替换T后，才去生成
	//sizeof(testClass); //缺少参数列表  
	

	//类模板  使用的时候 必须 显式指定类型
	testClass<Person1>tc1;
	tc1.func1();

	testClass<Person2>tc2;
	tc2.func2();

}

int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
