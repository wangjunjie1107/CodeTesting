#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//编译器会默认给一个类添加4个函数
// 构造函数（空实现）  析构函数（空实现） 拷贝构造（值拷贝） operator= (值拷贝)

class Person
{
public:
	Person() { cout << "Person默认构造函数调用" << endl; }

	Person(const char * name) // "Tom"
	{
		cout << "Person有参构造函数调用" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}

	Person(const Person & p)
	{
		cout << "Person拷贝构造函数调用" << endl;
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
	}

	//重载 = 运算符
	Person& operator=(const Person & p)
	{
		//先判断堆区是否有数据，如果有先释放干净
		if (this->m_Name != NULL)
		{
			delete[] this->m_Name;
			this->m_Name = NULL;
		}
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
		return *this;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
		if (this->m_Name != NULL)
		{
			delete[] this->m_Name;
			this->m_Name = NULL;
		}
	}

	char * m_Name;
};

void test01()
{
	Person p1("Tom");
	Person p2("Jerry");

	Person p3;

	p3 = p1 = p2; //赋值

	cout << "p1的姓名为： " << p1.m_Name << endl;
	cout << "p2的姓名为： " << p2.m_Name << endl;
	cout << "p3的姓名为： " << p3.m_Name << endl;

	Person p4(p3);
}

int main() {
	test01();

	//int a = 10;
	//int b = 20;
	//int c;
	//c = a = b;
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	//cout << "c = " << c << endl;

	system("pause");
	return EXIT_SUCCESS;
}
