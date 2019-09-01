#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;


//提前告诉编译器 Building后面会创建，
//目前使用时候先不要报错
class Building;


class GoodGay  //类
{
public:

	GoodGay();

	void visit();

	Building * building;
};


class Building  //类
{
	//让GoodGay类作为 Building类的好朋友，
	//可以访问Building类中私有成员
	friend class GoodGay;
public:
	Building();

	string m_SittingRoom;
private:
	string m_BedRoom;
};

//构造函数的类外实现
Building::Building() 
{
	m_BedRoom = "卧室";
	m_SittingRoom = "客厅";
}

//构造函数的类外实现
GoodGay::GoodGay()  
{
	building = new Building;
}

//类中成员函数的类外实现
void GoodGay::visit()	
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

