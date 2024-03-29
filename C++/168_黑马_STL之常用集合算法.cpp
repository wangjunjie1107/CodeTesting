#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

/*
set_intersection算法 求两个set集合的交集
注意:两个集合必须是有序序列
@param beg1 容器1开始迭代器
@param end1 容器1结束迭代器
@param beg2 容器2开始迭代器
@param end2 容器2结束迭代器
@param dest  目标容器开始迭代器
@return 目标容器的最后一个元素的迭代器地址
*/

//set_intersection算法 求两个set集合的交集
void test01()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	//存放结果的容器
	vector<int>v3;
	//为新容器分配足够的空间 但也不能太多
	v3.resize(min(v1.size(), v2.size()));
	//求交集
	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	
	//打印  注意第二个参数是  交集的返回值  也就是目标容器的最后一个元素的迭代器地址
	for_each(v3.begin(), itEnd, [](int val){cout << val << " ";});
	cout << endl;
}

/*
set_union算法 求两个set集合的并集
注意:两个集合必须是有序序列
@param beg1 容器1开始迭代器
@param end1 容器1结束迭代器
@param beg2 容器2开始迭代器
@param end2 容器2结束迭代器
@param dest  目标容器开始迭代器
@return 目标容器的最后一个元素的迭代器地址
*/

void test02()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	//创建新容器
	vector<int>v3;
	//求差集
	v3.resize(v1.size() + v2.size());
	//求并集
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());


	//打印
	for_each(v3.begin(), itEnd, [](int val) {cout << val << " ";});
	cout << endl;
}

/*
set_difference算法 求两个set集合的差集
注意:两个集合必须是有序序列
@param beg1 容器1开始迭代器
@param end1 容器1结束迭代器
@param beg2 容器2开始迭代器
@param end2 容器2结束迭代器
@param dest  目标容器开始迭代器
@return 目标容器的最后一个元素的迭代器地址
*/
void test03()
{
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}


	vector<int>v3;
	v3.resize(max(v1.size(), v2.size()));
	//求差集  0 1 2 3 4     v1对于v2的差集
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	//打印
	for_each(v3.begin(), itEnd, [](int val) {cout << val << " "; });
	cout << endl;



	//颠倒 求 差集  10 11 12 13 14    v2对于v1的差集
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v3.begin());

	//打印
	for_each(v3.begin(), itEnd, [](int val) {cout << val << " "; });
	cout << endl;


}
int main()
{

	test01();
	test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
