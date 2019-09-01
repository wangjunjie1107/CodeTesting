#include<iostream>
#pragma once
using namespace std;

//向后缩进 shift + tab


class Point
{

public:
	//设置点x
	void setX(int x);
	
	//获取点x
	int getX();

	//设置点y
	void setY(int y);

	//获取点y
	int getY();

private:
	int m_X;
	int m_Y;
};