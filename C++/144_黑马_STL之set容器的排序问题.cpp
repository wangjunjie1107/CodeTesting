#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <set>
#include <string>

//set 和 multiset 的区别
void test01()
{
	set<int>s;
	//对组的创建
	pair < set<int>::iterator, bool >ret = s.insert(10);

	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}

	ret = s.insert(10); //第二次插入失败 set不允许插入相同的值

	if (ret.second)
	{
		cout << "第二次插入成功" << endl;
	}
	else
	{
		cout << "第二次插入失败" << endl;
	}

	multiset<int>multi;
	multi.insert(10);
	multi.insert(10);

	for (multiset<int>::iterator it = multi.begin();it != multi.end();it++)
	{
		cout << *it << endl;
	}

}


//重载运算符() 改变set容器排序规则
class myCompareInt
{
public:
	bool operator()(int a, int b)
	{
		return a > b;//降序排列
	}
};


//set容器排序
void test02()
{
	//通过仿函数 改变set容器排序规则  
	set<int, myCompareInt>s; //第二个参数是一个类， 类中封装了函数
	s.insert(20);
	s.insert(10);
	s.insert(550);
	s.insert(23);
	s.insert(242);

	for (set<int, myCompareInt>::iterator it = s.begin(); it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



//对于自定义数据类型set容器排列
class Person
{
public:
	//初始化参数列表
	Person(string name, int age,int height) :m_Name(name), m_Age(age),m_Height(height)
	{

	}

	string m_Name;
	int m_Age;
	int m_Height;
};


//自定义数据类型排序 重载()运算符
class MyComparePerson
{
public:
	bool operator()(const Person & p1, const Person & p2)
	{
		//年龄降序 如果年龄相同  则身高增序
		if (p1.m_Age == p2.m_Age)
		{
			return p1.m_Height < p2.m_Height;
		}
		return p1.m_Age > p2.m_Age;
	}
};

void test03()
{
	set<Person, MyComparePerson>s;
	
	Person p1("aaa", 18, 180);
	Person p2("bbb", 33, 188);
	Person p3("ccc", 54, 120);
	Person p4("ddd", 19, 150);
	Person p5("eee", 19, 180);
	Person p6("fff", 19, 170);
	Person p7("ggg", 33, 183);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	s.insert(p5);
	s.insert(p6);
	s.insert(p7);


	cout << "----------------------------------------------------------------\n";
	cout << "自定义数据类型排序：年龄降序，如果年龄相同，则身高增序" << endl << endl;
	for (set<Person, MyComparePerson>::iterator it = s.begin();it != s.end();it++)
	{
		cout << "         姓名： " << it->m_Name << "  年龄：  " << it->m_Age << "  身高：  " << it->m_Height << endl;
	}
	cout << "----------------------------------------------------------------\n";

}
int main()
{

	//test01();
	//test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
