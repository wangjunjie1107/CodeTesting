#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

class Building
{

	//让全局函数做友元
	friend void goodGay(Building & building);

public:
	//客厅
	string m_SittingRoom;
protected:
	//餐厅
	string m_Cooking;
private:
	//卧室
	string m_BedRoom;


public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_Cooking = "餐厅";
		m_BedRoom = "卧室";
	}
};


//好基友 全局函数 可以访问客厅 也可以访问卧室
void goodGay(Building & building)
{
	cout << "好基友正在访问：" << building.m_SittingRoom << endl;

	cout << "好基友正在访问：" << building.m_Cooking << endl;

	cout << "好基友正在访问：" << building.m_BedRoom << endl;
}

void bedGay(Building & building)
{
	cout << "好基友正在访问：" << building.m_SittingRoom << endl;

	//不是友元 不可访问保护权限下的成员
	//cout << "好基友正在访问：" << building.m_Cooking << endl;

	//不是友元 不可访问私有成员
	//cout << "好基友正在访问：" << building.m_BedRoom << endl;
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
