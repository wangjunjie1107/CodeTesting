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


	//Ϊ�˱���ǳ�������� �Լ�������д�������캯�� �� = ��������� 
	//���� = �����
	/*Student & operator=(Student & s)
	{
		this->m_Name = s.m_Name;
		return *this;
	}*/

	string m_Name;
};
//ģ���� Ҳ����ʹ��Ĭ�ϲ���
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
		cout << "������" << this->m_Name.m_Name;
		cout << "���䣺" << this->age << endl;
	}


	NameType m_Name;
	AgeType age;
};

void test01()
{
	//����ģ��ʹ�õ�ʱ�򣬲��������Զ������Ƶ�
	Student s("wangjunjie");

	Person<Student>p1(s, 22);
	Person<Student>p2(s, 28);

	//δ����ǳ�������� �Լ�������д�������캯��
	//p1 = p2; //������Ĭ�ϻ��ṩ�������캯��
	
	p1.showPerson();
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
