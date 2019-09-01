#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

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
struct dog
{
	char m_Name[64];
	int m_Age;

	void dogEat()
	{
		cout << m_Name << "在吃狗粮" << endl;
	}
};

void test01()
{
	Person p1;
	strcpy(p1.m_Name, "zhangsan");
	p1.m_Age = 19;
	p1.personEat();

	dog p2;
	strcpy(p2.m_Name, "旺财");
	p2.m_Age = 19;
	p2.dogEat();

	//调用不起来 吃狗粮行为了，
	//因为在Person结构体中没有DogEat
	//p1.dogEat();
}

//C++封装思想好处： 将属性和行为 作为一个整体  来表现生活中的事物
//封装第二层思想： 将属性和行为 加以权限控制

/*
	struct 默认权限 public
	class 默认权限 private
*/

//public  公共权限      类内 可以访问  类外 也可以访问
//protected  保护权限   类内 可以访问  类外 不可以访问  儿子可以访问父亲的保护权限的内容
//private    私有权限   类内 可以访问  类外 不可以访问  儿子不可以访问父亲的私有权限的内容


class Person2
{
public://公共权限
	string m_Name;
protected://保护权限  子类可以访问保护权限
	string m_Car;
private:
	int m_Pwd;//私有权限 子类不可以访问私有权限


public:
	void func()
	{
		m_Name = "wangjunjie";	//公共权限 类内可以访问
		m_Car = "benchi";		//保护权限 类内可以访问
		m_Pwd = 111;			//私有权限 类内可以访问
	}
};

class Person3 :public Person2
{
public:
	void func()
	{
		m_Car = "benchi";//子类可以访问父类的保护权限
		cout << m_Car << endl;
	
		//m_Pwd = 10;//子类无法访问父类的私有权限
	}

};

void test02()
{
	Person3 p;
	p.m_Name = "wangjunjie";
	cout << p.m_Name << endl;


	p.func();//可以打印父类的保护权限



}
int main()
{
	test02();


	system("pause");
	return EXIT_SUCCESS;
}
