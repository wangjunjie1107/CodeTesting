#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

#include "circle.h"
#include "point.h"

void isInCircle(Circle c1, Point p);

void test()
{
	//������
	Point p1;
	p1.setX(20);
	p1.setY(10);


	//����Բ
	Circle c1;
	//����Բ�İ뾶
	c1.setR(10);
	//����Բ��  ������һ�����λ�ã��ٽ�λ�ô��뵽Բ������
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);



	cout << "��� x ����Ϊ��"<< p1.getX() << endl;
	cout << "��� y ����Ϊ��"<< p1.getY() << endl;

	cout << "Բ�İ뾶Ϊ��" << c1.getR() << endl;
	cout << "Բ�� x Ϊ��" << c1.getCenter().getX() << endl;
	cout << "Բ�� y Ϊ��" << c1.getCenter().getY() << endl;

	cout << "----------------------------------" << endl;
	c1.isInCircle(p1);
	cout << "----------------------------------" << endl;
	isInCircle(c1, p1);
	cout << "----------------------------------" << endl;

}


//�жϵ��Ƿ���Բ��  ȫ�ֺ���
void isInCircle(Circle c1, Point p)
{
	int distance = (c1.getCenter().getX() - p.getX()) * (c1.getCenter().getX() - p.getX()) + (c1.getCenter().getY() - p.getY()) * (c1.getCenter().getY() - p.getY());

	int Rvalue = c1.getR() * c1.getR();

	if (Rvalue == distance)
	{
		cout << "ȫ�ֺ���:::����Բ��" << endl;
	}
	else if (Rvalue > distance)
	{
		cout << "ȫ�ֺ���:::����Բ��" << endl;
	}
	else
	{
		cout << "ȫ�ֺ���:::����Բ��" << endl;
	}
}


int main()
{
	test();


	system("pause");
	return EXIT_SUCCESS;
}