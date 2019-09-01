#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<queue>
#include<string>

class Person
{
public:

	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}
	string m_Name;
	int m_Age;
};

void test01()
{
	queue<Person>q;

	Person p1("wangjunjie", 18);
	Person p2("wangjunjie", 19);
	Person p3("wangjunjie", 20);
	Person p4("wangjunjie", 21);
	Person p5("wangjunjie", 22);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);

	cout << "队列大小为：" << q.size() << endl;

	//查看队头  队尾 执行出队
	while (!q.empty())
	{
		//队头
		cout << "队头元素  姓名：" << q.front().m_Name << "年龄： " << q.front().m_Age << endl;
		
		//队尾
		cout << "队尾元素  姓名：" << q.back().m_Name << "年龄： " << q.back().m_Age << endl;

		//出队 先进先出
		q.pop();
	}

	cout << "队列大小为： " << q.size() << endl;

}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
