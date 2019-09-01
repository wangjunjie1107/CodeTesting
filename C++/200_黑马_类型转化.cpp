#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

/*

		��̬ת��  static_cast
			�﷨�� static_cast<Ŀ����������>(ԭ����/����)
			����ת�� static_cast ֻ�����ڻ��ࡢ������֮���ת��
	
		��̬����ת�� dynamic_cast
			��������������ת��  ����ȫ
			�������������̬ ת�����ǰ�ȫ��

		const_cast����ת��
			�����ԶԷ�ָ�������ý���ת��

		���½���ת�� reinterpret_cast
			���½���ת�� ��������ת��  �ܲ���ȫ

*/



//1����̬ת��  static_cast
//�﷨�� static_cast<Ŀ����������>(ԭ����/����)

//������������
void test01()
{
	char ch = 'a';
	double d = static_cast<double>(ch);
	cout << d << endl;
}

//����ת�� static_cast ֻ�����ڻ��ࡢ������֮���ת��
class Base{};
class Son:public Base{};
class Other{};
void test02()
{
	Base * base = NULL;
	//Base * תΪ Son *    ��ת��  ��������ת�� ����ȫ
	Son * son = static_cast<Son *>(base); //����


	// Son * תΪ Base *   ��ת��  ��������ת��  ��ȫ
	Son * son2 = NULL;
	Base * base2 = static_cast<Base *>(son2);

	// Base * ת Other *  ʧ��
	//Other * other = static_cast<Base *>(base2);
}


//2����̬����ת�� dynamic_cast  
//��������������ת��  ����ȫ
//�������������̬ ת�����ǰ�ȫ��
void test03()
{
	//������������������ת��
	char a = 'a';
	//double d = dynamic_cast<double>(a);//ת��ʧ��
}

class Base1{virtual void func1(){} };
class Son1:public Base1{virtual void func1(){} };
class Other1{};
void test04()
{
	//Base1 * base = NULL;
	//Base1 * תΪ Son1 *  ��ת�� ����ȫ
	//Son1 * son = dynamic_cast<Son1 *>(base);

	Son1 * son1 = NULL;
	//Son1 * ת Base1 *  ��ת�� ��ȫ
	Base1 * base1 = dynamic_cast<Base1 *>(son1);

	//���������̬ ת�����ǰ�ȫ��
	Base1 * base2 = new Son1;  //����ָ��ָ���������
	//����ָ�� תΪ ����ָ��  ����  ��ȫ
	Son1 * son2 = dynamic_cast<Son1 *>(base2);
}

//3��const_cast����ת��
void test05()
{
	//ָ��
	const int * p = NULL;

	//p תΪ int *
	int * pp = const_cast<int *>(p);
	const int * ppp = const_cast<const int *>(pp);

	//����
	int num = 10;
	int &numref = num;
	const int & numref2 = const_cast<const int &>(numref);
	int & numref3 = const_cast<int &>(numref2);

	//�����ԶԷ�ָ�������ý���ת��
	const int a = 10;
	//int aa = const_cast<int>(a);//ʧ��
}

//4�����½���ת�� reinterpret_cast
void test06()
{
	int a = 10;
	int * p = reinterpret_cast<int *>(a);

	//���½���ת�� ��������ת��  �ܲ���ȫ
	Base * base = NULL;
	Other * other = reinterpret_cast<Other*>(base);
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}




