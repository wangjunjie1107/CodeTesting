#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//智能指针
class Person
{
public:
	Person(int age)
	{
		cout << "Person的构造函数调用" << endl;
		this->m_Age = age;
	}

	//打印年龄
	void showAge()
	{
		cout << "m_Age = " << this->m_Age << endl;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
		
	}

	int m_Age;
};


//智能指针
class smartPointer
{
public:
	smartPointer(Person * p)
	{
		this->m_Person = p;
		cout << "smartPointer构造函数调用" << endl;
	}

	//重载 -> 运算符
	Person * operator->()
	{
		return this->m_Person;
	}

	//重载* 运算符
	Person& operator*()
	{
		return *this->m_Person;
	}

	~smartPointer()
	{
		cout << "smartPerson的析构函数调用" << endl;
		
		if (this->m_Person != NULL)
		{
			delete this->m_Person;
			this->m_Person = NULL;
		}
	}

	Person * m_Person; //内部维护Person的指针
};

void test01()
{
	//Person * p = new Person(18);
	//p->showAge();
	//(*p).showAge();//与上面的效果一样
	//delete p;
	//智能指针 可以托管new出来的对象，创建好的堆区对象 不用写delete



	smartPointer sm(new Person(199));
	//sm->showAge();//sm->->showAge(); 编译器优化为sm->showAge();
	(*sm).showAge();
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
