#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyString
{
	//重载左移运算符
	friend ostream& operator<<(ostream & cout, MyString & str);

	//重载右移运算符
	friend istream& operator >> (istream & cin, MyString & str);

public:

	//默认构造
	MyString() {};

	//有参构造
	MyString(const char * str);//MyString str = "abc"
	
	//拷贝构造
	MyString(const MyString & str);//MyString str2 = str1;

	//析构函数
	~MyString();

	//重载=运算符  直接将字符串赋值给类 或 将类赋值给类
	MyString& operator=(const char * str);
	MyString& operator=(const MyString & str);

	//重载+运算符  相当于字符串追加
	MyString operator+(const char * str);
	MyString operator+(const MyString & str);
	
	//重载[]运算符
	char& operator[](int pos);
	
	//重载==
	bool operator==(const char * str);
	bool operator==(const MyString & str);



private:

	char * pString;//维护在底层真实开辟堆区的数组
	
	int m_Size;//字符串长度 不统计\0
};


//重载左移运算符 <<
ostream& operator<<(ostream & cout, MyString & str);

//重载右移运算符 >>
istream& operator >> (istream & cin, MyString & str);
