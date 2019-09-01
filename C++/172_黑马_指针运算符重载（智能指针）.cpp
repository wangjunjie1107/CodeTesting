#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:

	Person() {};

	Person(int age)
	{
		this->m_Age = age;
		cout << "Person 构造函数调用" << endl;
	}

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
class smartPointer
{
public:
	smartPointer()
	{
		this->m_Person = new Person;
		cout << "smartPerson的默认构造函数调用" << endl;
	}

	smartPointer(Person * p)
	{
		this->m_Person = p;
		cout << "smartPerson的有参构造函数调用" << endl;
	}

	//重载 -> 运算符
	Person * operator->()
	{
		return this->m_Person;
	}


	//重载 * 运算符
	Person & operator*()
	{
		return *this->m_Person;
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

	//smartPerson类中成员为Person类指针
	Person * m_Person; //内部维护Person的指针

};

void test01()
{
	/*Person * p = new Person(18);
	p->showAge();
	p->m_Age = 19;
	(*p).showAge();

	delete p;
*/

	//只能指针可以托管new出来的对象
	//创建好的堆区对象 不用写delete
	Person * p = new Person(25);
	smartPointer sm(p);
	 
	sm->showAge();  // sm->->showAge();  编译器优化为sm->showAge();
	
	
	sm->m_Age = 26;
	(*sm).showAge();



}


int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
