#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <set>
#include <string>


/*
3.7.2.1 set构造函数
set<T> st;//set默认构造函数：
mulitset<T> mst; //multiset默认构造函数:
set(const set &st);//拷贝构造函数
3.7.2.2 set赋值操作
set& operator=(const set &st);//重载等号操作符
swap(st);//交换两个集合容器
3.7.2.3 set大小操作
size();//返回容器中元素的数目
empty();//判断容器是否为空

3.7.2.4 set插入和删除操作
insert(elem);//在容器中插入元素。
clear();//清除所有元素
erase(pos);//删除pos迭代器所指的元素，返回下一个元素的迭代器。
erase(beg, end);//删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
erase(elem);//删除容器中值为elem的元素。
*/


void printSet(set<int>&s)
{
	for (set<int>::iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << "---------------------\n";
}

void test01()
{
	set<int>s;

	s.insert(10);
	s.insert(60);
	s.insert(40);
	s.insert(80);
	s.insert(20);
	s.insert(90);

	//set容器会自动排序，默认排序规则 从大到小
	//set不允许插入重复的值 如果插入会忽略 不会报错
	printSet(s);
	

	//删除90
	s.erase(90);
	printSet(s);
}

/*
3.7.2.5 set查找操作
find(key);//查找键key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
count(key);//查找键key的元素个数
lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
*/

void test02()
{
	set<int>s;

	s.insert(10);
	s.insert(40);
	s.insert(90);
	s.insert(60);
	s.insert(20);
	s.insert(330);

	set<int>::iterator pos = s.find(70);
	if (pos != s.end())
	{
		cout << "找到了元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}

	//count统计元素出现次数 对于set而言 结果要么是1 要么是0
	int num = s.count(330);
	cout << "330出现次数为：" << num << endl;

	//lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
	set<int>::iterator ret = s.lower_bound(60);//返回第一个大于等于60的值
	if (ret != s.end())
	{
		cout << "找到lower_bound的值为： " << *ret << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}

	//upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
	ret = s.upper_bound(60); //返回第一个大于60的值
	if (ret != s.end())
	{
		cout << "找到lower_bound的值为： " << *ret << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}


	//equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
	//first 返回第一个大于等于100的值  second 返回第一个大于100的值
	pair<set<int>::iterator, set<int>::iterator>ret2 = s.equal_range(100);
	if (ret2.first != s.end())
	{
		//返回第一个大于等于100的值
		cout << "找的了equal_range中的lower_bound的值为" << *(ret2.first) << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}

	if (ret2.second != s.end())
	{
		//返回大于100的值
		cout << "找的了equal_range中的upper_bound的值为" << *(ret2.second) << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}

//对组的创建
void test03()
{
	pair<string, int>p1("wangjunjie", 18);
	cout << "姓名：" << p1.first << endl;
	cout << "年龄：" << p1.second << endl;

	pair<string, int>p2 = make_pair("wangjunjie", 25);
	cout << "姓名：" << p2.first << endl;
	cout << "年龄：" << p2.second << endl;

}
int main() 
{

	//test01();
	//test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
