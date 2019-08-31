#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<set>
#include<vector>

using namespace std;

/*
 
	set����: �ڲ��Զ������Ҳ����ظ�Ԫ�ص�����

	���ã��Զ�ȥ�ز�����������������Ҫȥ��ȴ������ֱ�ӿ������������Գ�����set�����

*/

struct node
{
	int x;
	struct node* next;
};

//����һ��set����
void test01()
{
	set<int> s1;
	set<double> s2;
	set<string> s3;
	set<char> s4;
	set<vector<int> > s5;
	set<vector<node> > s6;
	set<vector<node> > s7[100];
}


//ͨ��һ��set����������Ԫ��  �Զ�����ʵ��ȥ���ظ�Ԫ�صĹ���
void test02()
{
	// �Զ�����ʵ��ȥ���ظ�Ԫ�صĹ���
	set<int> s1;
	s1.insert(100);
	s1.insert(240);
	s1.insert(240);
	s1.insert(240);
	s1.insert(1130);
	s1.insert(1130);
	s1.insert(4);
	s1.insert(4);
	s1.insert(-50);
	s1.insert(4);
	s1.insert(100);

	for (set<int>::iterator it = s1.begin(); it != s1.end(); ++it)
	{
		cout << *it << endl;
	}
}

//���ú���
void test03()
{
	
	// �Զ�����ʵ��ȥ���ظ�Ԫ�صĹ���
	set<int> s1;
	s1.insert(100);
	s1.insert(240);
	s1.insert(240);
	s1.insert(30);
	s1.insert(-10);
	s1.insert(99);
	s1.insert(240);
	s1.insert(240);
	s1.insert(100);
	s1.insert(12230);
	s1.insert(45);
	s1.insert(64);
	s1.insert(94);
	s1.insert(7);
	s1.insert(94);
	s1.insert(-50);
	s1.insert(4);
	s1.insert(100);

	set<int>::iterator it = s1.begin();
	for (it = s1.begin(); it != s1.end(); ++it)
	{
		cout << *it << endl;
	}

	//�����ض�Ԫ��
	s1.find(100);
	cout << *(s1.find(100)) << endl;

	//ɾ���ض�Ԫ��  ���find()����
	s1.erase(s1.find(-50));

	//ɾ��һ���ض�Ԫ��
	s1.erase(100);

	//ɾ��һ�������ڵ�����Ԫ��  ɾ�� -4 �� 100  ֮���Ԫ��
	s1.erase(s1.find(-4), s1.find(100));

	//���Ԫ�ظ���
	int count = s1.size();
	cout << count << endl;

	//���Ԫ��
	s1.clear();
}

int main()
{
	test02();

	system("pause");
	return EXIT_SUCCESS;
}

