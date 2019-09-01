#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class MyString
{
public:

	explicit MyString(int len)
	{
		cout << "MyString有参构造函数(int  )调用" << endl;
	}

	MyString(char * str)
	{
		cout << "MyString有参构造函数(char * )调用" << endl;
	}

};

void test01()
{
	MyString str = "abcde";
	MyString str2("abcde");
	MyString str3 = MyString("abcde");

	//隐式转换法
	//MyString str4 = 10; // 有人会认为是  字符串是  "10"  也有人会认为字符串长度为10
	//为了防止这种写法，可以用关键字 explicit

	//explicit关键字
	//（1）主要用途：防止利用隐式转换法 创建对象


	MyString str5(10);

	MyString str6 = MyString(10);


}

int main() {



	system("pause");
	return EXIT_SUCCESS;
}
