#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

//ģ���� Ҳ����ʹ��Ĭ�ϲ���
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
		cout << "������ " << this->m_Name << "���䣺 " << this->m_Age << endl;
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
