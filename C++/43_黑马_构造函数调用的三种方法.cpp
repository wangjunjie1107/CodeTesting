#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
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

void test01()
{
	Person p1;//Ĭ�Ϲ��캯������

	//1�����ŷ�
	Person p1(10);//�вι��캯������

	p1.m_Age = 18;
	Person p2(p1); //�������캯��

	//��Ҫ�����ŷ� ����Ĭ�Ϲ��캯��
	//����������Ϊ�Ǻ�������
	//Person p();

	//2����ʾ��
	Person p3 = Person(10);//��ʽ�вι��캯������
	Person p4 = Person(p3);//��ʾ�������캯������

	
	//�������� �ص㣺������ִ����ϣ������ͷ�
	//�൱���вι��캯������
	Person(10);

	// ����������Ϊд�� Person p4  
	//����Ѿ���p4�����ض��� ��������ŵ���ֵû����
	Person(p4);

	////��ʽת����  �ɶ��Ե�
	Person p5 = 10;// �൱�� Person p5 = Person(10); 
	Person p6 = p5; // ��ʽתΪ Person p6 = Person(p5);
}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
