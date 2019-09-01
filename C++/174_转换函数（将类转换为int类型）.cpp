#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:

	//默认构造
	Person()
	{

	}

	//有参构造
	Person(double age)
	{
		this->m_Age = age;
	}



	//转换函数的声明 和 实现  转换为int类型
	operator int()
	{
		return int(this->m_Age);
	}
	//将 类 转换为char 类型
	operator char()
	{
		int int_age = int(this->m_Age);
		char char_age = char(int_age);

		return char_age;
	}

	//将 类 转换为 double 类型
	operator double()
	{
		return double(this->m_Age);
	}


	double m_Age;
};
void test01()
{ 
	Person p1(65.8);

	int int_age = p1;  //转换函数  直接将类p1转换为一个int类型的数字
	cout << "int 类型的 age = " << int_age << endl;

	char char_age = p1; //彩蛋  大写字母 A 的ASCII码值为  65
	cout << "char 类型的 age = " << char_age << endl;


	double double_age = p1;
	cout << "double 类型的 age = " << double_age << endl;

}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
