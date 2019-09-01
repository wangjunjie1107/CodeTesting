#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

//提前告诉编译器 Building后面会创建，
//目前使用时候先不要报错
class Building;

class GoodGay
{
public:

	GoodGay();

	void visit();

	Building * building;
};

class Building
{ 
	//让类做友元  可以访问Building类中私有成员
	friend class GoodGay;

public:
	
	Building();

	string m_SittingRoom;

private:
	string m_BedRoom;
};

Building::Building()//构造函数类外实现
{
	m_BedRoom = "客厅";
	m_SittingRoom = "卧室";
}

GoodGay::GoodGay()//构造函数类外实现
{
	building = new Building;
}

void GoodGay::visit()//成员函数类外实现
{
	cout << "好基友类正在访问： " << building->m_SittingRoom << endl;
	
	cout << "好基友类正在访问： " << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}


int main() 
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
