#include "circle.h"




//���ð뾶
void Circle::setR(int r)
{
	m_R = r;
}


//��ȡ�뾶
int Circle::getR()
{
	return m_R;
}

//����Բ��
void Circle::setCenter(Point center)
{
	m_Center = center;
}


//��ȡԲ��
Point Circle::getCenter()
{
	return m_Center;
}


//�жϵ��Ƿ���Բ��
void Circle::isInCircle(Point p)
{
	int distance = (m_Center.getX() - p.getX()) * (m_Center.getX() - p.getX()) + (m_Center.getY() - p.getY()) * (m_Center.getY() - p.getY());

	int Rvalue = m_R * m_R;

	if (Rvalue == distance)
	{
		cout << "��Ա����:::����Բ��" << endl;
	}
	else if (Rvalue > distance)
	{
		cout << "��Ա����:::����Բ��" << endl;
	}
	else 
	{
		cout << "��Ա����:::����Բ��" << endl;
	}
}
