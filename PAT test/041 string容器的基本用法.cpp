#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<set>
#include<vector>
#include<string>

using namespace std;

/*
 
	string����:	

	���ã�������Ķ��ַ������в���

*/



void test01()
{
	//����string����
	string str1;
	string str2 = "aaa";

	//ͨ���±����
	for (int i = 0; i < str2.length(); i++)
	{
		cout << str2[i] << " ";
	}
	cout << endl;

	//�������
	cin >> str1;
	cout << str1;

	//��string����ת��Ϊ�ַ����飬Ȼ��Ϳ�����printf()���
	printf("%s\n", str2.c_str());
}

//ͨ������������
void test02()
{
	//���������
	string::iterator it;

	string str = "wangjunjie";

	//ͨ�����������
	for (it = str.begin(); it < str.end(); ++it)
	{
		cout << *it;
	}
	cout << endl;
}

//string ���ú���
void test03()
{
	string str1 = "wangjunjie";
	string str2 = " AI ";
	string str3 = "lisijia";

	//operator+=
	str1 = str1 + str2 + str3;
	cout << str1 << endl;

	//����string���Ϳ���ֱ�ӱȽ�  �ȽϹ������ֵ���
	// <=  >=  <  >  ==  !=  ���ֹ���
	if (str1 < str2 || str1 <= str2)
	{
		cout << "str1 < str2" << endl;
	}

	if (str1 != str2)
	{
		cout << "str1 != str2" << endl;
	}

	//�ַ����ĳ��ȣ������ش�ŵ��ַ���
	str3 = "wangjunjie";
	cout << str3.length() << endl;
	cout << str3.size() << endl;


	//�ַ������룺��Ϊ�����ַ�����ָ��λ��  ��  һ���ַ�������ָ��λ��

	//�����ַ�����ָ��λ��
	string str4 = "wang";
	string str5 = "J";
	//��str4��pos[4]����str5������λ����pos4֮ǰ
	str4.insert(4, str5);
	cout << str4 << endl;

	str4.insert(4, "J");
	cout << str4 << endl;

	//һ���ַ�������ָ��λ��  ��������Ϊ����������ʾ������λ�ã��Ͳ����ַ���������
	string str6 = "junjie";
	str4.insert(str4.begin() + 3, str6.begin(), str6.end());
	cout << str4 << endl;

	//ɾ��Ԫ��
	string str7 = "wangjunjie";

	str7.erase(str7.begin() + 5); // u
	cout << str7 << endl;

	str7 = "wangjunjie"; 
	str7.erase(str7.begin() + 4, str7.begin() + 7); // jun
	cout << str7 << endl;

	str7 = "wangjunjie";
	str7.erase(0, 4); //wang  �� 0 ��λ�ÿ�ʼɾ����ɾ��4���ַ�
	cout << str7 << endl;

	//�������
	str7.clear();

	//�����Ӵ�
	string str8 = "wangjunjie";
	string subStr8;
	subStr8 = str8.substr(0, 4);// �� 0 ��λ�ÿ�ʼ������4���ַ�
	cout << subStr8 << endl;

}

//find()
void test04()
{
	//string::npos Ϊfind()�����Ҳ�����ʱ��ķ���ֵ
	if (string::npos == -1)
	{
		cout << "string::npos = -1" << endl;
	}

	if (string::npos == 4294967295)
	{
		cout << "string::npos = 4294967595" << endl;
	}

	//find�ķ���ֵΪ�Ӵ��Ŀ�ʼ��λ�ã�������string::npos
	string str1 = "wangjunjie wangjunjie";
	string str2 = "jun";
	string str3 = "Me";

	int pos = str1.find(str2); //4  ���ص�һ�γ���str2��λ��

	//��str1�ĵ�10λ��ʼ���ַ���str2
	if (str1.find(str2, 10) != string::npos)
	{
		cout << "find" << endl;
	}
	
	//�޷�ƥ������
	if (str1.find(str3) == string::npos)
	{
		cout << "no position for Me" << endl;
	}
}

//�ַ����滻
void test05()
{
	string str1 = "wangjunjie";
	string str2 = "JUN";

	//�ڶ�������Ϊ�滻�ַ����ĳ���
	str1.replace(4, 3, str2);// jun --> JUN
	cout << str1 << endl;

	str1 = "wangjunjie";
	//ǰ��������Ϊ����ҿ�
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

