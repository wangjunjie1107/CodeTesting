#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


class MyString
{
public:
	explicit MyString(int len)
	{
		cout << "Mystring的有参构造函数调用(int)" << endl;
	}
	MyString(char * str)
	{
		cout << "Mystring的有参构造函数调用(char *)" << endl;
	}

};


void test01()
{
	MyString str = "wangjunjie";
	MyString str2("aaaa");
	MyString str3 = MyString("safaf");


	//隐式转换法
	//有人会认为是  字符串是  "10"  
	//也有人会认为字符串长度为10
	//MyString str4 = 10;//为了防止这种写法，可以用关键字 explicit

	//explicit关键字
	//主要用途：防止利用隐式转换法 创建对象

	MyString str5(10);
	MyString str6 = MyString(10);


}
