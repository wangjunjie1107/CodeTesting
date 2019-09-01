#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//  继承好处： 减少重复代码，提高效率
//  继承语法： class 子类 ： 继承方式 父类
//  结果：子类对象  可以  访问到  父类的成员函数和成员变量（public、protected）


//	子类 ---  派生类（继承类）
//	父类 --- 基类



//利用继承实现页面
class BasePage
{
public:

	//公共头部
	void header()
	{
		cout << "首页/公开课/登陆/注册。。。（公共头部）" << endl;
	}

	//公共左侧列表
	void leftList()
	{
		cout << "Java、Python、C++学科分类（公共左侧列表）" << endl;
	}


	//公共底部
	void footer()
	{
		cout << "帮助中心、友情链接、站内地图（公共底部）" << endl;
	}
};

//Java学科
class Java : public BasePage
{
public:

	//中间显示Java教程
	void Content()
	{
		cout << "Java学科教程下载" << endl;
	}
};

//Python学科
class Python : public BasePage
{
public:

	//中间显示Python教程
	void Content()
	{
		cout << "Python学科教程下载" << endl;
	}
};

//C++学科
class CPlusPlus : public BasePage
{
public:

	//中间显示C++教程
	void Content()
	{
		cout << "C++学科教程下载" << endl;
	}
};

//继承好处： 减少重复代码，提高效率
//继承语法： class 子类 ： 继承方式 父类

//	子类 ---  派生类（继承类）
//	父类 --- 基类


void test01()
{
	cout << "-------------------------" << endl;
	cout << "Jave页面如下：" << endl;
	Java ja;

	//子类访问父类的成员函数
	ja.header();
	ja.footer();
	ja.leftList();

	//子类本身的成员函数
	ja.Content();  


	cout << "-------------------------" << endl;
	cout << "Python页面如下：" << endl;
	Python py;

	//子类访问父类的成员函数
	py.header();
	py.footer();
	py.leftList();

	//子类本身的成员函数
	py.Content();


	cout << "-------------------------" << endl;
	cout << "C++页面如下：" << endl;
	CPlusPlus cpp;

	//子类访问父类的成员函数
	cpp.header();
	cpp.footer();
	cpp.leftList();

	//子类本身的成员函数
	cpp.Content();
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
