#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<set>
#include<vector>
#include<string>
#include<map>				//map和multimap的头文件
#include<unordered_map>		//unordered_map
#include<queue>

using namespace std;

/*
	queue:	先进先出的容器

	只能通过 front 或 back 返回队首或队尾的元素
*/


void test01()
{
	queue<int> q;
	
	//入队  队尾入
	q.push(100);
	q.push(200);
	q.push(300);
	q.push(400);
	q.push(500);

	//出队 队头出
	q.pop();

	//访问元素  队列不能遍历
	q.front();
	q.back();

	//判断是否为空
	bool isempty = q.empty();
	if (isempty)
	{
		cout << "the queue is empty!" << endl;
	}

	//返回队内元素数量
	cout << "queue size  = " << q.size() << endl;

}

//优先队列	 队头是优先级最高的元素
void test02()
{
	//表示数字越小，优先级越大
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
		//f1的价钱小就返回true
		return f1.price < f2.price;
	}
};

void test03()
{
	priority_queue<struct fruit> q;

	struct fruit f1 = { "桃子",10.4 };
	struct fruit f2 = { "梨子",99.9 };
	struct fruit f3 = { "苹果",33 };
	struct fruit f4 = { "香蕉",55.1 };
	struct fruit f5 = { "哈密瓜",23.1 };
	
	q.push(f1);
	q.push(f2);
	q.push(f3);
	q.push(f4);
	q.push(f5);

	if (f1 < f2)
	{
		cout << "梨子比桃子贵" << endl;
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

