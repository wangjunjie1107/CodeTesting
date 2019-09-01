#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyString
{

	//重载<<运算符
	friend ostream& operator<<(ostream& cout, MyString & str);


	//重载>>运算符
	friend istream& operator >> (istream & cin, MyString & str);


private:
	char * pString; 	//维护在底层真实堆区开辟的空间
	int m_Size;		   //字符串长度 不统计\0
public:

	//默认构造
	MyString();

	//有参构造
	MyString(const char * str);  // MyString str = "abc"

								 //拷贝构造
	MyString(const MyString & str);   //MyString str2 = str;


									  //重载=运算符 
	MyString & operator=(const MyString & p);  //  str2 = str;
	MyString & operator=(const char * str);  //str = "abc"


											 //重载+运算符
	MyString operator+(const MyString & p);
	MyString operator+(const char * str);


	//重载[]运算符
	char & operator[](int num);

	//重载==
	bool operator==(const MyString & p);
	bool operator==(const char * str);

	//重载+=运算符
	MyString & operator+=(const MyString & p1);
	MyString & MyString::operator+=(const char * p2);


	//析构函数
	~MyString();
};
