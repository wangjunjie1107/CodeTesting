#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person
{
public:
	/*
		�������������Ҫд�� ����Ȩ����

		���캯��д����
			1 ����Ҫ����ֵ ����дvoid 
			2 ���캯�����ƺ�������ͬ
			3 �����в��������Է�����������
	*/

	//Ĭ�Ϲ���
	Person()
	{
		cout << "Person�Ĺ��캯������" << endl;
	}

	//�вι���
	Person(int age)
	{
		this->m_Age = age;
		cout << "Person���вι��캯������" << endl;

	}

	/*
		����������
			1 ����Ҫ�з���ֵ ����дvoid
			2 ������������ �빹�캯����ͬ ǰ����Ҫ�� ~
			3 �������в��� �����Է�������
	*/
	~Person()
	{
		cout << "Person��������������" << endl;
	}


	int m_Age;
};


void test()
{
	//���캯���ɱ������Զ�����һ�Σ������ֶ�����
	//������ǲ��ṩ���캯����������Ҳ���Զ��ṩ���캯����Ĭ�Ͽ�ʵ��

	//�������� Ҳ�Ǳ������Զ�����һ��
	//������ǲ��ṩ�������������������ṩ��ʵ����������
	
	Person p;
	Person p1(5);
	cout << "-------------------------\n";

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
