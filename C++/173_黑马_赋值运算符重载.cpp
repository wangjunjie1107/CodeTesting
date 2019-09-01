#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


//编译器会默认给一个类添加4个函数
// 构造函数（空实现）  析构函数（空实现） 拷贝构造（值拷贝） operator= (值拷贝)

class Person
{
public:

	//默认构造
	Person() 
	{
		cout << "Person默认构造函数调用" << endl;
	};

	//有参构造  
	Person(const char * name)
	{
		cout << "Person有参构造函数调用" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}

	//拷贝构造  深拷贝
	Person(const Person & p)
	{
		cout << "Person拷贝构造函数调用" << endl;
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);
	}

	//重载 = 运算符  深拷贝
	Person & operator=(const Person & p)
	{
		
		cout << "Person的赋值运算符重载 " << endl;

		//先判断堆区是否有数据，如果有先释放干净
		if (this->m_Name != NULL)
		{
			delete []this->m_Name;
			this->m_Name = NULL;
		}

		//开辟新空间 字符拷贝
		this->m_Name = new char[strlen(p.m_Name) + 1];
		strcpy(this->m_Name, p.m_Name);

		return *this; //  *this 代表 Person 本体
	}


	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
		if (this->m_Name != NULL)
		{
			delete[]this->m_Name;
			this->m_Name = NULL;
		}
	}


	char * m_Name;
};


void test01()
{
	Person p1("wangjunjie"); //有参构造

	Person p2(p1);  //拷贝构造

	Person p3; //默认构造

	p3 = p2; // = 运算符重载


	cout << "p1 = " << p1.m_Name << endl;
	cout << "p2 = " << p2.m_Name << endl;
	cout << "p3 = " << p3.m_Name << endl;
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
