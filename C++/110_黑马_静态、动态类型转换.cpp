#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1����̬ת�� static_cast
//�﷨��static_cast<Ŀ����������>(ԭ����/����

//������������
void test01()
{
	char a = 'a';
	double d = static_cast<double>(a);
	cout << d << endl;
}


//����ת��
class Base{};
class Son:public Base{};
class Other{};
void test02()
{
	Base * base = NULL;
	//base תΪ Son *  ��ת��  ��������ת�� ����ȫ
	Son * son = static_cast<Son *>(base);

	//son תΪ Base* ��ת�� ��������ת�� ��ȫ
	Base * base1 = static_cast<Base *>(son);

	//base1 ת Other*  ʧ��
	//Other * other = static_cast<Other *>(base1);
}


//2����̬����ת��
void test03()
{
	//��������������ת��
	char a = 'a';
	
	//double d = dynamic_cast<double>(a);
}

class Base1
{ 
	virtual void func1() 
	{
	
	}; 
};

class Son1 :public Base1
{
	virtual void func1()
	{

	};
};

class Other1{};

void test04()
{
	Base1 * base1 = NULL;
	//base תΪ Son1 * ��ת�� ����ȫ
	Son1 * son1 = dynamic_cast<Son1 *>(base1);//ʧ�� ����ȫ  ���麯��������� �ǰ�ȫ�ĵ�  ��������̬



	Son1 * son2 = NULL;
	//son ת Base1 *   ��ת��  ��ȫ
	Base1 * base2 = dynamic_cast<Base1 *>(son2);


	//base1 ת Other1 *
	//Other1 * other1 = dynamic_cast<Other1*>(base1);//������

	//���������̬��ת�����ǰ�ȫ��
	Base1 * base3 = new Son1;
	Son1 * son3 = dynamic_cast<Son1*>(base3);
}



int main()
{
	test01();
	

	system("pause");
	return EXIT_SUCCESS;
}
