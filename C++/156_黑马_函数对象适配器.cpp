#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional> //内建函数对象 头文件
#include<string>

class MyPrint :public binary_function<int, int, void>
{
public:
	void operator()(int num, int start)const
	{
		cout << "num = " << num << "   start = " << start << "  sum = " << num + start << endl;
	}
};

//1、函数对象适配器
//1.1 绑定  bind2nd  bind1st
//1.2 继承 public binary_function<参数类型,参数类型 ,返回值类型>
//1.3 加const  使得不得修改this指针

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10;i++)
	{
		v.push_back(i);
	}
	cout << "请输入起始累加值：" << endl;
	int start;
	cin >> start;

	//bind2nd 表示适配器会将 start 与 参数列表中的第二个值相匹配
	for_each(v.begin(), v.end(), bind2nd(MyPrint(), start));

	//bind1nd 表示适配器会将 start 与 参数列表中的第一个值相匹配
	for_each(v.begin(), v.end(), bind1st(MyPrint(), start));

}

//2、取反适配器
class GreaterFive :public unary_function<int, bool>
{
public:
	bool operator()(int val)const
	{
		return val > 5;  //取反适配器会使得结果返回小于5的第一个数
	}
};
//2.1 取反适配器 not1
//2.2 继承 public unary_function<参数类型,返回值类型>
//2.3 加const
void test02()
{
	//一元取反适配器
	vector<int>v;
	for (int i = 0; i < 10;i++)
	{
		v.push_back(i);
	}
	//vector<int>::iterator ret = find_if(v.begin(), v.end(), not1( GreaterFive()));


	//取反适配器会使得结果返回小于5的第一个数  not1(bind2nd(greater<int>(), 5))
	//greater<int>()  内建函数对象 头文件 include<functional>
	vector<int>::iterator ret = find_if(v.begin(), v.end(), not1(bind2nd(greater<int>(), 5)));
	if (ret != v.end())
	{
		cout << "找到小于5的数据为" << *ret << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}

	//二元取反适配器   not2(less<int>())  降序  
	//not2(greater<int>()) 升序
	sort(v.begin(), v.end(), not2(greater<int>()));
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	
}

//3、函数指针适配器
void myPrint(int val, int start)
{
	cout << val + start << " ";
}

void test03()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	cout << endl;

	cout << "请输入起始累加值：" << endl;
	int start;
	cin >> start;

	//将myPrint函数指针 适配成 函数对象  即可
	//利用 prt_fun
	for_each(v.begin(), v.end(), bind2nd( ptr_fun(myPrint), start ));
	cout << endl;

}


//4、成员函数适配器
class Person
{
public:

	string m_Name;
	int m_Age;

	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	void showPerson()
	{
		cout << "姓名： " << this->m_Name << "年龄： " << this->m_Age << endl;
	}

	void addAge()
	{
		this->m_Age++;
	}
};

void test04()
{
	vector<Person>v1;

	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);
	
	//实体对象
	v1.push_back(p1);
	v1.push_back(p2);
	v1.push_back(p3);
	v1.push_back(p4);


	vector<Person *>v2;


	Person * p5 = new Person(p1);
	Person * p6 = new Person(p2);
	Person * p7 = new Person(p3);
	Person * p8 = new Person(p4);


	//指针类型
	v2.push_back(p5);
	v2.push_back(p6);
	v2.push_back(p7);
	v2.push_back(p8);

	cout << endl;

	//利用mem_fun_ref 将 实体成员函数进行适配
	cout << "利用mem_fun_ref 将 实体成员函数进行适配" << endl;


	for_each(v1.begin(), v1.end(), mem_fun_ref(&Person::showPerson));
	for_each(v1.begin(), v1.end(), mem_fun_ref(&Person::addAge));
	
	cout << "-----------  年龄加1后  --------------" << endl;

	for_each(v1.begin(), v1.end(), mem_fun_ref(&Person::showPerson));


	cout << endl;

	//利用mem_fun 将 指针类型成员函数进行适配
	cout << "利用mem_fun 将 指针类型成员函数进行适配" << endl;

	for_each(v2.begin(), v2.end(), mem_fun(&Person::showPerson));
	for_each(v2.begin(), v2.end(), mem_fun(&Person::addAge));

	cout << "-----------  年龄加1后  --------------" << endl;

	for_each(v2.begin(), v2.end(), mem_fun(&Person::showPerson));

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
