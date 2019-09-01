#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "myString.h"



void test01()
{
	//有参构造测试
	cout << endl << "----------有参构造测试----------" << endl;
	MyString str1 = "wangjunjie";
	cout << "str1 = " << str1 << endl;


	//拷贝构造测试
	cout << endl << "----------拷贝构造测试----------" << endl;
	MyString str2 = str1;
	cout << "str2 = " << str2 << endl;

	//左移运算符测试
	cout << endl << "--------左移运算符测试----------" << endl;
	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;

	// = 运算符测试
	cout << endl << "--------赋值运算符测试----------" << endl;
	MyString str3;//调用默认构造函数
	MyString str4;//调用默认构造函数
	str3 = "wangjunjie"; //直接赋值
	str4 = str3;		//间接赋值
	cout << "str3 = " << str3 << endl;
	cout << "str4 = " << str4 << endl;


	// + 运算符测试
	cout << endl << "--------加号运算符测试----------" << endl;
	MyString str5;//调用默认构造函数
	str5 = "wang";//等号赋值 =运算符重载
	MyString str6 = str5 + "junjie";
	MyString str7 = str5 + str6;
	cout << "str6 = " << str6 << endl;
	cout << "str7 = " << str7 << endl;

	//[]运算符测试
	cout << endl << "--------[]运算符测试----------" << endl;
	MyString str8 = str6;
	cout << "str8[0] = " << str8[0] << endl;

	//==运算符测试
	cout << endl << "--------等于运算符测试----------" << endl;
	MyString str9 = "wangjunjie";
	MyString str10 = "wangjunjie";
	if (str9 == str10)
	{
		cout << "str9 == str10" << endl;
	}
	else
		cout << "str9 != str10" << endl;

	//右移运算符测试
	cout << endl << "--------右移运算符测试----------" << endl;
	MyString str11;
	cout << "请输入字符串(一次不超过1024个)：" << endl;
	cin >> str11;
	cout << "str11 = " << str11 << endl;

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}