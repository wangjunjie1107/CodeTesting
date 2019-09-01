#include "vector.h"
#include<cmath>
#include<iostream>
using namespace std;

const double Rad_to_deg = 45.0 / atan(1.0);



//Ĭ�Ϲ���
Vector::Vector()
{
	this->m_X = this->m_Y = this->m_Mag = this->m_Ang = 0.0;
	this->index = 1; // Ĭ��ģʽһ
}

//�вι���
Vector::Vector(double n1, double n2, int index)
{
	this->index = index;   //���δ��ֵ �� Ĭ��ģʽһ
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
		this->index = 1; // Ĭ��ģʽһ
	}
}

//���� m_Mag
void Vector::set_mag()
{
	this->m_Mag = sqrt(this->m_X * this->m_X + this->m_Y * this->m_Y);
}

//���� m_Ang
void Vector::set_ang()
{
	if (this->m_X == 0.0 && this->m_Y == 0.0)
		this->m_Ang = 0.0;
	else
		this->m_Ang = atan2(this->m_Y, this->m_X);
}

//���� m_X
void Vector::set_x()
{
	this->m_X = this->m_Mag * cos(this->m_Ang);
}

//���� m_Y
void Vector::set_y()
{
	this->m_Y = this->m_Mag * sin(this->m_Ang);
}


//��Ա���� �������÷���
void Vector::reset(double n1, double n2, int index)
{
	this->index = index; //ģʽ
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
		this->index = 1; // Ĭ��ģʽһ
	}
}


//��������
Vector::~Vector()
{

}



//��������ģʽΪģʽ1
void Vector::setModeOne()
{
	this->index = 1;
}

						   
//��������ģʽΪģʽ2
void Vector::setModeTwo()
{
	this->index = 2;
}

//����������
Vector Vector::operator+(const Vector & b)const
{
	//����һ���вι���
	return Vector(this->m_X + b.m_X, this->m_Y + b.m_Y);
}

Vector Vector::operator-(const Vector & b)const
{
	//����һ���вι���
	return Vector(this->m_X - b.m_X, this->m_Y - b.m_Y);
}

Vector Vector::operator-()const
{
	//����һ���вι���  ����Ϊ��ֵ
	return Vector( -(this->m_X ),  -(this->m_Y));
}

Vector Vector::operator*(double n)const
{
	return Vector( n * this->m_X, n * this->m_Y);
}

//��Ԫ
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