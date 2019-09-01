#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1、   公共继承
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
		m_A = 100; //父类中的A到了子类中 是public权限
		m_B = 100; //父类中的B到了子类中 是protected权限
		//m_C = 100; //父类中私有C在子类中访问不到
	}
};
void test01()
{
	Son1 s;
	s.m_A = 100; //Son1中的A 可以访问的，在Son1中是public权限
	//s.m_B = 100; //Son1中的B 不可以访问的，在Son1中是protected权限
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
		m_A = 100;//父类中的A到了子类中 是protected权限
		m_B = 100;//父类中的B到了子类中 是protected权限
		//m_C = 100; //父类中私有C在子类中访问不到
	}
};

void test02()
{
	Son2 s;
	//s.m_A = 100;//Son2中的A 不可以访问的，在Son2中是protected权限
	//s.m_B = 100;//Son2中的B 不可以访问的，在Son2中是protected权限
	//s.m_C = 100; //类外访问不到m_C
}

//3、   私有继承
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
		m_A = 100;//父类中的A到了子类中 是private权限
		m_B = 100;//父类中的B到了子类中 是private权限
		//m_C = 100;//父类中私有C在子类中访问不到
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



int main(){



	system("pause");
	return EXIT_SUCCESS;
}
