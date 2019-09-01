#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}

	//读取姓名
	string getName()
	{
		return m_Name;
	}

	//读取年龄
	int getAge()
	{
		return m_Age;
	}

	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			cout << "你这个老妖精" << endl;
			return;
		}
		m_Age = age;
	}

	//设置情人
	void setLover(string Lover)
	{
		m_Lover = Lover;
	}


private:

	string m_Name;//可读可写

	int m_Age = 18;//可读 可以写 但是有限制条件

	string m_Lover;//只写
};



//将成员属性设置为私有的好处： 
//		可以控制属性对外的读写权限,对于写操作可以检测数据的有效性


void test01()
{
	Person p1;



	//姓名 可读可写  只能通过类中的成员函数进行读写操作，不能直接读写
	p1.setName("wangjunjie");
	cout << "p1的姓名为： " << p1.getName() << endl;




	//年龄 可读  可写 但是有限制的写入
	//只能通过类中的成员函数进行读写操作，不能直接读写
	p1.setAge(200);
	cout <<"p1的姓名为： "<< p1.getAge() << endl;




	//情人 只可写   只能通过类中的成员函数进行写操作，不能直接读写
	p1.setLover("hahaha");
	//cout << p1.m_Lover << endl;//只写状态，不可以读
}


int main() 
{

	test01();
	system("pause");
	return EXIT_SUCCESS;
}
