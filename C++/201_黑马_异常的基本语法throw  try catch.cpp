#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


/*
	�쳣�Ĺؼ��֣�throw�� try�� catch


	����쳣û���κεĴ��������Զ�����terminate������ʹ�����жϵ�


	ջ������
		��try��ʼ�𣬵�throw�׳��쳣ǰ��
		����ջ�ϵĶ��󶼱��Զ��ͷţ��ͷŵ�˳���빹���෴��
		������̳�Ϊջ����

	���񵽵��쳣��������봦������������׳�������һ���������ùؼ��� throw

	���������쳣 ��...���Բ���
*/




//�Զ��� �쳣��
class MyException
{
public:
	void printError()
	{
		cout << "���Լ����쳣" << endl;
	}
};


//ջ��������
class Person
{
public:
	Person()
	{
		cout << "PersonĬ�Ϲ��캯������" << endl;
	}

	~Person()
	{
		cout << "Person������������" << endl;
	}
};


int myDivision(int a, int b)
{
	if (b == 0)
	{
		//�׳��쳣

		//��try��ʼ�𣬵�throw�׳��쳣ǰ��
		//����ջ�ϵĶ��󶼱��Զ��ͷţ��ͷŵ�˳���빹���෴��
		//������̳�Ϊջ����

		Person p1;

		//�쳣��
		//throw MyException();  //�������� �������ִ���� �����ͷ�

		MyException p2;
		throw p2;	//�׳�ʵ��������
	}

	return a / b;
}


void test01()
{
	int a = 10;
	int b = 0;

	try
	{
		int ret = myDivision(a, b);
	}
	catch (int)
	{
		cout << "int�����쳣����" << endl;
	}
	catch (double)
	{
		//���񵽵��쳣��������봦������������׳�������һ���������ùؼ��� throw
		throw;
		cout << "double�����쳣����" << endl;
	}
	catch (char)
	{
		cout << "char�����쳣����" << endl;
	}
	catch (MyException e)
	{
		e.printError();
	}
	catch (...) //���������쳣 ��...���Բ���
	{
		cout << "���������쳣����" << endl;
	}
}


int main() 
{

	try
	{
		test01();
	}
	catch (double)
	{
		cout << "main �����е�double�����쳣����" << endl;
	}
	catch (...)
	{
		cout << "main �����е����������쳣����" << endl;
	}

	//����쳣û���κεĴ��������Զ�����terminate������ʹ�����жϵ�



	system("pause");
	return EXIT_SUCCESS;
}
