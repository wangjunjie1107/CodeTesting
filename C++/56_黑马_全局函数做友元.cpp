#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

class Building
{
	//让全局函数 goodGay作为本类Building中的好朋友，可以访问私有成员
	friend void goodGay(Building & building);

public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

public:
	//客厅
	string m_SittingRoom;
private:
	//卧室
	string m_BedRoom;
};

//好基友 全局函数 可以访问客厅 也可以访问卧室
void goodGay(Building & building)
{
	cout << "好基友正在访问： " << building.m_SittingRoom << endl;

	cout << "好基友正在访问： " << building.m_BedRoom << endl;
}

void badGay(Building & building)
{
	cout << "好基友正在访问： " << building.m_SittingRoom << endl;

	//cout << "好基友正在访问： " << building.m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGay(building);
}


int main() 
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

