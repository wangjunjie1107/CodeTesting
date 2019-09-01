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
	//默认构造
	MyString();
	//有参构造
	MyString(const char* str); //MyString str = "abc";
	//拷贝构造
	MyString(const MyString& str);//MyString str2 = str;

	//重载 = 运算符
	MyString& operator=(const char* str); //str = "abc"
	MyString& operator=(const MyString& str); //str2 = str

	//重载 + 运算符
	MyString operator+(const char* str);
	MyString operator+(const MyString& str);

	//重载 []运算符
	char& operator[](int pos);

	//重载 ==
	bool operator==(const char* str);
	bool operator==(const MyString& str);

	//重载+=
	void operator+=(const MyString& str);
	void operator+=(const char* str);

	//析构
	~MyString();

private:
	char* pString;
	int m_Size;
};