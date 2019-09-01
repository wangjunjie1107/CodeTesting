#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>
#include <vector>
#include <map>
#include <ctime>

enum { No, CAIWU, RENLI, YANFA };

/*
//公司今天招聘了5个员工，5名员工进入公司之后，需要指派员工在那个部门工作
//人员信息有: 姓名 工资等组成
//通过Multimap进行信息的插入 保存 显示
//分部门显示员工信息 显示全部员工信息
*/

class Worker
{
public:
	string m_Name; //姓名
	int m_Salary; //工资
};


//创建员工
void createWorker(vector<Worker> & v)
{
	//小技巧
	string nameSeed = "ABCDEFGHIJ";

	for (int i = 0;i < 10;i++)
	{
		Worker worker;

		//初始化员工 姓名
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];

		//初始化员工工资
		worker.m_Salary = rand() % 10000 + 10000; // 10000-19999
		
		//将员工放入到 vector 容器中
		v.push_back(worker);
	}
}

//设置员工分组
void setGroup(vector<Worker> & v, multimap<int, Worker> & m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end();it++)
	{
		int dId = rand() % 3 + 1; //1 - 3

		//将部门编号 和 人员 插入 到map容器中
		
		//  多种方法实现 插入 对组
		//m.insert(pair<int, Worker>(dId, *it));
		//m.insert(multimap<int, Worker>::value_type(dId, *it));

		m.insert(make_pair(dId, *it));
	}
}

//分部门显示人员
void showGroup(multimap<int, Worker> & m)
{
	cout << "财务部门人员信息如下：" << endl;

	multimap<int, Worker>::iterator pos = m.find(CAIWU);

	int num = m.count(CAIWU);
	int index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}


	cout << "人力部门人员信息如下：" << endl;
	pos = m.find(RENLI);

	num = m.count(RENLI);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}

	cout << "研发部门人员信息如下：" << endl;
	pos = m.find(YANFA);

	num = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < num; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
}
void test01()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//存放员工的容器
	vector<Worker>v;

	//创建10名员工
	createWorker(v);


	//员工分组
	multimap<int, Worker>m;
	setGroup(v,m);

	//分部门显示人员
	showGroup(m);
}



int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
















