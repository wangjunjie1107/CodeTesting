#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class MyString
{
	friend ostream& operator<<(ostream& cout, MyString& str);
	friend istream& operator>>(istream& cout, MyString& str);

public:
	//Ĭ�Ϲ���
	MyString();
	//�вι���
	MyString(const char* str); //MyString str = "abc";
	//��������
	MyString(const MyString& str);//MyString str2 = str;

	//���� = �����
	MyString& operator=(const char* str); //str = "abc"
	MyString& operator=(const MyString& str); //str2 = str

	//���� + �����
	MyString operator+(const char* str);
	MyString operator+(const MyString& str);

	//���� []�����
	char& operator[](int pos);

	//���� ==
	bool operator==(const char* str);
	bool operator==(const MyString& str);

	//����+=
	void operator+=(const MyString& str);
	void operator+=(const char* str);

	//����
	~MyString();

private:
	char* pString;
	int m_Size;
};