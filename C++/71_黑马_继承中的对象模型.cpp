#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //m_C������̳�����ȥ�������ɱ����������˱�������˷��ʲ���
};

//C:\Program Files (x86)\Microsoft Visual Studio 12.0\Common7\Tools\Shortcuts
//E:��ת�̷� 
//cd ���ļ�Ŀ¼��  cd E:\0315\sendToStudent\Day16_C++\Code\01 ��ϵ���������\06 �̳��еĶ���ģ��

//cl /d1 reportSingleClassLayoutSon �ļ���  CL /d1  C��������ĸl   d����������1 

class Son:public Base
{
public:
	int m_D;
};

void test01()
{
	cout << "sizeof Son = " << sizeof(Son) << endl;//16
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
