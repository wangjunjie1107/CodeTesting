#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//�����Լ��Ĵ�����
class myException
{
public:
	void printError()
	{
		cout << "���Լ����쳣" << endl;
	}
};


//�����ĺ���
int myDivision(int a, int b)
{
	if (b == 0)
	{
		//�׳��쳣
		//throw 1;  //int
		//throw 2.1; //double
		//throw 'a';//char
		//throw "aaa";//��������
		throw myException();//�Լ��Ĵ�����

	}
	return a / b;
}



void test01()
{
	int a = 10;
	int b = 0;
	
	//����쳣
	try
	{
		myDivision(a, b);
	}
	//�����쳣
	catch (int)
	{
		//���񵽵��쳣��������봦������������׳�
		//����һ���������ùؼ��� throw
		throw;
		cout << "int���͵��쳣�׳�" << endl;
	}
	catch (double)
	{
		cout << "double���͵��쳣�׳�" << endl;
	}
	catch (char)
	{
		cout << "char���͵��쳣�׳�" << endl;
	}
	catch (myException error)
	{
		error.printError();
	}
	catch (...)//���������쳣 ��...���Բ���
	{
		cout << "�������͵��쳣�׳�" << endl;
	}
}
int main()
{
	try
	{
		test01();
	}
	catch(int)
	{
		cout << "main�����е�int���͵��쳣�׳�" << endl;
	}
	catch (double)
	{
		cout << "main �����е�double�����쳣����" << endl;
	}
	catch (...)
	{
		cout << "main�����е��������͵��쳣�׳�" << endl;
	}


	//��������쳣�������쳣û���κεĴ���
	//�����Զ�����terminate������ʹ�����жϵ�


	system("pause");
	return EXIT_SUCCESS;
}
