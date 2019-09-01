#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

//单例模式--打印机类
//通过一个类，只能创建一个对象，共享这个对象
class Printer
{
public:

	//对外提供getInstance 获取打印机指针，而且是只读状态
	static Printer* getInstance()
	{
		return singlePrinter;
	}

	void printing(string Str)
	{
		cout << Str << endl;
		this->m_count++;
	}

	int m_count = 0;//统计打印次数

private:

	//防止创建多个对象，将构造函数私有化
	Printer() {}; 
	Printer(const Printer& p) {};

	//静态成员变量  类内声明 类外初始化
	static Printer* singlePrinter;
};
//类外初始化
Printer* Printer::singlePrinter = new Printer;

void test01()
{
	Printer* p1 = Printer::getInstance();
	p1->printing("入职申请");
	p1->printing("旅游申请");
	p1->printing("升值申请");
	p1->printing("离职申请");
	cout << "打印机使用次数为： " << p1->m_count << endl;


	Printer* p2 = Printer::getInstance();
	p2->printing("调休申请");
	//若对于不同的指针，打印次数在叠加，则说明使用了同一个对象。
	cout << "打印机使用次数为： " << p2->m_count << endl;


	//这种创建方式会调用默认构造，创建新的对象
	//因此要将构造函数私有化，防止创建多个对象
	//Printer* p3 = new Printer; 
	//p3->printing("调休申请");
	//cout << "打印机使用次数为： " << p3->m_count << endl;

}



int main() 
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
