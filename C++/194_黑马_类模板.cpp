#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	Student() {};
	Student(string name)
	{
		this->m_Name = name;
	}


	//为了避免浅拷贝问题 自己可以重写拷贝构造函数 和 = 运算符重载 
	//重载 = 运算符
	/*Student & operator=(Student & s)
	{
		this->m_Name = s.m_Name;
		return *this;
	}*/

	string m_Name;
};
//模板中 也可以使用默认参数
template<class NameType,class AgeType = int>
class Person
{
public:
	Person(NameType  name, AgeType age)
	{
		this->age = age;
		this->m_Name = name;
	}

	void showPerson()
	{
		cout << "姓名：" << this->m_Name.m_Name;
		cout << "年龄：" << this->age << endl;
	}


	NameType m_Name;
	AgeType age;
};

void test01()
{
	//在类模板使用的时候，不可以用自动类型推导
	Student s("wangjunjie");

	Person<Student>p1(s, 22);
	Person<Student>p2(s, 28);

	//未避免浅拷贝问题 自己可以重写拷贝构造函数
	//p1 = p2; //编译器默认会提供拷贝构造函数
	
	p1.showPerson();
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
