#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<stdexcept>


//�ṩ�Լ����쳣��
class myOutOfRangeException :public exception
{
public:
	//��������
	myOutOfRangeException(const char * errInfo)
	{
		this->m_Error = string(errInfo);//const char * ������ʽ����ת��Ϊ string
	}

	//�вι���
	myOutOfRangeException(string errInfo)
	{
		this->m_Error = errInfo;
	}

	//��������
	virtual ~myOutOfRangeException() {};

	virtual const char * what() const //���������const��ʾ�˺�����һ��������
	{
		//string������ʽתΪ const char *
		//string ת const char * ���ó�Ա����  .c_str();
		return this->m_Error.c_str();
	}



	string m_Error;//�ڲ�ά��������Ϣ���ַ���
};


class Person
{
public:
	Person(int age)
	{
		if (age < 0 || age > 150)
		{
			//�вι���
			//myOutOfRangeException("���Լ����쳣������Խ�磡") 
			
			throw myOutOfRangeException("���Լ����쳣������Խ�磡");
		}

		this->m_Age = age;
	}

	int m_Age;
};

void test()
{
	try
	{
		Person p1(160);
	}
	catch (exception & e)
	{
		//exception & e  ����ָ������
		//e.what()  ��̬��ʹ��  ����ָ��ָ���������
		cout << e.what() << endl;
	}
}

int main()
{
	test();


	system("pause");
	return EXIT_SUCCESS;
}
