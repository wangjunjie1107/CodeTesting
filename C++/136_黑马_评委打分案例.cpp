/*

有5名选手：选手ABCDE，10个评委分别对每一名选手打分，
去除最高分，去除评委中最低分，取平均分

*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<deque>
#include<string>
#include<algorithm>


int Mysort(int a, int b)
{
	return a < b;
}
void test()
{
	deque<int>d1;
	deque<int>d2;
	deque<int>d3;
	deque<int>d4;
	deque<int>d5;
	
	//选手A
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
		cout << "请为选手A打分：" << endl;
		cout << "第 "<< i + 1 <<" 次打分：";

		int num;
		cin >> num;

		d1.push_back(num);
	}

	//选手B
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
		cout << "请为选手B打分：" << endl;
		cout << "第 " << i + 1 << " 次打分：";

		int num;
		cin >> num;

		d2.push_back(num);
	}

	//选手C
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
		cout << "请为选手C打分：" << endl;
		cout << "第 " << i + 1 << " 次打分：";

		int num;
		cin >> num;

		d3.push_back(num);
	}

	//选手D
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
		cout << "请为选手D打分：" << endl;
		cout << "第 " << i + 1 << " 次打分：";

		int num;
		cin >> num;

		d4.push_back(num);
	}

	//选手E
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
		cout << "请为选手E打分：" << endl;
		cout << "第 " << i + 1 << " 次打分：";

		int num;
		cin >> num;

		d5.push_back(num);
	}
	
	//排序
	sort(d1.begin(), d1.end(), Mysort);
	sort(d2.begin(), d2.end(), Mysort);
	sort(d3.begin(), d3.end(), Mysort);
	sort(d4.begin(), d4.end(), Mysort);
	sort(d5.begin(), d5.end(), Mysort);


	//掐头去尾
	d1.pop_back();
	d1.pop_front();

	d2.pop_back();
	d2.pop_front();

	d3.pop_back();
	d3.pop_front();

	d4.pop_back();
	d4.pop_front();

	d5.pop_back();
	d5.pop_front();

	//取平均分
	int average1;
	int sum = 0;
	for (int i = 0;i < d1.size();i++)
	{
		sum += d1[i];
	}
	average1 = sum / 10;

	int average2;
	sum = 0;
	for (int i = 0;i < d2.size();i++)
	{
		sum += d2[i];
	}
	average2 = sum / 10;

	
	int average3;
	sum = 0;
	for (int i = 0;i < d3.size();i++)
	{
		sum += d3[i];
	}
	average3 = sum / 10;

	int average4;
	sum = 0;
	for (int i = 0;i < d4.size();i++)
	{
		sum += d4[i];
	}
	average4 = sum / 10;

	int average5;
	sum = 0;
	for (int i = 0;i < d5.size();i++)
	{
		sum += d5[i];
	}
	average5 = sum / 10;


	cout << "A的平均分：" << average1 << endl;
	cout << "B的平均分：" << average2 << endl;
	cout << "C的平均分：" << average3 << endl;
	cout << "D的平均分：" << average4 << endl;
	cout << "E的平均分：" << average5 << endl;
}
int main() 
{

	test();



	system("pause");
	return EXIT_SUCCESS;
}
