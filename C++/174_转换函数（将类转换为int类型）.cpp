#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:

	//Ĭ�Ϲ���
	Person()
	{

	}

	//�вι���
	Person(double age)
	{
		this->m_Age = age;
	}



	//ת������������ �� ʵ��  ת��Ϊint����
	operator int()
	{
		return int(this->m_Age);
	}
	//�� �� ת��Ϊchar ����
	operator char()
	{
		int int_age = int(this->m_Age);
		char char_age = char(int_age);

		return char_age;
	}

	//�� �� ת��Ϊ double ����
	operator double()
	{
		return double(this->m_Age);
	}


	double m_Age;
};
void test01()
{ 
	Person p1(65.8);

	int int_age = p1;  //ת������  ֱ�ӽ���p1ת��Ϊһ��int���͵�����
	cout << "int ���͵� age = " << int_age << endl;

	char char_age = p1; //�ʵ�  ��д��ĸ A ��ASCII��ֵΪ  65
	cout << "char ���͵� age = " << char_age << endl;


	double double_age = p1;
	cout << "double ���͵� age = " << double_age << endl;

}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
