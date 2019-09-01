#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "myString.h"

void test01()
{
	MyString str1 = "abc";

	MyString str2 = str1;

	cout << "str1 = " << str1 << endl;

	cout << "str2 = " << str2 << endl;

	cout << "请重新给str1赋值：" << endl;

	cin >> str1;

	cout << "str1 最新的值为： " << str1 << endl;
}

void test02()
{
	MyString str1 = "abc";

	MyString str2 = "aaa";

	str1 = str2;

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;


	MyString str3 = "abc";
	MyString str4 = "def";
	MyString str5;
	str5 = str3 + str4;
	MyString str6;
	str6 = str5 + "ghi";

	cout << "str5 = " << str5 << endl;
	cout << "str6 = " << str6 << endl;


	cout << "str5[0] = " << str5[0] << endl;
	str5[0] = 'z';
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
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "test03" << endl;

	MyString str1 = "abc";
	MyString str2 = "def";
	cout << "str1 = " << str1 << endl;
	cout << "str1 = " << str2 << endl;


	str1 += str2; //字符串追加
	cout << "str1 += str2 = " << str1 << endl;

	str1 += "def";
	cout << "str1 += 'def' = " << str1 << endl;

}


int main() {

	test01();
	test02();
	test03();


	system("pause");
	return EXIT_SUCCESS;
}