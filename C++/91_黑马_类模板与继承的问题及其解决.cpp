#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template<class T>
class Base
{
public:
	T m_A;
};

//子类在继承时，必须确定出父类的T的数据类型，否则无法给T分配内存空间
class Son :public Base<int>
{

};


template<class T>
class Base2
{
public:
	T m_A;
};

template<class T1, class T2>
class Son2 :public Base2<T2>
{
public:
	Son2()
	{
		cout << "T1的类型为： " << typeid(T1).name() << endl;
		cout << "T2的类型为： " << typeid(T2).name() << endl;
	}

	T1 m_B;
};


void test01()
{
	Son2<int, double> s;
}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
