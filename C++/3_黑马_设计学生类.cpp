#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

/*
设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
*/

class Student
{
	//公共权限
public:

	//在类内部写的属性 和 函数   称为成员 
	//属性   --- 成员属性   成员变量
	//函数   --- 成员函数   成员方法

	//行为 设置 访问 姓名学号

	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}

	//设置学号
	void setId(int id)
	{
		m_Id = id;
	}
	//获取学号
	int getId()
	{
		return m_Id;
	}

	//显示学生信息
	void showInfo()
	{
		cout << "姓名： " << m_Name << " 学号： " << m_Id << endl;

	}

	//属性
	//姓名
	string m_Name;

	//学号
	int m_Id;

};

void test01()
{
	////创建学生对象

	//Student s1; //通过类 创建对象的过程  实例化

	//s1.m_Name = "张三";
	//s1.m_Id = 1;
	//s1.showInfo();
	////cout << "姓名： " << s1.m_Name << " 学号： " << s1.m_Id << endl;


	//Student s2;

	//s2.setName("李四");
	//s2.setId(2);

	////cout << "姓名： " << s2.getName() << " 年龄： "<<  s2.getId() << endl;
	//s2.showInfo();

	Student s3;

	s3.setName("wangjunjie");
	s3.setId(333);
	s3.showInfo();
}


int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
