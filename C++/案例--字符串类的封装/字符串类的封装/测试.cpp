#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "string.h"

void test01()
{
	cout << "--------------------------" << endl;
	cout << "test01:" << endl;


	MyString str1 = "abc";

	MyString str2 = str1;

	cout << "str1 = " << str1 << endl;

	cout << "str2 = " << str2 << endl;

	cout << "�����¸�str1��ֵ��" << endl;

	cin >> str1;

	cout << "str1 ���µ�ֵΪ�� " << str1 << endl;
}

void test02()
{
	cout << "--------------------------" << endl;
	cout << "test02:" << endl;

	MyString str3 = "abc";
	MyString str4 = "def";
	MyString str5 = str3 + str4;
	MyString str6 = str5 + "ghi";
	cout << "str5 = " << str5 << endl;
	cout << "str6 = " << str6 << endl;


	cout << "str5[0] = " << str5[0] << endl;
	str5[0] = 'z';//���ص������� ���Կ����޸�ֵ
	cout << "str5[0] = " << str5[0] << endl;


	if (str5 == str6)
	{
		cout << "str5 == str6" << endl;
	}
	else
	{
		cout << "str5 != str6" << endl;
	}

	MyString str7 = "zbcdef";
	if (str5 == str7)
	{
		cout << "str5 == str7" << endl;
	}
	else
	{
		cout << "str5 != str7" << endl;
	}
}

void test03()
{
	cout << "--------------------------" << endl;
	cout << "test03:" << endl;
	MyString str1 = "abc";
	MyString str2 = "def";

	//�ַ���׷��  ������+=����
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	//�ַ���׷��  �� �ַ������� ��+=����
	str1 += "wangjunjie";
	cout << "str1 = " << str1 << endl;

}


int main() {

	test01();
	test02();
	test03();


	system("pause");
	return EXIT_SUCCESS;
}