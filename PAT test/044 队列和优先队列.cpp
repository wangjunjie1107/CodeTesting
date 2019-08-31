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

using namespace std;

/*
	queue:	�Ƚ��ȳ�������

	ֻ��ͨ�� front �� back ���ض��׻��β��Ԫ��
*/


void test01()
{
	queue<int> q;
	
	//���  ��β��
	q.push(100);
	q.push(200);
	q.push(300);
	q.push(400);
	q.push(500);

	//���� ��ͷ��
	q.pop();

	//����Ԫ��  ���в��ܱ���
	q.front();
	q.back();

	//�ж��Ƿ�Ϊ��
	bool isempty = q.empty();
	if (isempty)
	{
		cout << "the queue is empty!" << endl;
	}

	//���ض���Ԫ������
	cout << "queue size  = " << q.size() << endl;

}

//���ȶ���	 ��ͷ�����ȼ���ߵ�Ԫ��
void test02()
{
	//��ʾ����ԽС�����ȼ�Խ��
	priority_queue<int,vector<int>,greater<int>> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	cout << q.top() << endl;

}

struct fruit
{
	string name;
	float price;
	friend bool operator<(fruit f1, fruit f2)
	{
		//f1�ļ�ǮС�ͷ���true
		return f1.price < f2.price;
	}
};

void test03()
{
	priority_queue<struct fruit> q;

	struct fruit f1 = { "����",10.4 };
	struct fruit f2 = { "����",99.9 };
	struct fruit f3 = { "ƻ��",33 };
	struct fruit f4 = { "�㽶",55.1 };
	struct fruit f5 = { "���ܹ�",23.1 };
	
	q.push(f1);
	q.push(f2);
	q.push(f3);
	q.push(f4);
	q.push(f5);

	if (f1 < f2)
	{
		cout << "���ӱ����ӹ�" << endl;
	}

	cout << q.top().name << " " << q.top().price << endl;
}

int main()
{
	
	//test01();
	//test02();
	test03();
	//test04();

	system("pause");
	return EXIT_SUCCESS;
}

