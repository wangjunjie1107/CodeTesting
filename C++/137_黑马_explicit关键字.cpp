#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


class MyString
{
public:
	explicit MyString(int len)
	{
		cout << "Mystring���вι��캯������(int)" << endl;
	}
	MyString(char * str)
	{
		cout << "Mystring���вι��캯������(char *)" << endl;
	}

};


void test01()
{
	MyString str = "wangjunjie";
	MyString str2("aaaa");
	MyString str3 = MyString("safaf");


	//��ʽת����
	//���˻���Ϊ��  �ַ�����  "10"  
	//Ҳ���˻���Ϊ�ַ�������Ϊ10
	//MyString str4 = 10;//Ϊ�˷�ֹ����д���������ùؼ��� explicit

	//explicit�ؼ���
	//��Ҫ��;����ֹ������ʽת���� ��������

	MyString str5(10);
	MyString str6 = MyString(10);


}
