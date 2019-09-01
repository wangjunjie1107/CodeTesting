//multimap 案例
//公司今天招聘了 5 个员工，5 名员工进入公司之后，需要指派员工在那个部门工作
//人员信息有: 姓名 年龄 电话 工资等组成
//通过 Multimap 进行信息的插入 保存 显示
//分部门显示员工信息 显示全部员工信息

/*
Multimap和map的操作类似，唯一区别multimap键值可重复。
Map和multimap都是以红黑树为底层实现机制。
*/


#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

//员工信息
class Person
{
public:

	Person(string name, int age, int salary) :m_Name(name), m_Age(age), m_Salary(salary)
	{

	}
	string m_Name;//姓名
	int m_Age; //年龄
	int m_Salary;//薪水
};


//创建5个员工		
void CreatePerson(vector<Person> & vlist)
{
	Person p1("赵四", 20, 10000);
	Person p2("刘能", 27, 20000);
	Person p3("大脚", 26, 18000);
	Person p4("有田", 22, 16000);
	Person p5("本山", 29, 30000);

	vlist.push_back(p1);
	vlist.push_back(p2);
	vlist.push_back(p3);
	vlist.push_back(p4);
	vlist.push_back(p5);
	
}


//打印员工信息
void showPerson(Person p)
{
	cout << "姓名：" << p.m_Name << "  年龄： " << p.m_Age << "  薪水： " << p.m_Salary << endl;
}



//5名员工分配到不同的部门
void PersonByGroup(vector<Person> & vlist, multimap<int, Person> & plist)
{
	vector<Person>::iterator it = vlist.begin();

	plist.insert(make_pair(1, *it));
	plist.insert(make_pair(2, *(it + 1)));
	plist.insert(make_pair(3, *(it + 2)));
	plist.insert(make_pair(4, *(it + 3)));
	plist.insert(make_pair(5, *(it + 4)));

}



void PersonMenue(multimap<int, Person> & plist)
{

	while (true)
	{
		cout << "请输入员工所在部门（输入-1退出）：  ";
		int count;
		scanf("%d", &count);
		if (count == -1)
		{
			return;
		}

		multimap<int, Person>::iterator it = plist.begin();

		if (count == 1)
		{
			showPerson(it->second);
		}
		else if (count == 2)
		{
			it++;
			showPerson(it->second);
		}
		else if (count == 3)
		{
			it++;
			it++;
			showPerson(it->second);
		}
		else if (count == 4)
		{
			it++;
			it++;
			it++;
			showPerson(it->second);
		}
		else
		{
			it++;
			it++;
			it++;
			it++;
			showPerson(it->second);
		}
	}
	


}
int main() 
{

	vector<Person>  vlist; //创建的5个员工 未分组
	multimap<int, Person> plist; //保存分组后员工信息
	
										
	//创建5个员工						
	CreatePerson(vlist);


	//5名员工分配到不同的部门
	PersonByGroup(vlist, plist);

	//根据用户输入显示不同部门员工信息列表 或者 显示全部员工的信息列表
	PersonMenue(plist);

	system("pause");
	return EXIT_SUCCESS;
}
