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
	Person(int age)
	{
		this->m_Age = age;
		cout << "Person���вι��캯������" << endl;
	}


	//��������  //ֵ���ݵı��� ���ǵ��� �������캯��
	Person(const Person & p)
	{
		this->m_Age = p.m_Age;
		cout << "Person�Ŀ������캯������" << endl;
	}


	//��������
	~Person()
	{
		cout << "Person��������������" << endl;
	}

	int m_Age;
};

//�������캯���ĵ���ʵ��

//1�����Ѿ������õĶ��� ��ʼ���µĶ���
void test01()
{
	Person p1(10);

	Person p2(p1);//�������캯������
	cout << "p2������Ϊ�� " << p2.m_Age << endl;
}
//2��ֵ���ݵķ�ʽ ������������ֵ
void doWork(Person p)
{

}

void test02()
{
	Person p3;
	doWork(p3);//ֵ���ݵķ�ʽ ������������ֵ ���ÿ������캯��
}

//3����ֵ�ķ�ʽ���ؾֲ�����
Person doWork2()
{
	Person p4(20);
	cout << "p4�����䣺" << p4.m_Age << endl;
	cout << "-----------------\n";
	return p4;
}

void test03()
{
	Person p5(10);
	cout << "p5�����䣺" << p5.m_Age << endl;

	p5 = doWork2();//��������ֵΪPerson����  
				
		//һ������������
		//��һ�� p4������
		//�ڶ��� �вι����p5������ ��ΪҪ���� ԭ����p5�Ѿ�û������ 
		//������ ��ֵ���p5������


	cout << "-----------------\n";
				   
}


/*
release�汾��  �������Ż��Ĵ���

Person p;

void doWork2(Person & p)
{

}
*/
int main()
{

	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}
