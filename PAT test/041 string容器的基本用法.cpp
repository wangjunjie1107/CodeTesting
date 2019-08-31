#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<set>
#include<vector>
#include<string>

using namespace std;

/*
 
	string容器:	

	作用：更方便的对字符串进行操作

*/



void test01()
{
	//定义string类型
	string str1;
	string str2 = "aaa";

	//通过下标访问
	for (int i = 0; i < str2.length(); i++)
	{
		cout << str2[i] << " ";
	}
	cout << endl;

	//输入输出
	cin >> str1;
	cout << str1;

	//将string类型转换为字符数组，然后就可以用printf()输出
	printf("%s\n", str2.c_str());
}

//通过迭代器访问
void test02()
{
	//定义迭代器
	string::iterator it;

	string str = "wangjunjie";

	//通过迭代器输出
	for (it = str.begin(); it < str.end(); ++it)
	{
		cout << *it;
	}
	cout << endl;
}

//string 常用函数
void test03()
{
	string str1 = "wangjunjie";
	string str2 = " AI ";
	string str3 = "lisijia";

	//operator+=
	str1 = str1 + str2 + str3;
	cout << str1 << endl;

	//两个string类型可以直接比较  比较规则是字典序
	// <=  >=  <  >  ==  !=  几种规则
	if (str1 < str2 || str1 <= str2)
	{
		cout << "str1 < str2" << endl;
	}

	if (str1 != str2)
	{
		cout << "str1 != str2" << endl;
	}

	//字符串的长度，即返回存放的字符数
	str3 = "wangjunjie";
	cout << str3.length() << endl;
	cout << str3.size() << endl;


	//字符串插入：分为单个字符插入指定位置  和  一个字符串插入指定位置

	//单个字符插入指定位置
	string str4 = "wang";
	string str5 = "J";
	//在str4的pos[4]插入str5，插入位置在pos4之前
	str4.insert(4, str5);
	cout << str4 << endl;

	str4.insert(4, "J");
	cout << str4 << endl;

	//一个字符串插入指定位置  三个参数为迭代器，表示待插入位置，和插入字符串的区间
	string str6 = "junjie";
	str4.insert(str4.begin() + 3, str6.begin(), str6.end());
	cout << str4 << endl;

	//删除元素
	string str7 = "wangjunjie";

	str7.erase(str7.begin() + 5); // u
	cout << str7 << endl;

	str7 = "wangjunjie"; 
	str7.erase(str7.begin() + 4, str7.begin() + 7); // jun
	cout << str7 << endl;

	str7 = "wangjunjie";
	str7.erase(0, 4); //wang  从 0 号位置开始删除，删除4个字符
	cout << str7 << endl;

	//清空数据
	str7.clear();

	//返回子串
	string str8 = "wangjunjie";
	string subStr8;
	subStr8 = str8.substr(0, 4);// 从 0 号位置开始，返回4个字符
	cout << subStr8 << endl;

}

//find()
void test04()
{
	//string::npos 为find()函数找不到的时候的返回值
	if (string::npos == -1)
	{
		cout << "string::npos = -1" << endl;
	}

	if (string::npos == 4294967295)
	{
		cout << "string::npos = 4294967595" << endl;
	}

	//find的返回值为子串的开始的位置，或者是string::npos
	string str1 = "wangjunjie wangjunjie";
	string str2 = "jun";
	string str3 = "Me";

	int pos = str1.find(str2); //4  返回第一次出现str2的位置

	//从str1的第10位开始找字符串str2
	if (str1.find(str2, 10) != string::npos)
	{
		cout << "find" << endl;
	}
	
	//无法匹配的情况
	if (str1.find(str3) == string::npos)
	{
		cout << "no position for Me" << endl;
	}
}

//字符串替换
void test05()
{
	string str1 = "wangjunjie";
	string str2 = "JUN";

	//第二个参数为替换字符串的长度
	str1.replace(4, 3, str2);// jun --> JUN
	cout << str1 << endl;

	str1 = "wangjunjie";
	//前两个参数为左闭右开
	str1.replace(str1.begin() + 4, str1.begin() + 7, str2); // jun --> JUN
	cout << str1 << endl;
}

int main()
{
	test01();
	test02();
	test03();
	test04();
	test05();

	system("pause");
	return EXIT_SUCCESS;
}

