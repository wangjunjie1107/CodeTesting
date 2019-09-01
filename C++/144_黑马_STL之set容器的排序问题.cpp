#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <set>
#include <string>

//set �� multiset ������
void test01()
{
	set<int>s;
	//����Ĵ���
	pair < set<int>::iterator, bool >ret = s.insert(10);

	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}

	ret = s.insert(10); //�ڶ��β���ʧ�� set�����������ͬ��ֵ

	if (ret.second)
	{
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ��" << endl;
	}

	multiset<int>multi;
	multi.insert(10);
	multi.insert(10);

	for (multiset<int>::iterator it = multi.begin();it != multi.end();it++)
	{
		cout << *it << endl;
	}

}


//���������() �ı�set�����������
class myCompareInt
{
public:
	bool operator()(int a, int b)
	{
		return a > b;//��������
	}
};


//set��������
void test02()
{
	//ͨ���º��� �ı�set�����������  
	set<int, myCompareInt>s; //�ڶ���������һ���࣬ ���з�װ�˺���
	s.insert(20);
	s.insert(10);
	s.insert(550);
	s.insert(23);
	s.insert(242);

	for (set<int, myCompareInt>::iterator it = s.begin(); it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



//�����Զ�����������set��������
class Person
{
public:
	//��ʼ�������б�
	Person(string name, int age,int height) :m_Name(name), m_Age(age),m_Height(height)
	{

	}

	string m_Name;
	int m_Age;
	int m_Height;
};


//�Զ��������������� ����()�����
class MyComparePerson
{
public:
	bool operator()(const Person & p1, const Person & p2)
	{
		//���併�� ���������ͬ  ���������
		if (p1.m_Age == p2.m_Age)
		{
			return p1.m_Height < p2.m_Height;
		}
		return p1.m_Age > p2.m_Age;
	}
};

void test03()
{
	set<Person, MyComparePerson>s;
	
	Person p1("aaa", 18, 180);
	Person p2("bbb", 33, 188);
	Person p3("ccc", 54, 120);
	Person p4("ddd", 19, 150);
	Person p5("eee", 19, 180);
	Person p6("fff", 19, 170);
	Person p7("ggg", 33, 183);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	s.insert(p5);
	s.insert(p6);
	s.insert(p7);


	cout << "----------------------------------------------------------------\n";
	cout << "�Զ������������������併�����������ͬ�����������" << endl << endl;
	for (set<Person, MyComparePerson>::iterator it = s.begin();it != s.end();it++)
	{
		cout << "         ������ " << it->m_Name << "  ���䣺  " << it->m_Age << "  ��ߣ�  " << it->m_Height << endl;
	}
	cout << "----------------------------------------------------------------\n";

}
int main()
{

	//test01();
	//test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
