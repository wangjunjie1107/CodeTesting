#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "myString.h"



void test01()
{
	//�вι������
	cout << endl << "----------�вι������----------" << endl;
	MyString str1 = "wangjunjie";
	cout << "str1 = " << str1 << endl;


	//�����������
	cout << endl << "----------�����������----------" << endl;
	MyString str2 = str1;
	cout << "str2 = " << str2 << endl;

	//�������������
	cout << endl << "--------�������������----------" << endl;
	cout << "str1 = " << str1 << endl;
	cout << "str2 = " << str2 << endl;

	// = ���������
	cout << endl << "--------��ֵ���������----------" << endl;
	MyString str3;//����Ĭ�Ϲ��캯��
	MyString str4;//����Ĭ�Ϲ��캯��
	str3 = "wangjunjie"; //ֱ�Ӹ�ֵ
	str4 = str3;		//��Ӹ�ֵ
	cout << "str3 = " << str3 << endl;
	cout << "str4 = " << str4 << endl;


	// + ���������
	cout << endl << "--------�Ӻ����������----------" << endl;
	MyString str5;//����Ĭ�Ϲ��캯��
	str5 = "wang";//�ȺŸ�ֵ =���������
	MyString str6 = str5 + "junjie";
	MyString str7 = str5 + str6;
	cout << "str6 = " << str6 << endl;
	cout << "str7 = " << str7 << endl;

	//[]���������
	cout << endl << "--------[]���������----------" << endl;
	MyString str8 = str6;
	cout << "str8[0] = " << str8[0] << endl;

	//==���������
	cout << endl << "--------�������������----------" << endl;
	MyString str9 = "wangjunjie";
	MyString str10 = "wangjunjie";
	if (str9 == str10)
	{
		cout << "str9 == str10" << endl;
	}
	else
		cout << "str9 != str10" << endl;

	//�������������
	cout << endl << "--------�������������----------" << endl;
	MyString str11;
	cout << "�������ַ���(һ�β�����1024��)��" << endl;
	cin >> str11;
	cout << "str11 = " << str11 << endl;

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}