#include<iostream>
#pragma once
using namespace std;

//������� shift + tab


class Point
{

public:
	//���õ�x
	void setX(int x);
	
	//��ȡ��x
	int getX();

	//���õ�y
	void setY(int y);

	//��ȡ��y
	int getY();

private:
	int m_X;
	int m_Y;
};