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
		m_Age = a;
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

//2�����캯���ĵ���
void test01()
{
	//Ĭ�Ϲ��캯���ĵ��÷�ʽ
	Person p1;  //Ĭ�Ϲ��캯������
}

void test02()
{
	//1�����ŷ�  �����вι��캯�� �� �������캯��
	//Person p1(19);//�вι��캯������
	//cout << "p1������Ϊ�� " << p1.m_Age << endl;


	//p1.m_Age = 18;
	//Person p2(p1);//�������ŷ� ���ÿ������캯��
	////�������캯�����ֵ���뵽���캯����
	//cout << "p2������Ϊ�� " << p2.m_Age << endl;


	////ע������1����Ҫ�������ŷ� ����Ĭ�Ϲ��캯�� Person p();
	////ԭ�򽫴��뿴�� ������������������Ϊ���ڴ�������
	////Person p();
	////void func();

	////2����ʾ��
	//Person p3 = Person(10); //�вι������
	////��ʾ�� ���ÿ������캯��
	//Person p4 = Person(p3);


	//����д Person(10); ��Ϊ �������� 
	//�ص㣺������ִ����ϣ������ͷ�
	/*Person(10);
	cout << "aaaaaaaaa" << endl;*/

	//ע������2 �� ��Ҫ���ÿ������캯�� ��ʼ����������
	Person(p4);  
	// ��д��Person(p4);  ����������Ϊд�� Person p4   �ͳ�Ϊ��Ĭ�Ϲ��캯������
	//����Ѿ���p4�����ض��� ��������ŵ���ֵû����

	//3 ��ʽת���� �ɶ��Ե�
	//��������ʽ������תΪ Person p5 = Person(10); 
	//Person p5 = 10;
	//������ʽת����  ���ÿ������캯��
	//Person p6 = p5; // ��ʽתΪ Person p6 = Person(p5);
}

int main() 
{
	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
