#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
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

//��ģ���г�Ա����������һ��ʼ�������������滻T�󣬲�ȥ����
template<class T>
class testclass
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


int main()
{
	testclass<Person2>p1;
	p1.func2();
	

	system("pause");
	return EXIT_SUCCESS;

}
