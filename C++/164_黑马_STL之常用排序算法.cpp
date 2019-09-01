#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#include<vector>
#include<algorithm>
#include<ctime>
#include<functional>

/*
merge算法 容器元素合并，并存储到另一容器中
注意:两个容器必须是有序的 ,而且必须同序
@param beg1 容器1开始迭代器
@param end1 容器1结束迭代器
@param beg2 容器2开始迭代器
@param end2 容器2结束迭代器
@param dest  目标容器开始迭代器
*/
void test01()
{
	vector<int>v1;
	vector<int>v2;

	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
	}

	vector<int>vTarget;//目标容器
	vTarget.resize(v1.size() + v2.size()); //开辟容量

	//将v1 和 v2 合并, 并存储到 vTarget 中
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());


	// [](){} 匿名函数  lambda表达式
	cout << "------------------------------------\n";
	cout << "将 v1 和 v2 合并, 并存储到 vTarget 中（merge算法）:" << endl;
	cout << "注意:两个容器必须是有序的 ,而且必须同序" << endl;
	for_each(vTarget.begin(), vTarget.end(), [](int val) {cout << val << " ";});
	cout << endl;
}

/*
sort算法 容器元素排序
@param beg 容器1开始迭代器
@param end 容器1结束迭代器
@param _callback 回调函数或者谓词(返回bool类型的函数对象)
*/

void test02()
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//利用sort降序
	cout << "------------------------------------\n";
	cout << "利用sort降序:" << endl;
	sort(v1.begin(), v1.end(), greater<int>());
	// [](){} 匿名函数  lambda表达式
	//打印输出 
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " ";});
	cout << endl;



	//利用sort升序
	cout << "------------------------------------\n";
	cout << "利用sort升序:" << endl;
	sort(v1.begin(), v1.end(), less<int>());

	// [](){} 匿名函数  lambda表达式
	//打印输出 
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " ";});
	cout << endl;
}

/*
random_shuffle算法 对指定范围内的元素随机调整次序
@param beg 容器开始迭代器
@param end 容器结束迭代器
*/	

void test03()
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//洗牌算法  随机调整次序
	random_shuffle(v1.begin(), v1.end());

	//遍历打印
	cout << "------------------------------------\n";
	cout << "洗牌算法  随机调整次序:" << endl;
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " ";});
	cout << endl;
}

/*
reverse算法 反转指定范围的元素
@param beg 容器开始迭代器
@param end 容器结束迭代器
*/

void test04()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	v1.push_back(888);
	v1.push_back(111);
	v1.push_back(222);
	
	cout << "------------------------------------\n";
	cout << "反转前遍历结果：" << endl;
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " ";});
	cout << endl;


	//反转算法
	reverse(v1.begin(), v1.end());

	cout << "------------------------------------\n";
	cout << "反转后遍历结果：" << endl;
	for_each(v1.begin(), v1.end(), [](int val) {cout << val << " ";});
	cout << endl;
}

int main() 
{
	//随机数种子
	srand((unsigned int)time(NULL));
	
	test01();
	test02();
	test03();
	test04();

	system("pause");
	return EXIT_SUCCESS;
}
