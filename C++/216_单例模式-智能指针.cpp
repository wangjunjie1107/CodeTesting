#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		cout << "Person构造函数调用" << endl;
		this->m_Age = age;
	}

	//打印年龄
	void showAge()
	{
		cout << "m_Age = " << this->m_Age << endl;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}

	int m_Age;
};

//智能指针
//可以托管new出来的对象，创建好的堆区对象 不用写delete
class smartPointer
{
public:
	smartPointer(Person* p)
	{
		this->m_Person = p;
		cout << "smartPointer构造函数调用" << endl;
	}

	//->运算符重载
	Person* operator->()
	{
		return this->m_Person;
	}

	//重载* 运算符
	Person& operator*()
	{
		return *(this->m_Person);
	}

	~smartPointer()
	{
		cout << "smartPointer析构函数调用" << endl;
		if (this->m_Person != NULL)
		{
			delete this->m_Person;
			this->m_Person = NULL;
		}
	}
	Person* m_Person; //内部维护Person指针
};


void test01()
{
	smartPointer sm(new Person(180));
	sm.m_Person->showAge();
	sm->showAge();// sm-> 代表 sm.m_Person
	(*sm).showAge();//(*sm)代表 m_Person对象
}


int main() 
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
