#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<functional> //内建函数对象头文件
#include <vector>	 //单端数组容器
#include <algorithm> //STL中的内置算法头文件

//   negate<T>			negate<int>n;		取反仿函数  
//   plus<T>			plus<int>p;			加法仿函数
//   greater<T>			greater<int>()		大于仿函数 
//   logical_not<T>		logical_not<int>()  逻辑非



//template<class T> T negate<T>  // 取反  仿函数                     
void test01()
{
	negate<int>n;
	cout << "negate<T>  取反  仿函数   " << endl;

	cout << n(10) << endl;
}

// template<class T> T plus<T>//加法仿函数
void test02()
{
	plus<int>p;
	cout << "plus<T>  加法  仿函数" << endl;
	cout << p(1, 1) << endl;
}

//大于仿函数  greater<T>
class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
void test03()
{

	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;

	//降序
	cout << " greater<T>  大于仿函数  使其降序排列 " << endl;
	sort(v.begin(), v.end(), greater<int>());
	
	
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}

//template<class T> bool logical_not<T>//逻辑非
void test04()
{
	vector<bool>v;

	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	vector<bool>v2;
	v2.resize(v.size());


	cout << " logical_not<T>   逻辑非 " << endl;
	transform(v.begin(), v.end(),v2.begin(), logical_not<int>());

	for (vector<bool>::iterator it = v2.begin(); it != v2.end();it++)
	{
		cout << *it << endl;
	}
}




int main() 
{
	test01();
	test02();
	test03();
	test04();


	system("pause");
	return EXIT_SUCCESS;
}















