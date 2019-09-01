#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector> //类似于单端数组的容器
#include<algorithm>
using namespace std;

/*

3.1.2.1 string 构造函数
string();//创建一个空的字符串 例如: string str;
string(const string& str);//使用一个string对象初始化另一个string对象
string(const char* s);//使用字符串s初始化
string(int n, char c);//使用n个字符c初始化

3.1.2.2 string基本赋值操作
string& operator=(const char* s);//char*类型字符串 赋值给当前的字符串
string& operator=(const string &s);//把字符串s赋给当前的字符串
string& operator=(char c);//字符赋值给当前的字符串
string& assign(const char *s);//把字符串s赋给当前的字符串
string& assign(const char *s, int n);//把字符串s的前n个字符赋给当前的字符串
string& assign(const string &s);//把字符串s赋给当前字符串
string& assign(int n, char c);//用n个字符c赋给当前字符串
string& assign(const string &s, int start, int n);//将s从start开始n个字符赋值给字符串

*/

void test01()
{
	//创建一个空字符串
	string str1("wang");

	//使用一个string对象初始化另一个string对象
	string str2 = str1;

	//使用字符串s初始化
	string str3 = "wangjunjie";

	//使用n个字符c初始化
	string str4(5, 'a');// 相当于 str4 = "aaaa";

	//char*类型字符串 赋值给当前的字符串
	string  str5 = "wangjunjie";

	//把字符串s赋给当前的字符串
	string str6 = str5;

	//字符赋值给当前的字符串
	//string& operator=(char c);
	char ch = 'a';
	string str7;  //不能直接在后面赋值，这是创建字符串变量 是调用构造函数
	str7 ='a';

	//把字符串s赋给当前的字符串
	string str8;
	str8.assign("wang");

	//把字符串s的前n个字符赋给当前的字符串
	string str9;
	str9.assign("wangjunjie", 4);

	//把字符串s赋给当前字符串
	string str10;
	str10.assign(str9);

	//用n个字符c赋给当前字符串
	string str11;
	str11.assign(10, 'a');  //aaaaaaaaaa 10个a

							//将s从start开始n个字符赋值给字符串
	string str12;
	str12.assign(str11, 0, 5); //相当于给str12赋值str11的前5个字符

	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;
	cout << "str3 = " << str3 << endl;
	cout << "str4 = " << str4 << endl;
	cout << "str5 = " << str5 << endl;
	cout << "str6 = " << str6 << endl;
	cout << "str7 = " << str7 << endl;
	cout << "str8 = " << str8 << endl;
	cout << "str9 = " << str9 << endl;
	cout << "str10 = " << str10 << endl;
	cout << "str11 = " << str11 << endl;
	cout << "str12 = " << str12 << endl;

}

/*
3.1.2.3 string存取字符操作
char& operator[](int n);//通过[]方式取字符
char& at(int n);//通过at方法获取字符
*/
void test02()
{
	string s = "Wnagjunjie";

	//[]和at区别，[]访问越界 直接挂掉，at访问越界，抛出异常 out_of_range

	try
	{
		//cout << s[100] << endl;//程序中断
		cout << s.at(100) << endl; //抛出out_of_range异常
	}
	catch (exception & e)   //exception & e   或 out_of_range 或 ...
	{
		cout << e.what() << endl;
	}
}


/*
3.1.2.4 string拼接操作
string& operator+=(const string& str);//重载+=操作符
string& operator+=(const char* str);//重载+=操作符
string& operator+=(const char c);//重载+=操作符
string& append(const char *s);//把字符串s连接到当前字符串结尾
string& append(const char *s, int n);//把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s);//同operator+=()
string& append(const string &s, int pos, int n);//把字符串s中从pos开始的n个字符连接到当前字符串结尾
string& append(int n, char c);//在当前字符串结尾添加n个字符c
*/
//拼接
void test03()
{
	string s1 = "wangjun";

	//打印操作
	cout << "s1: ";
	cout << s1 << endl;
	cout << "---------------------" << endl;

	//string& operator+=(const string& str);//重载+=操作符
	s1 += "jie";

	cout << "s1: ";
	cout << s1 << endl;
	cout << "---------------------" << endl;


	

	//string& operator+=(const char* str);//重载+=操作符
	string s2 = "wang";

	cout << "s2: ";
	cout << s2 << endl;
	cout << "---------------------" << endl;

	s2 += s1;
	cout << "s2: ";
	cout << s2 << endl;
	cout << "---------------------" << endl;



	//string& operator+=(const char c);//重载+=操作符
	string s3;
	s3 = "wangjunji";
	s3 += "e";

	cout << "s3: ";
	cout << s3 << endl;
	cout << "---------------------" << endl;


	//string& append(const char *s);//把字符串s连接到当前字符串结尾
	string s4 = "wang";
	s4.append("junjie");
	cout << "s4: ";
	cout << s4 << endl;
	cout << "---------------------" << endl;


	
	//string& append(const char *s, int n);//把字符串s的前n个字符连接到当前字符串结尾
	string s5 = "wang";
	s5.append("junjie1111",7);
	cout << "s5: ";
	cout << s5 << endl;
	cout << "---------------------" << endl;


	
	//string& append(const string &s);//同operator+=()
	string s6 = "wang";
	string s7 = "junjie";
	s6.append(s7);
	cout << "s6: ";
	cout << s6 << endl;
	cout << "---------------------" << endl;

	//string& append(const string &s, int pos, int n);//把字符串s中从pos开始的n个字符连接到当前字符串结尾
	string s9 = "wangjun";
	string s10 = "jie";
	s9.append(s10, 1, 3);
	cout << "s9: ";
	cout << s9 << endl;
	cout << "---------------------" << endl;

	//string& append(int n, char c);//在当前字符串结尾添加n个字符c
	string s11 = "wang";
	s11.append(10, 'a');
	cout << "s11: ";
	cout << s11 << endl;
	cout << "---------------------" << endl;

}



/*
3.1.2.5 string查找和替换
int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
int find(const char* s, int pos = 0) const;  //查找s第一次出现位置,从pos开始查找
int find(const char* s, int pos, int n) const;  //从pos位置查找s的前n个字符第一次位置
int find(const char c, int pos = 0) const;  //查找字符c第一次出现位置
int rfind(const string& str, int pos = npos) const;//查找str最后一次位置,从pos开始查找
int rfind(const char* s, int pos = npos) const;//查找s最后一次出现位置,从pos开始查找
int rfind(const char* s, int pos, int n) const;//从pos查找s的前n个字符最后一次位置
int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
*/

void test04()
{
	//int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
	string s1 = "wangjunjie";
	string s2 = "jie";
	int Pos1 = s1.find(s2, 0);//参数2 代表起始查找位置，默认是0
								//find从左往后查
								//rfind 从右往左查

	cout << "pos1 = " << Pos1 << endl;
	cout << "---------------------------\n";

	//int find(const char* s, int pos = 0) const;  //查找s第一次出现位置,从pos开始查找
	int Pos2 = s1.find("jie", 0);

	cout << "pos2 = " << Pos2 << endl;
	cout << "---------------------------\n";


	//int find(const char* s, int pos, int n) const;  //从pos位置查找s的前n个字符第一次位置
	int Pos3 = s1.find("jiehahahah", 0, 3);

	cout << "pos3 = " << Pos3 << endl;
	cout << "---------------------------\n";

	//int find(const char c, int pos = 0) const;  //查找字符c第一次出现位置
	int Pos4 = s1.find('g', 0);

	cout << "pos4 = " << Pos4 << endl;
	cout << "---------------------------\n";

	//int rfind(const char* s, int pos = npos) const;//查找s最后一次出现位置,从pos开始查找
	int Pos5 = s1.rfind("jun", 9); //倒着查找

	cout << "pos5 = " << Pos5 << endl;   
	cout << "---------------------------\n";

	//int rfind(const string& str, int pos = npos) const;//查找str最后一次位置,从pos开始查找
	string s3 = "wang";
	int Pos6 = s1.rfind(s3, 0);

	cout << "pos6 = " << Pos6 << endl;
	cout << "---------------------------\n";

	//int rfind(const char* s, int pos, int n) const;//从pos查找s的前n个字符最后一次位置
	string s4 = "wangjunjiejunjie junjie";
	int Pos7 = s4.rfind("jun",22,3);

	cout << "pos7 = " << Pos7 << endl;
	cout << "---------------------------\n";

	//int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
	string s5 = "e";
	int Pos8 = s5.rfind('e', 0);

	cout << "pos8 = " << Pos8 << endl;
	cout << "---------------------------\n";

	//string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
	string s6 = "wangjun111";
	s6.replace(8, 3, "jie");
	cout << "s6 = " << s6 << endl;
	cout << "---------------------------\n";

	//string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
	string s7 = "jie";
	string s8 = "wangjun111";
	s8.replace(8, 3, s7);
	cout << "s8 = " << s8 << endl;
	cout << "---------------------------\n";

}


/*
3.1.2.6 string比较操作
compare函数在 > 时返回 1，< 时返回 -1，==时返回 0。
比较区分大小写，比较时参考字典顺序，排越前面的越小。
大写的A比小写的a小。
int compare(const string &s) const;//与字符串s比较
int compare(const char *s) const;//与字符串s比较
*/
void test05()
{
	string s1 = "wangjunjie";
	string s2 = "wangjunjie";
	string s3 = "wangjunjiea";
	string s4 = "wangjunji";

	int val1 = s1.compare(s2);    // s1 == s2  返回0
	int val2 = s1.compare(s3);   // s1 < s3    返回 -1
	int val3 = s1.compare(s4);  //s1 > s4      返回 1

	cout << "val1 = " << val1 << endl;
	cout << "val2 = " << val2 << endl;
	cout << "val3 = " << val3 << endl;
}


/*
3.1.2.7 string子串
string substr(int pos = 0, int n = npos) const;//返回由pos开始的n个字符组成的字符串
*/
void test06()
{
	string s1 = "wangjunjie111";
	cout << s1.substr(0, 10) << endl;

	string s2 = "wangjunjie@qq,com";
	int pos = s2.find('@'); // pos = 10;
	cout << "pos = " << pos << endl;
	cout << s2.substr(0, pos) << endl;
}

//提高
void Myprint(string s)
{
	cout << s;
}
void test07()
{
	string str = "www.itcast.com.cn";

	vector<string>v;

	// www.itcast.com.cn  不要小数点存放到v中
	int pos = -1;
	int start = 0;
	while (true)
	{
		pos = str.find('.', start);
		if (pos == -1)
		{
			string subS = str.substr(start, str.size() - start);
			v.push_back(subS);
			break;
		}

		string subS = str.substr(start, pos - start);

		v.push_back(subS);

		start = pos + 1;
	}

	for_each(v.begin(), v.end(), Myprint);


}


/*
3.1.2.8 string插入和删除操作
string& insert(int pos, const char* s); //插入字符串
string& insert(int pos, const string& str); //插入字符串
string& insert(int pos, int n, char c);//在指定位置插入n个字符c
string& erase(int pos, int n = npos);//删除从Pos开始的n个字符
*/

void test08()
{
	//string& insert(int pos, const char* s); //插入字符串
	string s1 = "wang";
	s1.insert(4, "jun");
	cout << s1 << endl;
	cout << "-----------------------\n";


	//string& insert(int pos, const string& str); //插入字符串
	string s2 = "jie";
	s1.insert(7, s2);
	cout << s1 << endl;
	cout << "-----------------------\n";


	//string& insert(int pos, int n, char c);//在指定位置插入n个字符c
	s1.insert(0, 5, 'M');
	cout << s1 << endl;
	cout << "-----------------------\n";

	//string& erase(int pos, int n = npos);//删除从Pos开始的n个字符
	s1.erase(0, 5);
	cout << s1 << endl;
	cout << "-----------------------\n";

}

//string和c-style字符串转换
void test09()
{
	const char * str = "hello";

	//const char * 转string
	string str2 = string(str);

	//string 转  const char * 
	const char * str3 = str2.c_str();

	//string 不会隐式转为 const char *
	//const char * 可以隐式转为 string

}

//字符串重新分配内存后，
//再使用原来的引用可能会发生错误

void test10()
{
	string s = "wangjunjie";

	char &a = s[0];
	char &b = s[1];

	a = 'W';
	b = 'A';

	cout << s << endl;
	cout << (int*)s.c_str() << endl; //打印地址

	s = "wwwwwwwwwwwwwwwwwwwwwwwww";

	//a和b不可以在使用了
	a = '1';
	b = '2';

	cout << s << endl;
	cout << (int*)s.c_str() << endl;  //赋值一个更长的字符串 地址更改了
}

/*
写一个函数，函数内部将string字符串中的所有小写字母都变为大写字母。
*/
void test11()
{
	string s1 = "asfeAAfeFFF";

	for (int i = 0; i < s1.size();i++)
	{
		//小写转大写
		s1[i] = toupper(s1[i]);

		//大写转小写
		//s1[i] = tolower(s1[i]);
	}
	cout << s1 << endl;

}
int main() 
{

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	//test09();
	//test10();
	test11();

	system("pause");
	return EXIT_SUCCESS;
}
