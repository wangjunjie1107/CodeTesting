#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

//模板中 也可以使用默认参数
template<class NAMETYPE,class AGETYPE = int>
class Person
{
public:
	Person(NAMETYPE name, AGETYPE age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "姓名： " << this->m_Name << "年龄： " << this->m_Age << endl;
	}


	NAMETYPE m_Name;
	AGETYPE m_Age;
};

void test01()
{
	Person <string>p1("tom", 20);
	p1.showPerson();
}
int main() 
{
	test01();
	
	system("pause");
	return EXIT_SUCCESS;
}
