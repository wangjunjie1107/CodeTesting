#include "circle.h"




//设置半径
void Circle::setR(int r)
{
	m_R = r;
}


//获取半径
int Circle::getR()
{
	return m_R;
}

//设置圆心
void Circle::setCenter(Point center)
{
	m_Center = center;
}


//获取圆心
Point Circle::getCenter()
{
	return m_Center;
}


//判断点是否在圆内
void Circle::isInCircle(Point p)
{
	int distance = (m_Center.getX() - p.getX()) * (m_Center.getX() - p.getX()) + (m_Center.getY() - p.getY()) * (m_Center.getY() - p.getY());

	int Rvalue = m_R * m_R;

	if (Rvalue == distance)
	{
		cout << "成员函数:::点在圆上" << endl;
	}
	else if (Rvalue > distance)
	{
		cout << "成员函数:::点在圆内" << endl;
	}
	else 
	{
		cout << "成员函数:::点在圆外" << endl;
	}
}
