#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<vector>

using namespace std;

/*
 
	vector容器:长度根据需要而自动改变的数组

*/

struct node
{
	int num;
	struct node* next;
};

//定义一个vector容器
void test01()
{
	//vector<typename> name;
	vector<int> s1;
	vector<char> s2;
	vector<string> s3;
	/*vector<float> s4;
	vector<node> s4;*/

	//如果typename也是一个容器，定义的时候要记得在 >> 符号之间加上空格
	//因为一些编译器会把它视为移位操作，导致编译错误
	vector< vector<int> > s5;

	//s6是一个vector数组，长度为100，其中的每个元素都是一个int类型的vector容器
	vector<int> s6[100];
}


//定义一个vector迭代器
void test02()
{/*
	vector<int>::iterator it;
	vector<char>::iterator it;
	vector<string>::iterator it;
	vector<float>::iterator it;
	vector<node>::iterator it;*/
}

//输出和输出
void test03()
{
	vector<int> v1;
	
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i);
	}

	//v1.end()是取尾部元素的下一位地址
	for (vector<int>::iterator it = v1.begin(); it < v1.end(); it++)
	{
		cout << *it << endl;
	}
}

//常用函数
void test04()
{
	vector<int> v1;

	//尾部添加 时间复杂度为O(1)
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	v1.push_back(70);

	//尾部删除 时间复杂度为O(1)
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();
	v1.pop_back();

	//获取元素个数  返回的是unsigned类型 时间复杂度为O(1)
	cout << v1.size() << endl;

	//清空容器内所有元素,时间复杂度为O(N)
	v1.clear();

	//在指定位置插入一个元素，时间复杂度为O(N)
	v1.insert(v1.begin() + 2, 100);


	//删除单个元素或一个区间内的元素  时间复杂度为O(N)
	vector<int> v2;
	for (int i = 0; i < 5; i++)
	{
		v2.push_back(i);
	}
	
	//删除元素3
	v2.erase(v2.begin() + 3);
	vector<int>::iterator it = v2.begin();
	for (vector<int>::iterator it = v2.begin(); it < v2.end(); it++)
	{
		cout << *it << " ";  //输出 0  1  2  4 
	}
	cout << endl;

	//删除区间  [v2.begin() ---  v2.end()-1) 之间的元素，
	//包含v1.begin()，不包含v1.end()-1
	//因此删除的是元素 0 1 2 3 元素4自动排到数组的最前面
	v2.erase(v2.begin(),v2.end() - 1);
	vector<int>::iterator it2 = v2.begin();
	cout << *it2 << endl;  //输出4


	//删除所有元素
	v2.clear();
	v2.erase(v2.begin(), v2.end());
}

int main()
{
	test04();

	system("pause");
	return EXIT_SUCCESS;
}

