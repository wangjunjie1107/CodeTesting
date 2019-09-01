#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyString
{

	//����<<�����
	friend ostream& operator<<(ostream& cout, MyString & str);


	//����>>�����
	friend istream& operator >> (istream & cin, MyString & str);


private:
	char * pString; 	//ά���ڵײ���ʵ�������ٵĿռ�
	int m_Size;		   //�ַ������� ��ͳ��\0
public:

	//Ĭ�Ϲ���
	MyString();

	//�вι���
	MyString(const char * str);  // MyString str = "abc"

								 //��������
	MyString(const MyString & str);   //MyString str2 = str;


									  //����=����� 
	MyString & operator=(const MyString & p);  //  str2 = str;
	MyString & operator=(const char * str);  //str = "abc"


											 //����+�����
	MyString operator+(const MyString & p);
	MyString operator+(const char * str);


	//����[]�����
	char & operator[](int num);

	//����==
	bool operator==(const MyString & p);
	bool operator==(const char * str);

	//����+=�����
	MyString & operator+=(const MyString & p1);
	MyString & MyString::operator+=(const char * p2);


	//��������
	~MyString();
};
