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
	
	str3 = str1 + str2; //ֱ����� 
	cout<< str3 <<endl;
	
	str4 = str3; 		//�ַ���ֱ�Ӹ�ֵ 
	cout<< str4 <<endl;
	
	str1 += str2;	//ʹ��+=����������ַ���ƴ�� 
	cout<< str1 <<endl; 
	
	str5 = str1;
	str5 += " love lisijia";  //�ַ���ƴ�� 
	cout<< str5 <<endl;
	
	
	return 0;
 } 
