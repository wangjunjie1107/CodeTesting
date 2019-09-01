#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1;
	string str2;
	string str3;
	string str4;
	string str5;	
	
	
	str1 = "wang";
	str2 = "junjie";
	
	str3 = str1 + str2; //直接相加 
	cout<< str3 <<endl;
	
	str4 = str3; 		//字符串直接赋值 
	cout<< str4 <<endl;
	
	str1 += str2;	//使用+=操作符完成字符串拼接 
	cout<< str1 <<endl; 
	
	str5 = str1;
	str5 += " love lisijia";  //字符串拼接 
	cout<< str5 <<endl;
	
	
	return 0;
 } 
