#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Person
{
public:

	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	string m_Name;
	int m_Age;
};

//ģ�岢��������ͨ��
//���������������ͣ����Ծ��廯ʵ�֣��������

template<class T>
bool myCompare(T & a, T & b)
{
	return a == b;
}

//��ͨ���ݽ��бȽ�  ��ֱ�ӱȽ�
void test01()
{
	int a = 10;
	int b = 80;
	if (myCompare(a, b))
	{
		cout << "a == b" << endl;
	}
	else
		cout << "a != b" << endl;
}

//�Զ�����������  ���бȽ� ��Ҫ����ģ��ľ��廯ʵ��
//���þ��廯ʵ�֣����������������
//�﷨�� template <>  ����ֵ����  ������ (������������..)

template <> bool myCompare(Person & p1, Person & p2)
{
	return p1.m_Age == p2.m_Age && p1.m_Name == p2.m_Name;
}

void test02()
{
	Person p1("Tom", 18);
	Person p2("wangjunjie", 18);
	if (myCompare(p1, p2)) //ʵ���Զ������͵ıȽ�
	{
		cout << "p1 == p2" << endl;
	}
	else
		cout << "p1 != p2" << endl;
}
int main()
{

	test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
