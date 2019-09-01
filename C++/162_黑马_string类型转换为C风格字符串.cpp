#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
int main() 
{
	

	//不存在从  string 到 const char * 类型的隐式类型转换
	//需要使用 s1.c_str() 的转换
	string s1 = "wangjunjie";
	const char * c2 = s1.c_str();
	cout << "c2 = " << c2 << endl;
	
	
	
	//存在从 const char * 到 string 类型的隐式类型转换
	const char * c1 = "wangjunjie";
	string s2 = c1;
	cout << "s2 = " << s2 << endl;


	
	// 存在从 char *  到 string 类型的隐式类型转换
	char * c3 = "wangjunjie";
	string s3 = c3; 


	



	system("pause");
	return EXIT_SUCCESS;
}
