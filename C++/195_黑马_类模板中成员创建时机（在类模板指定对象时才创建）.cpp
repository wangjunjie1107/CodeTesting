#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person1
{
public:
	void showPerson1()
	{
		cout << "showPerson1" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "showPerson2" << endl;
	}
};

//��ģ���г�Ա����������һ��ʼ�������������滻T�󣬲�ȥ����

template<class T>
class testClass
{
public:
	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}

	T obj;
};

void test01()
{
	//��ģ���г�Ա����������һ��ʼ������
	//�������滻T�󣬲�ȥ����
	//sizeof(testClass); //ȱ�ٲ����б�  
	

	//��ģ��  ʹ�õ�ʱ�� ���� ��ʽָ������
	testClass<Person1>tc1;
	tc1.func1();

	testClass<Person2>tc2;
	tc2.func2();

}

int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
