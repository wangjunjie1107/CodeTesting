#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<set>
#include<vector>
#include<string>
#include<map>				//map��multimap��ͷ�ļ�
#include<unordered_map>		//unordered_map
#include<queue>
#include<utility>
#include<algorithm>

using namespace std;




void test01()
{
	//���ֵ ��Сֵ ����ֵ
	cout << max(1, -1) << endl;
	cout << min(10, -11) << endl;
	cout << abs(-100) << endl;
	
	//��������������ֵ
	int x = 10;
	int y = -20;
	swap(x, y);
	cout << x << " " << y << endl;

	//��ת  ��תһ���ַ���
	string str = "wnagjuneieagr";
	reverse(str.begin(), str.end());
	cout << str << endl;


	//fill  ��һ�����丳ֵ����һ��ֵ
	string str2 = "waggfertdyjyhg";
	fill(str2.begin() + 3, str2.end(), 'w');
	cout << str2 << endl;

}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

