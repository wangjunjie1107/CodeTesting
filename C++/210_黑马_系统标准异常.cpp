#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

#include<exception>  //��׼�쳣ͷ�ļ�


class Person
{
public:
	Person(int age)
	{
		if (age > 150)
		{
			throw out_of_range("�������");  //�׳������쳣
		}
		else if (age < 0)
		{
			throw length_error("�����С��");
		}


		this->m_Age = age;
	}

	int m_Age;
};

void test01()
{
	try
	{
		Person p2(-1);  //���Դ���
	}
	catch (out_of_range & e)
	{
		cout<< e.what() << endl;
	}
	catch (length_error & e)
	{
		cout << e.what() << endl;
	}
	catch(exception & e)  //���е��쳣�ĸ���
	{
		cout << e.what() << endl;
	}
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}




