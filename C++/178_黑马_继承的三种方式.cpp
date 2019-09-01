#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//1、公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	
	void func()
	{
		//父类中的A到了子类中 是public权限
		m_A = 100;  
		//父类中的B到了子类中 是protected权限
		m_B = 100;
		
		//不可访问 父类中私有C在子类中访问不到
		//m_C = 100;
	}
};

void test01()
{
	Son1 s;
	s.m_A = 100;      //m_A 对于类 A 是 公共权限， 在类外可以访问
	//s.m_B = 100;   //m_B 对于类 B 是 保护权限，在类内可以访问，在类外不可以访问

}


//2、   保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;	 //  父类中的公共权限，以保护方式继承，在子类中为protected权限，可以在子类中访问，不可以在类外访问。
		m_B = 100;   //  父类中的保护权限，以保护方式继承，在子类中为protected权限，可以在子类中访问，不可以在类外访问。
		//m_C = 100; //  父类中的私有权限，不可以在子类中访问
	}
};

void test02()
{
	Son2 s;
	//s.m_A = 100;   // m_A 对于类 Base2 是 保护权限， 在类外不可以访问 
	//s.m_B = 100;	//  m_B 对于类 Base2 是 保护权限， 在类外不可以访问 
	//s.m_C = 100; //   类外访问不到m_C
}

//3、私有继承
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;		// 父类中的 public    到了子类中 是private权限  在它的子类中不可访问   类外更无法访问
		m_B = 100;		// 父类中的 protected 到了子类中 是private权限  在它的子类中不可访问   类外更无法访问
	  //m_C = 100;		// 父类中私有C在子类中访问不到
	}
};

class GrandSon3 : public Son3
{
public:
	void func1()
	{
		//m_A = 100; //在Son3中A私有权限，子类访问不到
		//m_B = 100; //在Son3中B私有权限，子类访问不到
		//m_C = 100;  //Son3都访问不到
	}
};

void test03()
{
	Son3 s;
	//s.m_A = 100; //在Son3中A私有权限,类外访问不到
	//s.m_B = 100; //在Son3中B私有权限,类外访问不到
	//s.m_C = 100; //在Son3中都访问不到，类外更访问不到
}



int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
