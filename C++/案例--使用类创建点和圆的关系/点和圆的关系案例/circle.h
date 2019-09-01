#pragma once
#include<iostream>
#include "point.h"
using namespace std;



class Circle
{

public:

	//设置半径
	void setR(int r);
	
	//获取半径
	int getR();

	//设置圆心
	void setCenter(Point center);
	
	//获取圆心
	Point getCenter();

	//判断点是否在圆内
	void isInCircle(Point p);


private:
	int m_R; //半径
	Point m_Center;//圆心
};