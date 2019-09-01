#ifndef VECTOR_H_
#define VECTOR_H_


#pragma once
#include<iostream>
using namespace std;


//漫步模式 两种  一种是沿直角坐标系行走  一种是沿着极坐标系行走



class Vector
{
public:
	
private:

	//直角坐标
	double m_X;
	double m_Y;

	//极坐标
	double m_Mag;    //长度
	double m_Ang;	//方向

	//行走模式
	int index; //index 用来表示 ModeOne  或 ModeTwo

	void set_mag();
	void set_ang();
	void set_x();
	void set_y();

public:
	Vector(); //默认构造
	
	Vector(double n1, double n2, int index = 1); //有参构造
	
	void reset(double n1, double n2, int index = 1); //成员函数 重新设置方向

	~Vector(); //析构函数

	double x_val()const { return this->m_X; }  //返回x值
	double y_val()const { return this->m_Y; }  //返回y值
	double mag_val()const { return this->m_Mag; }  //返回m_Mag值
	double ang_val()const { return this->m_Ang; }  //返回m_Ang值

	void setModeOne(); //设置行走模式为模式1
	void setModeTwo();//设置行走模式为模式2

	//操作符重载
	Vector operator+(const Vector & b)const;
	Vector operator-(const Vector & b)const;
	Vector operator-()const;
	Vector operator*(double n)const;

	//友元
	friend Vector operator*(double n, const Vector & v);
	friend ostream & operator<<(ostream & out, const Vector & v);
};


#endif