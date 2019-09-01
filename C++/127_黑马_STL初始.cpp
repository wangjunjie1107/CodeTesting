#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector> //单端数组
#include<algorithm>//标准算法头文件

using namespace std;

//迭代器 ：刚开始可以理解为一个指向容器的指针
//  每个容器都有自己特有的迭代器  vector<int>::iterator  vector<Person>::iterator
//	容器(container) 
//	算法(algorithm) 
//	迭代器(iterator)


void myPrint(int val)
{
	cout << val << endl;
}

void test01()
{
	//创建容器
	vector<int>v; //类似于 myArray<int>myIntArray


	//插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	//利用迭代器遍历容器中的数据

	//v.begin();  //起始迭代器 指向容器中第一个元素
	vector<int>::iterator itBegin = v.begin();

	//v.end() 结束迭代器  指向容器中最后一个元素的下一个位置的地址
	vector<int>::iterator itEnd = v.end();

	//第一种遍历方式  while 循环
	while(itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}

	//第二种遍历方式  for循环
	for (vector<int>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++)
	{
		cout << *itBegin << endl;
	}

	//第三种遍历方式  STL遍历算法
	for_each(v.begin(), v.end(), myPrint);
}



//通过STL操作  自定义数据类型 
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	string m_Name;
	int m_Age;
};

//打印自定义数据类型  值传递
void myPrintPerson1(Person p)
{
	cout << "姓名：" << p.m_Name << "  年龄：" << p.m_Age << endl;
}
//打印自定义数据类型  指针传递
void myPrintPerson2(Person * p)
{
	cout << "姓名：" << (*p).m_Name << "  年龄：" << (*p).m_Age << endl;
}

//自定义数据类型  STL 使用
void test02()
{
	//建立容器
	vector<Person *>v;

	Person p1("aaa", 100);
	Person p2("bbb", 200);
	Person p3("ccc", 300);
	Person p4("ddd", 400);
	Person p5("eee", 500);

	//插入数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	//第一种遍历
	//for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	//{
	//	// *it   ---  Person
	//	cout << "姓名：" << (*it).m_Name << "  年龄：" << (*it).m_Age << endl;
	//}
	
	//第二种遍历
	//for_each(v.begin(), v.end(), myPrintPerson1);
	for_each(v.begin(), v.end(), myPrintPerson2);
}





//小容器的打印
void myPrintVectorSmall(int val)
{
	cout << val << " " ;
}
//大容器的打印
void myPrintVectorBig(vector<int>v)
{
	//大容器的打印嵌套小容器的打印函数
	for_each(v.begin(), v.end(), myPrintVectorSmall);
	cout << endl;
}
//容器嵌套容器
void test03()
{
	vector<vector<int>>v; //类似二维数组

	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	vector<int>v5;

	//每个int容器添加5个数据
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i + 1); 
		v2.push_back(i + 10);
		v3.push_back(i + 100);
		v4.push_back(i + 1000);
		v5.push_back(i + 10000);
	}

	//将小容器插入到大容器中
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);

	//遍历大容器 
	//第一种遍历方式 for循环
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		// *it  ---- vector<int>
		for (vector<int>::iterator vit = (*it).begin();vit != (*it).end();vit++)
		{
			cout << *(vit) << " ";
		}
		cout << endl;
	}

	//第二种遍历方式 
	//for_each(v.begin(), v.end(), myPrintVectorBig);

}

int main() 
{
	//test01();
	//test02();
	test03();

	system("pause");
	return EXIT_SUCCESS;
}
