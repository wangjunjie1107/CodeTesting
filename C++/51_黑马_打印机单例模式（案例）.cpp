#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;

//打印机类
class Printer
{
public:
	static Printer * getInstance()
	{
		return singlePrinter;//返回私有静态成员变量
	}

	void printTest(string text)
	{
		cout << text << endl;
		m_Count++;
	}

	int m_Count;//统计打印次数

private:
	Printer() 
	{
		m_Count = 0;
	};//构造函数私有化
	Printer(const Printer &) {};//拷贝函数私有化
	static Printer * singlePrinter;
};

Printer * Printer::singlePrinter = new Printer;

void test01()
{
	Printer * p1 = Printer::getInstance();

	p1->printTest("wangjunjie");
	p1->printTest("wangjunjie");
	p1->printTest("wangjunjie");

	cout << "打印次数为： " << p1->m_Count << endl;

	Printer * p2 = Printer::getInstance();

	p2->printTest("wangjunjie");
	cout << "打印次数为： " << p2->m_Count << endl;


}
int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}

