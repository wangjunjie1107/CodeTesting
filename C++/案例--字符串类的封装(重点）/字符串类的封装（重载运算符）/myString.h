#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyString
{
	//�������������
	friend ostream& operator<<(ostream & cout, MyString & str);

	//�������������
	friend istream& operator >> (istream & cin, MyString & str);

public:

	//Ĭ�Ϲ���
	MyString() {};

	//�вι���
	MyString(const char * str);//MyString str = "abc"
	
	//��������
	MyString(const MyString & str);//MyString str2 = str1;

	//��������
	~MyString();

	//����=�����  ֱ�ӽ��ַ�����ֵ���� �� ���ำֵ����
	MyString& operator=(const char * str);
	MyString& operator=(const MyString & str);

	//����+�����  �൱���ַ���׷��
	MyString operator+(const char * str);
	MyString operator+(const MyString & str);
	
	//����[]�����
	char& operator[](int pos);
	
	//����==
	bool operator==(const char * str);
	bool operator==(const MyString & str);



private:

	char * pString;//ά���ڵײ���ʵ���ٶ���������
	
	int m_Size;//�ַ������� ��ͳ��\0
};


//������������� <<
ostream& operator<<(ostream & cout, MyString & str);

//������������� >>
istream& operator >> (istream & cin, MyString & str);
