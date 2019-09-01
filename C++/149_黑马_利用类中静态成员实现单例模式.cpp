#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//打印机类
class Printer
{
private:
	static Printer * singlePrinter;

	Printer() { m_Count = 0; }; //将默认构造作为私有成员

	Printer(const Printer & ) {};//将拷贝构造作为私有成员


public:
	int m_Count;//统计打印次数

	//外部获取接口
	static Printer * getInstence()
	{
		return singlePrinter; //返回Printer类型的对象
	}

	//调用单例模式中的成员函数
	void printTest(string text)
	{
		cout << text << endl;
		m_Count++;
	}
};

Printer * Printer::singlePrinter = new Printer;

void test01()
{
	//获取接口 通过接口创建类对象
	Printer * p1 = Printer::getInstence();


	//调用成员函数
	p1->printTest("wangjunjie 18");
	p1->printTest("wangjunjie 19");
	p1->printTest("wangjunjie 20");
	p1->printTest("wangjunjie 21");

	cout << "打印次数为：" << p1->m_Count << endl;

	Printer * p2 = Printer::getInstence();

	p2->printTest("wangjunjie 25");
	cout << "打印次数为：" << p2->m_Count << endl;

	//通过同一个接口创建的对象，使用的是同一个对象接口，所以打印次数重复

}


int main()
{
	test01();


	system("pause");
	return EXIT_SUCCESS;
}


















