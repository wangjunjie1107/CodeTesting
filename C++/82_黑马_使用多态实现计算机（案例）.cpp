#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//对于企业开发 提倡 开闭原则
//开闭原则：对扩展进行开放 对修改进行关闭

//多态好处：代码组织结构清晰，提高可读性，提高可扩展性

//利用多态实现计算器
class AbstractCalculator
{
public:

	//虚函数
	//vfptr virtual function pointer  虚函数指针
	virtual int getResult()
	{
		return 0;
	}

	int m_A;
	int m_B;
};

//加法计算器
class AddCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_A + m_B;
	}
};

//减法计算器
class SubCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_A - m_B;
	}
};


//乘法计算器
class MultCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_A * m_B;
	}
};

//除法计算器
class DivideCalculator :public AbstractCalculator
{

	int getResult()
	{
		if (m_B != 0)
		{
			return m_A / m_B;
		}
		else
		{
			cout << "除数为零！" << endl;
			return -1;
		}
	}
};

void test01()
{
	/*
		多态：父子关系；子类重写（函数名、参数列表、返回值都相同）父类函数

		函数重写：函数名、返回值、参数列表相同 
		函数重载：函数名、与返回值无关，参数列表不同

		使用多态：父类指针指向子类对象

	*/


	//使用加法计算器 
	cout << "----------使用加法计算器------------"<< endl;
	AbstractCalculator * cal = new AddCalculator;

	//赋值
	cal->m_A = 10;
	cal->m_B = 20;
	//调用函数
	cout << cal->getResult() << endl;
	//释放堆空间
	delete cal;

	//使用减法计算器 
	cout << "----------使用减法计算器------------" << endl;
	cal = new SubCalculator;
	cal->m_A = 100;
	cal->m_B = 200;
	cout << cal->getResult() << endl;
	delete cal;

	//使用乘法计算器 
	cout << "----------使用乘法计算器------------" << endl;
	cal = new MultCalculator;
	cal->m_A = 20;
	cal->m_B = 10;
	cout << cal->getResult() << endl;
	delete cal;

	//使用除法计算器
	cout << "----------使用除法计算器------------" << endl;
	cal = new DivideCalculator;
	cal->m_A = 20;
	cal->m_B = 10;
	cout << cal->getResult() << endl;
	delete cal;


	cal = NULL;

}

int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}

