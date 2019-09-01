#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<queue>
#include<string>

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

void test01()
{
	queue<Person>q;

	Person p1("wangjunjie", 18);
	Person p2("wangjunjie", 19);
	Person p3("wangjunjie", 20);
	Person p4("wangjunjie", 21);
	Person p5("wangjunjie", 22);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);

	cout << "���д�СΪ��" << q.size() << endl;

	//�鿴��ͷ  ��β ִ�г���
	while (!q.empty())
	{
		//��ͷ
		cout << "��ͷԪ��  ������" << q.front().m_Name << "���䣺 " << q.front().m_Age << endl;
		
		//��β
		cout << "��βԪ��  ������" << q.back().m_Name << "���䣺 " << q.back().m_Age << endl;

		//���� �Ƚ��ȳ�
		q.pop();
	}

	cout << "���д�СΪ�� " << q.size() << endl;

}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
