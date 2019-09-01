#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

/*
	C++封装思想好处：将属性和行为作为一个整体，来表现生活中的事物

	封装第二层思想：将属性和行为 加以权限控制

	struct 和 class 的区别？？？

		struct 默认权限 public
		class  默认权限 private

*/

//人
struct Person
{
	char m_Name[64];
	int m_Age;

	void personEat()
	{
		cout << m_Name << "在吃人饭" << endl;
	}
};

//狗
struct Dog
{
	char m_Name[64];
	int m_Age;

	void DogEat()
	{
		cout << m_Name << "在吃狗粮" << endl;
	}
};

void test01()
{
	Person p1;
	strcpy(p1.m_Name, "wangjunjie");
	p1.m_Age = 25;
	p1.personEat();

	Dog dog;
	strcpy(dog.m_Name, "旺财");
	dog.m_Age = 5;
	dog.DogEat();
}


/*

	public	  公共权限    类内可以访问 类外可以访问
	protected 保护权限    类内可以访问 类外不可以访问   儿子可以访问父亲的保护权限的内容
	private   私有权限    类内可以访问 类外不可以访问   儿子不可以访问父亲的私有权限的内容

*/

class Person2
{
public:			//公共权限
	string m_Name;
protected:		//保护权限
	string m_car;
private:		//私有权限
	int m_Pwd;

public:
	void func()
	{
		m_Name = "zhangsan";//公共权限  类内可以访问
		m_car = "拖拉机";   //保护权限  类内可以访问
		m_Pwd = 12345;     //私有权限   类内可以访问
	}
};

void test02()
{
	Person2 p1;
	p1.m_Name = "zhangsan";
	cout << p1.m_Name << endl;


	//p1.m_car = "falali";   //保护权限  在类外 不可以访问的
	
	//p1.m_Pwd = 123;		//私有权限  在类外 不可以访问

}


int main() {

	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
