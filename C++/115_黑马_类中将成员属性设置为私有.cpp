#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;



//将成员属性设置为私有的好处： 
//可以控制属性对外的读写权限,
//对于写操作可以检测数据的有效性


class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		this->m_Name = name;
	}
	//读取姓名
	string getName()
	{
		return this->m_Name;
	}

	//设置年龄
	void setAge(int age)
	{
		//检测传入数据有效性
		if (age < 0 || age > 150)
		{
			cout << "传入数据无效" << endl;
			return;
		}

		this->m_Age = age;
	}
	//读取姓名
	int getAge()
	{
		return this->m_Age;
	}

	//设置爱人
	void setLover(string lover)
	{
		this->m_Lover = lover;
	}

private:
	string m_Name;   //可读可写
	int m_Age;		 //可读可写
	string m_Lover;  //只读
};

void test()
{
	Person p1;
	//姓名可读可写
	p1.setName("wangjunjie");
	cout << "p1的姓名为：" << p1.getName() << endl;

	//年龄可读可写
	p1.setAge(18);
	cout << "p1的年龄为：" << p1.getAge() << endl;


	p1.setLover("hahaha");//只写
}


int main()
{
	test();


	system("pause");
	return EXIT_SUCCESS;
}
