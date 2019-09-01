#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


// write() 用于显示字符串

//  write()方法并不会在遇到空字符时自动停止打印字符，
//  而只是打印指定书目的字符，即使超出了字符串的边界。
void test01()
{
	//常量指针
	const char * state1 = "wang";
	const char * state2 = "            *";
	const char * state3 = "jie";

	int len = strlen(state2);

	//每次增加一个字符  打印
	for (int i = 1; i <= len; i++)
	{
		cout.write(state2, i); // i 表示输出的字符数
		cout << endl;
	}

	//每次减少一个字符  打印
	for (int i = len;i > 0;i--)
	{
		cout.write(state2, i);
		cout << endl;
	}
	 
	cout.write(state2, len + 10); //输入 state2  及 之后的 10 个字符
	cout << endl;



}

// put 用于显示的单个字符
void test02()
{
	cout.put('w');
	cout.put('a');
	cout.put('n');
	cout.put('g');
	cout.put('j');
	cout.put('u');
	cout.put('n');
	cout.put('j');
	cout.put('i');
	cout.put('e');
	cout.put('\n');

	// abcdefg hi j   k  l   m  n  o  p  q  r  s  g  u  v  w  x  y  z
	// 1234567 89 10 11  12 13 14  15 16 17 18 19 20 21 22 23 24 25 26 + 96
	
	cout.put(119); // w
	cout.put(97);  // a 
	cout.put(110); // n
	cout.put(103); // g
	cout.put(106); // j
	cout.put(117); // u
	cout.put(110); // n
	cout.put(106); // j
	cout.put(105); // i
	cout.put(101); // e
	cout<<endl;


}


int main()
{

	test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}




