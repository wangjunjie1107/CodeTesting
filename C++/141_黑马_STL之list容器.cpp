#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<list>
#include<algorithm>
#include<string>


//list双向循环链表
//void test01()
//{
//	list<int>myList;
//	for (int i = 0;i < 10;i++)
//	{
//		myList.push_back(i);
//	}
//
//	list<int>::_Nodeptr node = myList._Myhead->_Next;
//
//	for (int i = 0; i < myList._Mysize * 2; i++) {
//		cout << "Node:" << node->_Myval << endl;
//		node = node->_Next;
//
//		//node->_Prev; 前一个节点地址
//		if (node == myList._Myhead) {
//			node = node->_Next;
//		}
//	}
//}



/*
3.6.4.1 list构造函数
list<T> lstT;//list采用采用模板类实现,对象的默认构造形式：
list(beg,end);//构造函数将[beg, end)区间中的元素拷贝给本身。
list(n,elem);//构造函数将n个elem拷贝给本身。
list(const list &lst);//拷贝构造函数。
3.6.4.2 list数据元素插入和删除操作
push_back(elem);//在容器尾部加入一个元素
pop_back();//删除容器中最后一个元素
push_front(elem);//在容器开头插入一个元素
pop_front();//从容器开头移除第一个元素
insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
clear();//移除容器的所有数据
erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
erase(pos);//删除pos位置的数据，返回下一个数据的位置。
remove(elem);//删除容器中所有与elem值匹配的元素。
*/

//打印数据
void printList(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end();it++)
	{
		//*it = 1000;
		cout << *it << " ";
	}
	cout << endl;
}


void test02()
{
	//默认构造
	list<int>L1;

	//构造函数 
	int arr[] = { 1,2,3,4,5 };
	list<int>L2(arr, arr + sizeof(arr) / sizeof(int));

	//打印数据
	for (list<int>::iterator it = L1.begin(); it != L1.end();it++)
	{
		cout << *it << endl;
	}

	cout << "----------------------" << endl;

	//反向打印
	for (list<int>::reverse_iterator it = L1.rbegin(); it != L1.rend();it++)
	{
		cout << *it << endl;
	}


	//构造函数
	list<int>L3(10, 100);


	//拷贝构造
	list<int>L4(L3);

	//尾部插入
	L4.push_back(100);

	//尾部删除
	L4.pop_back();

	//头部插入
	L4.push_front(100);

	//头部删除
	L4.pop_front();

	//按位置插入
	L4.insert(L4.begin(), 100);

	//按位置插入 区间数据
	L4.insert(L4.end(), arr, arr + sizeof(arr) / sizeof(int));

	//移出区间数据
	L4.erase(L4.begin(),L4.end());

	//删除pos位置的数据 返回下一个数据的位置
	L4.erase(L4.begin());

	//删除所有与elem匹配的元素
	L4.remove(100);

	//移出所有数据
	L4.clear();


	//迭代器 是否支持随机访问
	list<int>::iterator it = L1.begin();
	it++;
	it--;
	//it = it + 1;//错误 不支持随机访问
}



/*
3.6.4.3 list大小操作
size();//返回容器中元素的个数
empty();//判断容器是否为空
resize(num);//重新指定容器的长度为num，
若容器变长，则以默认值填充新位置。
如果容器变短，则末尾超出容器长度的元素被删除。
resize(num, elem);//重新指定容器的长度为num，
若容器变长，则以elem值填充新位置。
如果容器变短，则末尾超出容器长度的元素被删除。

3.6.4.4 list赋值操作
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem);//将n个elem拷贝赋值给本身。
list& operator=(const list &lst);//重载等号操作符
swap(lst);//将lst与本身的元素互换。
3.6.4.5 list数据的存取
front();//返回第一个元素。
back();//返回最后一个元素。
*/


void test03()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	L1.push_back(50);
	L1.push_back(60);

	cout << "L1的元素个数为： " << L1.size() << endl;

	if (L1.empty())
	{
		cout << "L1为空" << endl;
	}


	//重新指定容器的长度为num，
	//若容器变长，则以默认值填充新位置。
	//如果容器变短，则末尾超出容器长度的元素被删除。
	L1.resize(100);
	
	//重新指定容器的长度为num，
	//若容器变长，则以elem值填充新位置。
	//如果容器变短，则末尾超出容器长度的元素被删除。
	L1.resize(15, 120);

	//将[beg, end)区间中的数据拷贝赋值给本身。
	list<int>L2;
	L2.assign(L1.begin(), L1.end());
	
	//将n个elem拷贝赋值给本身。
	L2.assign(10, 200);


	//重载等号操作符
	L2 = L1;


	//将lst与本身的元素互换。
	L2.swap(L1);
	
	//返回第一个元素。
	L2.front();

	//返回最后一个元素。
	L2.back();
}

/*
3.6.4.6 list反转排序
reverse();//反转链表，比如lst包含1,3,5元素，运行此方法后，lst就包含5,3,1元素。
sort(); //list排序
*/

void test04()
{
	list<int>L;
	for (int i = 0;i < 10;i++)
	{
		L.push_front(i);
	}

	printList(L);

	//反转 质变算法
	L.reverse();

	printList(L);
}

bool myCompare(int v1, int v2)
{
	return v1 > v2;
}

void test05()
{
	list<int>L;
	L.push_back(10);
	L.push_back(30);
	L.push_back(50);
	L.push_back(20);
	L.push_back(40);


	//标准算法适用于  只支持随机访问迭代器的容器
	//不支持随机访问迭代器的容器，内部会对应提供一些算法
	//sort(L.begin(), L.end());

	L.sort();
	printList(L);

	//降序  提供回调函数
	L.sort(myCompare);
	printList(L);
}

class Person
{
public:
	Person(string name, int age, int height, int num)
	{
		this->m_Age = age;
		this->m_Height = height;
		this->m_Name = name;
		this->m_Num = num;
	}

	// == 运算符重载  为了删除操作
	bool operator==(const Person & p)
	{
		if (this->m_Age == p.m_Age && this->m_Height == p.m_Height 
				&& this->m_Name == p.m_Name && this->m_Num == p.m_Num)
		{
			return true;
		}
		return false;
	}

	string m_Name; //姓名
	int m_Age; //年龄
	int m_Height; //身高
	int m_Num; //学号
};

//高级排序
bool myComparePerson(Person & p1, Person & p2)
{
	//按年龄升序; 如果年龄相同 身高降序; 如果身高也相同 按学号降序
	if (p1.m_Age == p2.m_Age && p1.m_Height == p2.m_Height)
	{
		return p1.m_Num > p2.m_Num;
	}
	else if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return p1.m_Age < p2.m_Age;
	}
}

void test07()
{
	list<Person>L;

	Person p1("张飞", 18, 200, 1);
	Person p2("刘备", 20, 185, 2);
	Person p3("关羽", 19, 150, 3);
	Person p4("赵云", 17, 170, 4);
	Person p5("诸葛", 21, 160, 5);
	Person p6("吕布", 21, 175, 6);
	Person p7("马超", 21, 140, 7);
	Person p8("小乔", 18, 165, 8);
	Person p9("大乔", 18, 165, 9);
	Person p10("智多星", 18, 165, 10);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);
	L.push_back(p7);
	L.push_back(p8);
	L.push_back(p9);
	L.push_back(p10);

	//排序前
	for (list<Person>::iterator it = L.begin();it != L.end();it++)
	{
		cout << "姓名： " << (*it).m_Name 
			<< " 年龄：" << it->m_Age 
			<< " 身高： " << it->m_Height 
			<<"  学号： "<< it->m_Num << endl;
	}

	//自定义数据类型，必须指定排序规则  参数为回调函数
	L.sort(myComparePerson); //高级排序


	cout << "----------------------------------\n";
	//排序后
	for (list<Person>::iterator it = L.begin();it != L.end();it++)
	{
		cout << "姓名： " << (*it).m_Name
			<< " 年龄：" << it->m_Age
			<< " 身高： " << it->m_Height
			<< "  学号： " << it->m_Num << endl;
	}


	//删除赵云
	L.remove(p4);// == 运算符重载  为了删除操作

	//L.remove的定义

	/*void remove(const _Ty& _Val)
	{	// erase each element matching _Val
		iterator _Val_it = end();

		for (iterator _First = begin(); _First != end(); )
			if (*_First == _Val）// 比较相同的类型 如果是自定义类型 
								//  要让编译器知道如何比较
				if (_STD addressof(*_First) == _STD addressof(_Val))
					_Val_it = _First++;
				else
					_First = erase(_First);
			else
				++_First;

		if (_Val_it != end())
			erase(_Val_it);
	}*/

	cout << "----------   删除赵云后  ---------------------" << endl;
	for (list<Person>::iterator it = L.begin();it != L.end();it++)
	{
		cout << "姓名： " << (*it).m_Name
			<< " 年龄：" << it->m_Age
			<< " 身高： " << it->m_Height
			<< "  学号： " << it->m_Num << endl;
	}

}
int main() 
{

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();

	system("pause");
	return EXIT_SUCCESS;
}
