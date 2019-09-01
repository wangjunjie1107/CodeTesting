#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//对于企业开发 提倡 开闭原则
//开闭原则 ： 对扩展进行开放  对修改进行关闭

//多态好处：代码组织结构清晰，提高可读性，提高可扩展性
//多态的应用：父类指针指向子类对象


/*

	动态多态满足条件：
		（1）继承关系
		（2）父类写了 虚函数
		（3）子类  重写  父类中的虚函数

	多态使用：
		（1）父类的指针或者引用 指向子类的对象
		（2）父类指针调用子类重写的虚函数

	多态原理：
		（1）当父类中有了虚函数后，内部发生改变
		（2）多了vfptr  虚函数表指针 virtual function pointer
		（3）vfptr -> vftable 虚函数表
		（4）虚函数表内部记录函数入口地址
		（5）当子类重写父类中的虚函数后，子类的虚函数表中的函数入口地址被覆盖为子类虚函数
		（6）利用多态调用函数的时候，实现地址晚绑定，从虚函数表中找函数入口

	重写
		（1）有继承
		（2）父类中有虚函数、纯虚函数
		（3）子类重写父类中的虚函数、纯虚函数
		（4）重写： 返回值类型、函数名、形参列表一致 


*/



//利用多态实现计算器
class AbstractCaculator
{
public:
	//纯虚函数 
	//当类中有了纯虚函数 ，这个类属于抽象类
	//抽象类是无法实例化对象的
	//当有子类继承了抽象类，那么这个子类必须要重写父类中的纯虚函数，否则子类也是抽象类
	virtual int getResult() = 0;

	int m_A;
	int m_B;
};

//加法计算器
class AddCaculator :public AbstractCaculator
{
public:
	virtual int getResult()
	{
		return m_A + m_B;
	}
};

//减法计算器
class SubCaculator :public AbstractCaculator
{
public:
	virtual int getResult()
	{
		return m_A - m_B;
	}
};


//乘法计算器
class MulCaculator :public AbstractCaculator
{
public:
	virtual int getResult()
	{
		return m_A * m_B;
	}
};


//除法计算器
class DivCaculator :public AbstractCaculator
{
public:
	virtual int getResult()
	{
		if (m_B != 0)
		{
			return m_A / m_B;
		}
		else
			return -1;
	}
};


void test01()
{
	//用加法计算器
	//父类指针指向子类对象   多态的应用
	AbstractCaculator * cal1 = new AddCaculator;
	cal1->m_A = 10;
	cal1->m_B = 20;
	//父类指针调用子类中的重写的函数
	cout<< cal1->getResult() << endl;

	delete cal1;


	//用减法计算器
	//父类指针指向子类对象
	AbstractCaculator * cal2 = new SubCaculator;
	cal2->m_A = 100;
	cal2->m_B = 20;
	cout << cal2->getResult() << endl;

	delete cal2;


	//用乘法计算器
	//父类指针指向子类对象
	AbstractCaculator * cal3 = new MulCaculator;
	cal3->m_A = 100;
	cal3->m_B = 200;
	cout << cal3->getResult() << endl;

	delete cal3;


	//用除法计算器
	//父类指针指向子类对象
	AbstractCaculator * cal4 = new DivCaculator;
	cal4->m_A = 100;
	cal4->m_B = 20;
	cout << cal4->getResult() << endl;

	delete cal4;
}
int main() 
{

	test01();


	system("pause");
	return 0;
}
