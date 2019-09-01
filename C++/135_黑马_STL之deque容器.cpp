#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <deque>
#include <algorithm>


/*
3.3.3.1 deque构造函数
deque<T> deqT;//默认构造形式
deque(beg, end);//构造函数将[beg, end)区间中的元素拷贝给本身。
deque(n, elem);//构造函数将n个elem拷贝给本身。
deque(const deque &deq);//拷贝构造函数。
*/

void test01()
{
	deque<int>d;//默认构造形式
	d.push_back(10);
	d.push_back(10);
	d.push_back(10);
	d.push_back(10);
	d.push_back(10);

	deque<int>d2;

	d2.assign(d.begin(), d.end());//构造函数将[beg, end)区间中的元素拷贝给本身。

	d2.assign(10, 10);//构造函数将n个elem拷贝给本身。

	d2 = d;//拷贝构造函数

}

/*
3.3.3.2 deque赋值操作
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem);//将n个elem拷贝赋值给本身。
deque& operator=(const deque &deq); //重载等号操作符
swap(deq);// 将deq与本身的元素互换
*/

void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_front(10);
	d1.push_front(10);
	d1.push_front(10);

	deque<int>d2;
	d2.assign(d1.begin(), d1.end());//将[beg, end)区间中的数据拷贝赋值给本身
	d2.assign(10, 100);//将n个elem拷贝赋值给本身。

	deque<int>d3;
	d3 = d2; //重载等号操作符

	d3.swap(d1);// 将d1与本身的元素互换

}

/*
3.3.3.3 deque大小操作
deque.size();//返回容器中元素的个数
deque.empty();//判断容器是否为空
deque.resize(num);//重新指定容器的长度为num,若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
deque.resize(num, elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置,如果容器变短，则末尾超出容器长度的元素被删除。
*/

void PrintDeque(int a)
{
	cout << a << " ";
}

void test03()
{
	deque<int>d1;
	d1.push_back(100);
	d1.push_front(200);
	d1.push_front(200);
	d1.push_front(200);
	d1.push_front(200);

	//返回容器中元素的个数
	cout << d1.size() << endl;

	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;

	}


	//重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
	//如果容器变短，则末尾超出容器长度的元素被删除。
	d1.resize(20);
	
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

	//重新指定容器的长度为num,若容器变长，则以elem值填充新位置,
	//如果容器变短，则末尾超出容器长度的元素被删除。
	d1.resize(30, 100);
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

}


/*
3.3.3.4 deque双端插入和删除操作
push_back(elem);//在容器尾部添加一个数据
push_front(elem);//在容器头部插入一个数据
pop_back();//删除容器最后一个数据
pop_front();//删除容器第一个数据
*/

void test04()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

	d1.pop_back();
	d1.pop_front();
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

}
/*
3.3.3.5 deque数据存取
at(idx);//返回索引idx所指的数据，如果idx越界，抛出out_of_range。
operator[];//返回索引idx所指的数据，如果idx越界，不抛出异常，直接出错。
front();//返回第一个数据。
back();//返回最后一个数据
*/
void test05()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	//cout << d1.at(100) << endl;//如果idx越界，抛出out_of_range
	cout << d1[2] << endl;
	cout << d1.front() << endl;//返回第一个数据。
	cout << d1.back() << endl;//返回最后一个数据

}



/*
3.3.3.6 deque插入操作
insert(pos,elem);//在pos位置插入一个elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
3.3.3.7 deque删除操作
clear();//移除容器的所有数据
erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
erase(pos);//删除pos位置的数据，返回下一个数据的位置。
*/


void test06()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	

	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

	d1.insert(d1.begin(), 100000);
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";


	d1.insert(d1.begin(), 2, 200000);
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

	//在d1的尾部插入再整个d1队列
	int arr[] = { 1,2,3,4 };
	d1.insert(d1.end(), arr, arr + sizeof(arr) / sizeof(int));
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";


	d1.erase(d1.begin(), d1.begin() + 2);
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";



	d1.erase(d1.begin());
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";


	d1.clear();
	for_each(d1.begin(), d1.end(), PrintDeque);
	cout << endl;
	cout << "-----------------------\n";

}

int main()
{
	//test03();
	//test04();
	//test05();
	test06();

	system("pause");
	return EXIT_SUCCESS;

}
