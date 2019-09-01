#include "vector.h"
#include<cmath>
#include<iostream>
using namespace std;

const double Rad_to_deg = 45.0 / atan(1.0);



//默认构造
Vector::Vector()
{
	this->m_X = this->m_Y = this->m_Mag = this->m_Ang = 0.0;
	this->index = 1; // 默认模式一
}

//有参构造
Vector::Vector(double n1, double n2, int index)
{
	this->index = index;   //如果未传值 则 默认模式一
	if (index == 1)
	{
		this->m_X = n1;
		this->m_Y = n2;
		this->set_mag();
		this->set_ang();
	}
	else if (index == 2)
	{
		this->m_Mag = n1;
		this->m_Ang = n2 / Rad_to_deg;
		this->set_x();
		this->set_y();
	}
	else
	{
		cout << "Incorrect 3rd argument to Vector() -- ";
		cout << "vector set to 0" << endl;
		
		this->m_X = this->m_Y = this->m_Mag = this->m_Ang = 0.0;
		this->index = 1; // 默认模式一
	}
}

//设置 m_Mag
void Vector::set_mag()
{
	this->m_Mag = sqrt(this->m_X * this->m_X + this->m_Y * this->m_Y);
}

//设置 m_Ang
void Vector::set_ang()
{
	if (this->m_X == 0.0 && this->m_Y == 0.0)
		this->m_Ang = 0.0;
	else
		this->m_Ang = atan2(this->m_Y, this->m_X);
}

//设置 m_X
void Vector::set_x()
{
	this->m_X = this->m_Mag * cos(this->m_Ang);
}

//设置 m_Y
void Vector::set_y()
{
	this->m_Y = this->m_Mag * sin(this->m_Ang);
}


//成员函数 重新设置方向
void Vector::reset(double n1, double n2, int index)
{
	this->index = index; //模式
	if (index == 1)
	{
		this->m_X = n1;
		this->m_Y = n2;
		this->set_mag();
		this->set_ang();
	}
	else if (index == 2)
	{
		this->m_Mag = n1;
		this->m_Ang = n2 / Rad_to_deg;
		this->set_x();
		this->set_y();
	}
	else
	{
		cout << "Incorrect 3rd argument to Vector() -- ";
		cout << "vector set to 0" << endl;

		this->m_X = this->m_Y = this->m_Mag = this->m_Ang = 0.0;
		this->index = 1; // 默认模式一
	}
}


//析构函数
Vector::~Vector()
{

}



//设置行走模式为模式1
void Vector::setModeOne()
{
	this->index = 1;
}

						   
//设置行走模式为模式2
void Vector::setModeTwo()
{
	this->index = 2;
}

//操作符重载
Vector Vector::operator+(const Vector & b)const
{
	//返回一个有参构造
	return Vector(this->m_X + b.m_X, this->m_Y + b.m_Y);
}

Vector Vector::operator-(const Vector & b)const
{
	//返回一个有参构造
	return Vector(this->m_X - b.m_X, this->m_Y - b.m_Y);
}

Vector Vector::operator-()const
{
	//返回一个有参构造  设置为负值
	return Vector( -(this->m_X ),  -(this->m_Y));
}

Vector Vector::operator*(double n)const
{
	return Vector( n * this->m_X, n * this->m_Y);
}

//友元
Vector operator*(double n, const Vector & v)
{
	return v * n;
}


ostream & operator<<(ostream & out, const Vector & v)
{
	if (v.index == 1)
	{
		out << "( x , y ) = ( " << v.m_X << ", " << v.m_Y << ")";
	}
	else if (v.index == 2)
	{
		out << "( m , a ) = ( " << v.m_Mag << ", " << v.m_Ang * Rad_to_deg << ")";
	}
	else
		out << "Vector object mode is invalid";

	return out;
}