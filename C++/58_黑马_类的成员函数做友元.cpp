#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

class Building;
class GoodGay
{


	//类中的成员函数作为另一个类的友元
	friend void Building::Building1();
	//类作为另一个类的友元
	friend class Building;
	//全局函数做为类的友元
	friend void printer(GoodGay & goodgay);

public:
	GoodGay();//构造函数

	//只有visit这个成员函数 ，可以访问Building中的私有成员，其他函数不可以
	void visit();

	void visit2();

	Building * building;
};

class Building
{
	//告诉编译器 GoodGay类中的visit函数 是本类的好朋友，可以访问本类中私有成员
	//类中成员函数作为类的友元
	friend void GoodGay::visit();
	//friend void GoodGay::visit2();

public:
	Building();

	void Building1() {};

	string m_SittingRoom;

private:
	string m_BedRoom;
	int m_A;
};

//构造函数类外实现
Building::Building() 
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
	m_A = 100;
}

GoodGay::GoodGay()
{
	building = new Building;
}


//成员函数的类外实现
void GoodGay::visit()
{
	cout << "好基友的visit函数正在访问： " << building->m_A << endl;

	cout << "好基友的visit函数正在访问： " << building->m_SittingRoom << endl;
	
	cout << "好基友的visit函数正在访问： " << building->m_BedRoom << endl;
}

//成员函数的类外实现
void GoodGay::visit2()
{
	cout << "好基友的visit函数正在访问： " << building->m_SittingRoom << endl;

	//不是Building的好朋友，访问不了私有成员
	cout << "好基友的visit函数正在访问： " << building->m_BedRoom << endl;
}

void printer(GoodGay & goodgay)
{

}
void test01()
{
	GoodGay gg;
	gg.visit();
	//gg.visit2();
}
int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

