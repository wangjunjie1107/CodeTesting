#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//点类
class Point
{
public:

	//设置X坐标
	void set_X(int x)
	{
		this->m_X = x;
	}

	//设置Y坐标
	void set_Y(int y)
	{
		this->m_Y = y;
	}

	//获取X坐标
	int get_X()
	{
		return this->m_X;
	}

	//获取Y坐标
	int get_Y()
	{
		return this->m_Y;
	}

private:
	int m_X;//X坐标
	int m_Y;//Y坐标
};

//圆类
class Circle
{

public:
	//设置半径
	void set_R(int r)
	{
		this->m_R = r;
	}

	//获取半径
	int get_R()
	{
		return this->m_R;
	}

	//设置圆心
	void set_Center(Point p)
	{
		//this->m_Center = p;
		this->m_Center.set_X(p.get_X());
		this->m_Center.set_Y(p.get_Y());
	}

	//获取圆心
	Point get_Center()
	{
		return this->m_Center;
	}

	//成员函数判断点是否在圆内
	void isInTheCircle(Point p)
	{
		//点和圆心之间的距离的平方
		int pDistance = (this->m_Center.get_X() - p.get_X()) * (this->m_Center.get_X() - p.get_X())
			+ (this->m_Center.get_Y() - p.get_Y()) * (this->m_Center.get_Y() - p.get_Y());

		//半径的平方
		int rDistance = this->get_R() * this->get_R();

		if (pDistance == rDistance)
		{
			cout << "成员函数判断：点在圆上" << endl;
		}
		else if(pDistance > rDistance)
		{
			cout << "成员函数判断：点在圆外" << endl;
		}
		else
		{
			cout << "成员函数判断：点在圆内" << endl;
		}
	}
private:
	int m_R;//半径
	
	Point m_Center;//圆心
};

//判断点和圆的关系 全局函数
void isInTheCircle(Circle c, Point p)
{
	//点和圆心之间的距离的平方
	int pDistance = (c.get_Center().get_X() - p.get_X()) * (c.get_Center().get_X() - p.get_X())
		+ (c.get_Center().get_Y() - p.get_Y()) * (c.get_Center().get_Y() - p.get_Y());

	//半径的平方
	int rDistance = c.get_R() * c.get_R();

	if (pDistance == rDistance)
	{
		cout << "全局函数判断：点在圆上" << endl;
	}
	else if (pDistance > rDistance)
	{
		cout << "全局函数判断：点在圆外" << endl;
	}
	else
	{
		cout << "全局函数判断：点在圆内" << endl;
	}
}

void test()
{
	//设置点坐标
	Point p;
	p.set_X(0);
	p.set_Y(0);

	//设置圆心和半径
	Point center;//圆心
	center.set_X(0);
	center.set_Y(0);
	Circle c;
	c.set_R(10);
	c.set_Center(center);

	//成员函数判断点是否在圆上
	c.isInTheCircle(p);

	//全局函数判断点是否在圆上
	isInTheCircle(c, p);

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
