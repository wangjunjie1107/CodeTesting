#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>


class Building;
class GoodGay
{
public:

	GoodGay();

	//只有visit这个成员函数 ，可以访问Building中的私有成员，其他函数不可以
	void  visit();

	void  visit2();

	Building * building;
};


class Building
{
	//类中的成员函数做类的友元
	friend void GoodGay::visit();

public:
	Building();
private:
	string m_BedRoom;
};

Building::Building()
{
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "好基友的visit函数正在访问： " << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	//成员函数 visit2 不是类的友元 无法访问私有成员
	//cout << "好基友的visit函数正在访问： " << building->m_BedRoom << endl;
}

void test()
{
	GoodGay g1;
	g1.visit();

}

int main()
{
	test();


	system("pause");
	return EXIT_SUCCESS;
}
