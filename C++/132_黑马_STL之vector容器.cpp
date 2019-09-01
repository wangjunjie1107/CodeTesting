#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<list>

//小测试 检测vector容器重新开辟空间的次数 和 每次开辟的容量
void test01()
{
	vector<int>v;
	int num = 0;
	int * p = NULL;
	for (int i = 0;i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;   //统计开辟空间的次数
			cout << "第 " << num << " 次开辟空间   ";
			cout << "此时开辟的空间容量为： " << v.capacity() << endl;//每次新开辟空间时，空间容量的大小
		}
	}
	cout << "在vector容器中插入100000个数据，开辟空间次数为："<< num << endl;	
}



/*
3.2.4.1 vector构造函数
vector<T> v; //采用模板实现类实现，默认构造函数
vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身。
vector(n, elem);//构造函数将n个elem拷贝给本身。
vector(const vector &vec);//拷贝构造函数。

//例子 使用第二个构造函数 我们可以...
int arr[] = {2,3,4,1,9};
vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));

3.2.4.2 vector常用赋值操作
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem);//将n个elem拷贝赋值给本身。
vector& operator=(const vector  &vec);//重载等号操作符
swap(vec);// 将vec与本身的元素互换。
*/

//打印vector容器中值的函数
void PrintVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin();it < v.end();it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}


//vector构造函数
void test02()
{
	
	//vector<T> v; //采用模板实现类实现，默认构造函数
	vector<int>v1;
	
	//vector(n, elem);//构造函数将n个elem拷贝给本身。
	vector<int>v2(10, 200);
	cout << "v2： " << endl;
	PrintVector(v2);
	cout << "-----------------------" << endl;
	
	//vector(const vector &vec);//拷贝构造函数。
	vector<int>v3(v2);
	cout << "v3： " << endl;
	PrintVector(v3);
	cout << "-----------------------" << endl;

	//vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身。
	vector<int>v4(v3.begin(), v3.end());
	cout << "v4： " << endl;
	PrintVector(v4);
	cout << "-----------------------" << endl;

}

//vector常用赋值操作
void test03()
{
	//assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
	int arr[] = { 1,2,3,4,5,6 };
	vector<int>v5;
	v5.assign(arr, arr + sizeof(arr) / sizeof(int));
	cout << "v5： " << endl;
	PrintVector(v5);
	cout << "-----------------------" << endl;


	//assign(n, elem);//将n个elem拷贝赋值给本身。
	vector<int>v6;
	v6.assign(10, 1000);//赋值10个1000
	cout << "v6： " << endl;
	PrintVector(v6);
	cout << "-----------------------" << endl;


	//vector& operator=(const vector  &vec);//重载等号操作符
	vector<int>v7 = v6;
	cout << "v7： " << endl;
	PrintVector(v7);
	cout << "v7的容量为：" << v7.capacity() << endl;
	cout << "-----------------------" << endl;


	//swap(vec);// 将vec与本身的元素互换。
	vector<int>v8(5,2000);
	cout << "v8：" << endl;
	PrintVector(v8);
	cout << "v8的容量为：" << v8.capacity() << endl;
	cout << "-----------------------" << endl;

	//交换v8和v7的元素
	v8.swap(v7);
	cout << "v8与v7交换后的  v7： " << endl;
	PrintVector(v7);
	cout << "v7的容量为：" << v7.capacity() << endl;
	cout << "-----------------------" << endl;
	cout << "v8与v7交换后的  v8：" << endl;
	PrintVector(v8);
	cout << "v8的容量为：" << v8.capacity() << endl;
	cout << "-----------------------" << endl;

}



/*
3.2.4.3 vector大小操作
size();//返回容器中元素的个数
empty();//判断容器是否为空
resize(int num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
resize(int num, elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长>度的元素被删除。
capacity();//容器的容量
reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问。

front();//返回容器中第一个数据元素
back();//返回容器中最后一个数据元素

*/

//vector大小操作
void test04()
{
	
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	vector<int>v1(arr, arr + sizeof(arr) / sizeof(int));

	//empty();//判断容器是否为空
	if (v1.empty())
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		//size();//返回容器中元素的个数
		cout << "size = " << v1.size() << endl;
		cout << "-----------------------" << endl;
	}
	cout << "v1：" << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	//resize(int num);//重新指定容器的长度为num，
	//若容器变长，则以默认值填充新位置。
	//如果容器变短，则末尾超出容器长度的元素被删除。

	v1.resize(15); //长度变长 增加默认值 0
	cout << "v1.resize(15)：" << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	v1.resize(5);//长度变短
	cout << "v1.resize(5)：" << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;

	v1.resize(15,100); //长度变长  增加指定值
	cout << "v1.resize(15,100)：" << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;

	cout << "第一个元素为： " << v1.front() << endl;
	cout << "-----------------------" << endl;

	cout << "最后一个元素为： " << v1.back() << endl;
	cout << "-----------------------" << endl;

}


/*
3.2.4.5 vector插入和删除操作
insert(const_iterator pos, int count,ele);//迭代器指向位置pos插入count个元素ele.
push_back(ele); //尾部插入元素ele
pop_back();//删除最后一个元素
erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
erase(const_iterator pos);//删除迭代器指向的元素
clear();//删除容器中所有元素
*/

//vector插入和删除操作
void test05()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	vector<int>v1(arr, arr + sizeof(arr) / sizeof(int));

	//打印元素
	cout << "v1： " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	//insert(const_iterator pos, int count, ele);//迭代器指向位置pos插入count个元素ele.
	v1.insert(v1.begin(), 1, 100); //头插一个100
	cout << "v1.insert(v1.begin(), 1, 100)： " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;
	
	//insert(const_iterator pos, int count, ele);//迭代器指向位置pos插入count个元素ele.
	v1.insert(v1.begin() + 2, 1, 100);//第二个位置后插入一个999
	cout << "v1.insert(v1.begin() + 2, 1, 100)： " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;

	//push_back(ele); //尾部插入元素ele
	v1.push_back(200);
	cout << "v1.push_back(200)： " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	//pop_back();//删除最后一个元素
	v1.pop_back();
	cout << "v1.pop_back()： " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	//erase(const_iterator pos);//删除迭代器指向的元素
	v1.erase(v1.begin() + 1);
	cout << "v1.erase(v1.begin() + 1)： " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	//erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
	v1.erase(v1.begin(), v1.end());
	cout << "v1.erase(v1.begin(), v1.end())： " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;


	
	//clear();//删除容器中所有元素
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	vector<int>v2(arr2, arr2 + sizeof(arr2) / sizeof(int));
	cout << "v2： " << endl;
	PrintVector(v2);
	cout << "-----------------------" << endl;
	
	v2.clear();
	cout << "v2.clear()： " << endl;
	PrintVector(v1);
	cout << "-----------------------" << endl;
}


//案例  巧用swap收缩内存  巧用reserve 预留内存空间
void test06()
{
	vector<int>v;

	//巧用 reserve 预留内存空间  预留的空间未初始化 不可访问
	//预留空间的好处：不用再去开辟新的空间
	v.reserve(100000);

	int * p = NULL;
	int num = 0;
	for (int i = 0;i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	// num 统计空间开辟次数
	cout << "num = " << num << endl;
	//空间数据大小
	cout << "size = " << v.size() << endl;
	//空间容量
	cout << "capacity = " << v.capacity() << endl;
	cout << "-----------------------" << endl;


	//空间从100000  缩小到 3
	v.resize(3);
	cout << "使用swap收缩内存前： " << endl;
	cout << "size = " << v.size() << endl;
	cout << "capacity = " << v.capacity() << endl;
	cout << "-----------------------" << endl;


	//巧用swap
	vector<int>(v).swap(v);  //使用swap缩小内存空间容量  避免浪费内存
	cout << "使用swap收缩内存后： " << endl;
	cout << "size = " << v.size() << endl;
	cout << "capacity = " << v.capacity() << endl;
	cout << "-----------------------" << endl;


	cout << "v： " << endl;
	PrintVector(v);
	cout << "-----------------------" << endl;
}


void test08()
{
	vector<int>v;
	for (int i = 0;i < 10;i++)
	{
		v.push_back(i);
	}

	//打印操作
	cout << "v： " << endl;
	PrintVector(v);
	cout << "-----------------------" << endl;

	//逆序遍历 非质变算法
	//reverse_iterator  反转迭代器
	//rbegin 指向数组尾部的元素
	//rend  指向数组的第一个元素
	cout << "reverse v： " << endl;
	for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend();it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
	cout << "-----------------------" << endl;


	//如何判断一个容器的迭代器是否支持随机访问
	vector<int>::iterator itBegin = v.begin();
	itBegin++;
	itBegin--;
	itBegin = itBegin + 1;

	list<int>L;
	L.push_back(10);
	L.push_back(10);
	L.push_back(10);
	L.push_back(10);

	list<int>::iterator lBegin = L.begin();
	lBegin++;
	lBegin--;
	//lBegin = lBegin + 1; //不支持随机访问

}


int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	//test05();
	//test06();
	test08();
	system("pause");
	return EXIT_SUCCESS;
}
