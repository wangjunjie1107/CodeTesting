#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>
#include<map>

//
///*
//3.8.2.1 map构造函数
//map<T1, T2> mapTT;//map默认构造函数:
//map(const map &mp);//拷贝构造函数
//
//
//3.8.2.2 map赋值操作
//map& operator=(const map &mp);//重载等号操作符
//swap(mp);//交换两个集合容器
//
//3.8.2.3 map大小操作
//size();//返回容器中元素的数目
//empty();//判断容器是否为空
//3.8.2.4 map插入数据元素操作
//map.insert(...); //往容器插入元素，返回pair<iterator,bool>
//map<int, string> mapStu;
//// 第一种 通过pair的方式插入对象
//mapStu.insert(pair<int, string>(3, "小张"));
//// 第二种 通过pair的方式插入对象
//mapStu.inset(make_pair(-1, "校长"));
//// 第三种 通过value_type的方式插入对象
//mapStu.insert(map<int, string>::value_type(1, "小李"));
//// 第四种 通过数组的方式插入值
//mapStu[3] = "小刘";
//mapStu[5] = "小王";
//*/
//
//
// //map 的成员是  对组 <int,int>  
//void test01()
//{
//	//map默认构造函数:
//	map<int, int>T1;
//	T1.insert(1, 10);
//
//
//	//拷贝构造函数
//	map<int, int>T2(T1);
//
//
//	//重载等号操作符
//	map<int, int>T3;
//	T3 = T2;
//
//	//交换两个集合容器
//	T3.swap(T2);
//
//	//判断容器是否为空
//	T3.empty();
//
//	//往容器插入元素，返回pair<iterator,bool>
//	T3.insert(map<int,int>::value_type(1,10));
//
//	//插入对象的四种方法
//	map<int, string> mapStu;
//
//	// 第一种 通过pair的方式插入对象
//	mapStu.insert(pair<int, string>(3, "wangjunjie"));
//
//	// 第二种 通过pair的方式插入对象
//	mapStu.insert(make_pair(-1, "haha"));
//
//	// 第三种 通过value_type的方式插入对象
//	mapStu.insert(map<int, string>::value_type(1, "hahaa"));
//
//	// 第四种 通过数组的方式插入值
//	mapStu[3] = "wangjun";
//	mapStu[4] = "lisijia";
//
//	for (map<int, string>::iterator it = mapStu.begin();it != mapStu.end();it++)
//	{
//		cout << "key = " << it->first << "value = " << it->second << endl;
//	}
//
//	//如果能确保key存在，可以用[]方式 通过key找value
//	cout << mapStu[1] << endl;
//
//}
//
///*
//3.8.2.5 map删除操作
//clear();//删除所有元素
//erase(pos);//删除pos迭代器所指的元素，返回下一个元素的迭代器。
//erase(beg,end);//删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
//erase(keyElem);//删除容器中key为keyElem的对组。
//*/
//
//void test02()
//{
//	map<int, int>m;
//	m.insert(make_pair(2, 20));
//	m.insert(map<int, int>::value_type(3, 30));
//	m.insert(pair<int, int>(1, 10));
//	m[4] = 40;
//
//	m.erase(3);//删除key为3的元素
//
//	for (map<int, int>::iterator it = m.begin();it != m.end();it++)
//	{
//		cout << "key = " << it->first << "value = " << it->second << endl;
//	}
//}
//
//
///*
//3.8.2.6 map查找操作
//find(key);//查找键key是否存在,若存在，返回该键的元素的迭代器；/若不存在，返回map.end();
//count(keyElem);//返回容器中key为keyElem的对组个数。对map来说，要么是0，要么是1。对multimap来说，值可能大于1。
//lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
//upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
//equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
//*/
//
//
//// map查找操作
//void test03()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 22));
//	m.insert(make_pair(2,222));
//	m.insert(map<int, int>::value_type(3, 33));
//	m[4] = 555;
//
//	map<int, int>::iterator ret = m.find(4);//查找 关键字为4 的元素
//	if (ret != m.end())
//	{
//		cout << "找到了元素 key = " << ret->first << " value = " << ret->second << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	int num = m.count(3);
//	cout << "key为3的元素个数为：" << num << endl;
//
//	//lower_bound(keyElem);//返回第一个key>=keyElem元素的迭代器。
//	map<int, int>::iterator it = m.lower_bound(3); //返回第一个 key 大于等于 3 的元素
//	if (it != m.end())
//	{
//		cout << "找到了lower_bound的值 ，key = " << it->first << " value = " << it->second << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	//upper_bound(keyElem);//返回第一个key>keyElem元素的迭代器。
//	it = m.upper_bound(3);//返回第一个 key 大于 3 的元素的迭代器
//	if (it != m.end())
//	{
//		cout << "找到了upper_bound的值 ，key = " << it->first << " value = " << it->second << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	//equal_range(keyElem);//返回容器中key与keyElem相等的上下限的两个迭代器。
//	pair<map<int, int>::iterator, map<int, int>::iterator>ret2 = m.equal_range(3);
//	if (ret2.first != m.end())
//	{
//		cout << "找到了equal_range中的 lower_bound 的值， key = " << ret2.first->first << " value = " << ret2.first->second << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//	if (ret2.second != m.end())
//	{
//		cout << "找到了equal_range中的upper_bound 的值， key = " << ret2.second->first << " value = " << ret2.second->second << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//}

//
//class myCompare
//{
//public:
//	bool operator()(const int v1,const int v2)
//	{
//		return v1 > v2; //降序排列
//	}
//};
//
//void test04()
//{
//	map<int, int, myCompare>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(2, 10));
//	m.insert(map<int, int>::value_type(3, 30));
//	m[4] = 222;
//
//	for (map<int, int, myCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//}




//自定义数据类型 map 容器
class Person
{
public:

	Person(string name, int age) :m_Name(name), m_Age(age)
	{

	}

	string m_Name;//姓名
	int m_Age;//年龄
	
};

//自定义数据  自定义排列
class myComparePerson
{
public:
	bool operator()(const Person & p1, const Person & p2)
	{
		//按年龄降序排列
		if (p1.m_Age == p2.m_Age)
		{
			return false;
		}
		return p1.m_Age > p2.m_Age;
	}
};

//打印自定义类型数据
void printPerson(map<Person, int, myComparePerson> & m)
{
	for (map<Person, int, myComparePerson>::iterator it = m.begin();it != m.end();it++)
	{
		cout << "姓名 ： " << it->first.m_Name << " 年龄： " << it->first.m_Age << "关键字：  " << it->second << endl;
	}
}

void test05()
{
	map<Person, int, myComparePerson>m;

	Person p1("aaa", 9);
	Person p2("bbb", 18);
	Person p3("ccc", 55);
	Person p4("ddd", 24);
	Person p5("eee", 16);
	Person p6("fff", 33);

	//插入数据
	m.insert(make_pair(p1, 1));
	m.insert(make_pair(p2, 2));
	m.insert(make_pair(p3, 3));
	m.insert(make_pair(p4, 4));
	m.insert(make_pair(p5, 5));
	m.insert(make_pair(p6, 6));

	printPerson(m);
}

int main()
{
	//test04();
	test05();
	system("pause");
	return EXIT_SUCCESS;
}
