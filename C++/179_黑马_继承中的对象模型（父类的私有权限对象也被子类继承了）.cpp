#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; // m_C������̳���ȥ�ˣ������ɱ����������˱���
};


class Son :public Base
{
public:
	int m_D;
};

void test01()
{
	cout << "sizeof(Son) = " << sizeof(Son) << endl; // 12 + 4 = 16��
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
