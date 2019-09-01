#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person() {};
	Person(int a,int b):m_A(a),m_B(b){}

	//ͨ����Ա��������+�����
	/*Person operator+(Person & p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}*/
	int m_A;
	int m_B;
};

//ͨ��ȫ�ֺ���ʵ�ּӺ����������
Person operator+(Person & p1, Person & p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}

//ͨ��ȫ�ֺ���ʵ�ּӺ����������
Person operator+(Person & p1, int num)
{
	Person temp;
	temp.m_A = p1.m_A + num;
	temp.m_B = p1.m_B + num;
	return temp;
}

//ͨ��ȫ�ֺ���ʵ�ֳ˺����������
Person operator*(Person & p1, int num)
{
	Person temp;
	temp.m_A = p1.m_A * num;
	temp.m_B = p1.m_B * num;
	return temp;
}

void test01()
{
	//�вι��캯������
	Person p1(10, 10);
	Person p2(10, 10);

	//��Ա���� ���ʵ���
	//Person p3 = p1.operator+(p2);
	//p3 = p1 + p2;//��
	
	//ȫ�ֺ��� ���ʵ���
	//Person p4 = operator+(p1,p2);
	//p4 = p1 + p2;//��



	Person p5 = p1 + p2;
	cout << "p5��m_A = " << p5.m_A << " p5��m_B = " << p5.m_B << endl;
	
	//��������� �ɲ����Է����������أ� ����
	//��������ȫ�ֺ�����������
	//Person operator+(Person & p1, Person & p2)
	//Person operator+(Person & p1, int num)
	Person p6 = p1 + 200;
	cout << "p6��m_A = " << p6.m_A << " p6��m_B = " << p6.m_B << endl;


	//��������� �˷�
	Person p7 = p1 * 123;
	cout << "p7��m_A = " << p7.m_A << " p7��m_B = " << p7.m_B << endl;

}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
