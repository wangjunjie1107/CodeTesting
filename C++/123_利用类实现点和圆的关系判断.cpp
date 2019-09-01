#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//����
class Point
{
public:

	//����X����
	void set_X(int x)
	{
		this->m_X = x;
	}

	//����Y����
	void set_Y(int y)
	{
		this->m_Y = y;
	}

	//��ȡX����
	int get_X()
	{
		return this->m_X;
	}

	//��ȡY����
	int get_Y()
	{
		return this->m_Y;
	}

private:
	int m_X;//X����
	int m_Y;//Y����
};

//Բ��
class Circle
{

public:
	//���ð뾶
	void set_R(int r)
	{
		this->m_R = r;
	}

	//��ȡ�뾶
	int get_R()
	{
		return this->m_R;
	}

	//����Բ��
	void set_Center(Point p)
	{
		//this->m_Center = p;
		this->m_Center.set_X(p.get_X());
		this->m_Center.set_Y(p.get_Y());
	}

	//��ȡԲ��
	Point get_Center()
	{
		return this->m_Center;
	}

	//��Ա�����жϵ��Ƿ���Բ��
	void isInTheCircle(Point p)
	{
		//���Բ��֮��ľ����ƽ��
		int pDistance = (this->m_Center.get_X() - p.get_X()) * (this->m_Center.get_X() - p.get_X())
			+ (this->m_Center.get_Y() - p.get_Y()) * (this->m_Center.get_Y() - p.get_Y());

		//�뾶��ƽ��
		int rDistance = this->get_R() * this->get_R();

		if (pDistance == rDistance)
		{
			cout << "��Ա�����жϣ�����Բ��" << endl;
		}
		else if(pDistance > rDistance)
		{
			cout << "��Ա�����жϣ�����Բ��" << endl;
		}
		else
		{
			cout << "��Ա�����жϣ�����Բ��" << endl;
		}
	}
private:
	int m_R;//�뾶
	
	Point m_Center;//Բ��
};

//�жϵ��Բ�Ĺ�ϵ ȫ�ֺ���
void isInTheCircle(Circle c, Point p)
{
	//���Բ��֮��ľ����ƽ��
	int pDistance = (c.get_Center().get_X() - p.get_X()) * (c.get_Center().get_X() - p.get_X())
		+ (c.get_Center().get_Y() - p.get_Y()) * (c.get_Center().get_Y() - p.get_Y());

	//�뾶��ƽ��
	int rDistance = c.get_R() * c.get_R();

	if (pDistance == rDistance)
	{
		cout << "ȫ�ֺ����жϣ�����Բ��" << endl;
	}
	else if (pDistance > rDistance)
	{
		cout << "ȫ�ֺ����жϣ�����Բ��" << endl;
	}
	else
	{
		cout << "ȫ�ֺ����жϣ�����Բ��" << endl;
	}
}

void test()
{
	//���õ�����
	Point p;
	p.set_X(0);
	p.set_Y(0);

	//����Բ�ĺͰ뾶
	Point center;//Բ��
	center.set_X(0);
	center.set_Y(0);
	Circle c;
	c.set_R(10);
	c.set_Center(center);

	//��Ա�����жϵ��Ƿ���Բ��
	c.isInTheCircle(p);

	//ȫ�ֺ����жϵ��Ƿ���Բ��
	isInTheCircle(c, p);

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
