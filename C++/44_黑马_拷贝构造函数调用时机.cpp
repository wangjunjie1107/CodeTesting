#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:

	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}

	Person(int a)
	{
		cout << "Person���вι��캯������" << endl;
	}

	//��������  //ֵ���ݵı��� ���ǵ��� �������캯��
	Person(const Person &p)
	{
		cout << "Person�Ŀ������캯������" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "Person��������������" << endl;
	}

	int m_Age;
};

//1�����Ѿ������õĶ��� ��ʼ���µĶ���
void test01()
{
	Person p1;
	p1.m_Age = 10;

	Person p2(p1);//�������캯������
	cout << "p2������Ϊ�� " << p2.m_Age << endl;
}

//2��ֵ���ݵķ�ʽ ������������ֵ
void doWork( Person p)
{

}

void test02()
{
	Person p;
	doWork(p);
}

//3����ֵ�ķ�ʽ���ؾֲ�����
Person doWork2()
{
	Person p;
	return p;//���ÿ������캯��������p�Ŀ���
}

int func()
{
	int a = 10;
	return a;
}

void test03()
{
	Person p = doWork2();
}

/*
 release�汾�Ż��Ĵ���

 Person p;

 void doWork2(Person & p)
 {
 
 }
*/



int main(){
	//test01();
	//test02();
	//test03();

	int a = func();
	cout << "a  = " << a << endl;
	cout << "a  = " << a << endl;
	cout << "a  = " << a << endl;
	cout << "a  = " << a << endl;

	system("pause");
	return EXIT_SUCCESS;
}
