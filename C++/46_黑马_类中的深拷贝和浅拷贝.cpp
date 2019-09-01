#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
class Person
{
public:

	//�вι��캯��  ��ʼ��
	Person(char * name, int age)
	{
		//��Person������ ���ٶ���
		m_Name = (char *)malloc(strlen(name) + 1);
		strcpy(m_Name, name);

		m_Age = age;
	}


	//�Լ��ṩ�������캯��  ʵ�����  ��ֹǳ�������ֵ��ڴ��ظ��ͷŵ�����
	Person(const Person &p)
	{
		m_Age = p.m_Age;
		//m_Name = p.m_Name;  �������ṩ�ľ������д���
		//��������ڶ��������ڴ� ����Ҫ�Լ�ʵ�����
		//��ֹ�ظ��ͷ��ڴ����
		m_Name = (char *)malloc(strlen(p.m_Name) + 1);
		
		strcpy(m_Name, p.m_Name);
	}

	~Person()//�ͷ��ڶ������ٵ�����
	{
		cout << "Person��������������" << endl;
		if (m_Name != NULL)
		{
			free(m_Name);
			m_Name = NULL;
		}
	}


	
	//����
	char * m_Name;
	//����
	int m_Age;
};



void test01()
{
	Person p1("Tom", 18);//�вι��캯������

	cout << "p1��������" << p1.m_Name << " ���䣺 " << p1.m_Age << endl;

	Person p2 = p1; //���ÿ������캯�� ��ʼ�� p2����

	cout << "p2��������" << p2.m_Name << " ���䣺 " << p2.m_Age << endl;

}


int main() 
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
