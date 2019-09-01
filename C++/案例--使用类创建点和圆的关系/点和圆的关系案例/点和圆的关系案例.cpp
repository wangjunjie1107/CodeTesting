#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

#include "circle.h"
#include "point.h"

void isInCircle(Circle c1, Point p);

void test()
{
	//创建点
	Point p1;
	p1.setX(20);
	p1.setY(10);


	//创建圆
	Circle c1;
	//设置圆的半径
	c1.setR(10);
	//设置圆心  先设置一个点的位置，再将位置传入到圆的类中
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);



	cout << "点的 x 坐标为："<< p1.getX() << endl;
	cout << "点的 y 坐标为："<< p1.getY() << endl;

	cout << "圆的半径为：" << c1.getR() << endl;
	cout << "圆心 x 为：" << c1.getCenter().getX() << endl;
	cout << "圆心 y 为：" << c1.getCenter().getY() << endl;

	cout << "----------------------------------" << endl;
	c1.isInCircle(p1);
	cout << "----------------------------------" << endl;
	isInCircle(c1, p1);
	cout << "----------------------------------" << endl;

}


//判断点是否在圆内  全局函数
void isInCircle(Circle c1, Point p)
{
	int distance = (c1.getCenter().getX() - p.getX()) * (c1.getCenter().getX() - p.getX()) + (c1.getCenter().getY() - p.getY()) * (c1.getCenter().getY() - p.getY());

	int Rvalue = c1.getR() * c1.getR();

	if (Rvalue == distance)
	{
		cout << "全局函数:::点在圆上" << endl;
	}
	else if (Rvalue > distance)
	{
		cout << "全局函数:::点在圆内" << endl;
	}
	else
	{
		cout << "全局函数:::点在圆外" << endl;
	}
}


int main()
{
	test();


	system("pause");
	return EXIT_SUCCESS;
}