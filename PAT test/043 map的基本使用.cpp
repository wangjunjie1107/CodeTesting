#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<set>
#include<vector>
#include<string>
#include<map>				//map��multimap��ͷ�ļ�
#include<unordered_map>		//unordered_map

using namespace std;

/*
	map:ӳ��

	map���ڲ���ʹ�ú����ʵ�ֵģ�setҲ�ǣ����ڽ���ӳ��Ĺ����л��Զ�ʵ�ִ�С�����������

*/

//map����ʹ��
void test01()
{
	//���������ַ�char��int��ӳ��
	map<char, int> s1;

	s1['d'] = 10;
	s1['f'] = 1550;
	s1['e'] = 50;
	s1['c'] = 100;
	s1['c'] = 200;
	s1['a'] = 100;
	s1['b'] = 100;
	
	//���200����Ϊ֮ǰ��ֵ�ᱻ���ǣ�һ��keyֵֻ��Ӧһ��value
	cout << s1['c'] << endl;

	//������
	for (map<char,int>::iterator it = s1.begin(); it != s1.end(); ++it)
	{
		//first����keyֵ��second����ֵ
		//map����keyֵ�Ĵ�С���Դ�С�����˳���Զ�����
		cout << it->first << " " << it->second << endl;
	}
}

//map���ú���
void test02()
{
	map<string, int> mp;

	//map��insert���÷���Ҫ��	pair<string,int>
	mp.insert(pair<string, int>("wang", 111));

	mp["wang"] = 100;
	mp["zhao"] = 200;
	mp["qian"] = 300;
	mp["li"] = 400;
	mp["sun"] = 500;
	mp["zhou"] = 600;

	map<string, int>::iterator it;
	
	//find()����
	it = mp.find("wang");
	cout << "find()������" << it->first << "  " << it->second << endl;

	//size()����
	cout << "size()������" << mp.size() << endl;

	//clear()���� ������е�Ԫ��
	mp.clear();
	cout << "clear()����֮���size()��" << mp.size() << endl;


	//erase()����
	mp["wang"] = 100;
	mp["zhao"] = 200;
	mp["qian"] = 300;
	mp["li"] = 400;
	mp["sun"] = 500;
	mp["zhou"] = 600;

	mp.erase("li");							//��keyֵɾ��
	mp.erase(mp.find("zhao"));				//��Ԫ����Ӧ�ĵ�����ɾ��
	mp.erase(mp.find("wang"), mp.end());	//ɾ��һ������

}

//���Դ洢�ظ�keyֵ�� multimap����
void test03()
{
	multimap<string, int> multimp;
	
	multimp.insert(pair<string, int>("wang", 111));
	multimp.insert(pair<string, int>("wang", 221));
	multimp.insert(pair<string, int>("wang", 331));
	multimp.insert(pair<string, int>("wang", 1441));

	
	for (multimap<string, int>::iterator it = multimp.begin(); it != multimp.end(); it++)
	{
		cout << it->first << "  " << it->second << endl;
	}
}

//unorder_map �ڲ��������ٶȿ�ܶ�
void test04()
{
	unordered_map<string, int> ump;
	ump["wang"] = 123;
	ump["wang"] = 1333;	//�Ḳ�ǵ��ϲ��Ԫ��
	ump["zhang"] = 123;
	ump["zhao"] = 123;

	for (unordered_map<string,int>::iterator it = ump.begin(); it != ump.end(); ++it)
	{
		cout << it->first << " " << it->second << endl;
	}
}
int main()
{
	
	//test01();
	//test02();
	//test03();
	test04();

	system("pause");
	return EXIT_SUCCESS;
}

