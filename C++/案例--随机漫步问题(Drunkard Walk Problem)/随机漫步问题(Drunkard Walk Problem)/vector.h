#ifndef VECTOR_H_
#define VECTOR_H_


#pragma once
#include<iostream>
using namespace std;


//����ģʽ ����  һ������ֱ������ϵ����  һ�������ż�����ϵ����



class Vector
{
public:
	
private:

	//ֱ������
	double m_X;
	double m_Y;

	//������
	double m_Mag;    //����
	double m_Ang;	//����

	//����ģʽ
	int index; //index ������ʾ ModeOne  �� ModeTwo

	void set_mag();
	void set_ang();
	void set_x();
	void set_y();

public:
	Vector(); //Ĭ�Ϲ���
	
	Vector(double n1, double n2, int index = 1); //�вι���
	
	void reset(double n1, double n2, int index = 1); //��Ա���� �������÷���

	~Vector(); //��������

	double x_val()const { return this->m_X; }  //����xֵ
	double y_val()const { return this->m_Y; }  //����yֵ
	double mag_val()const { return this->m_Mag; }  //����m_Magֵ
	double ang_val()const { return this->m_Ang; }  //����m_Angֵ

	void setModeOne(); //��������ģʽΪģʽ1
	void setModeTwo();//��������ģʽΪģʽ2

	//����������
	Vector operator+(const Vector & b)const;
	Vector operator-(const Vector & b)const;
	Vector operator-()const;
	Vector operator*(double n)const;

	//��Ԫ
	friend Vector operator*(double n, const Vector & v);
	friend ostream & operator<<(ostream & out, const Vector & v);
};


#endif