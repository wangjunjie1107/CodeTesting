#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
int main() 
{
	

	//�����ڴ�  string �� const char * ���͵���ʽ����ת��
	//��Ҫʹ�� s1.c_str() ��ת��
	string s1 = "wangjunjie";
	const char * c2 = s1.c_str();
	cout << "c2 = " << c2 << endl;
	
	
	
	//���ڴ� const char * �� string ���͵���ʽ����ת��
	const char * c1 = "wangjunjie";
	string s2 = c1;
	cout << "s2 = " << s2 << endl;


	
	// ���ڴ� char *  �� string ���͵���ʽ����ת��
	char * c3 = "wangjunjie";
	string s3 = c3; 


	



	system("pause");
	return EXIT_SUCCESS;
}
