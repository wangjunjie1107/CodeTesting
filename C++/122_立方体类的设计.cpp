#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Club
{
public:

	//���ó�
	void set_L(int L)
	{
		m_L = L;
	}
	//���ÿ�
	void set_W(int W)
	{
		m_W = W;
	}
	//���ø�
	void set_H(int H)
	{
		m_H = H;
	}

	//��ȡ��
	int get_L()
	{
		return m_L;
	}
	//��ȡ��
	int get_W()
	{
		return m_W;
	}
	//��ȡ��
	int get_H()
	{
		return m_H;
	}


	//�����
	int CubeArea()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}


	//�����
	int CubeV()
	{
		return m_L * m_H * m_W;
	}

private:
	int m_L; //��
	int m_W; //��
	int m_H; //��
};


int CubeS(int a, int b, int c)
{
	return 2 * a * b + 2 * b * c + 2 * c * a;
}

int CubeV(int a, int b, int c)
{
	return a * b * c;
}


void test()
{
	Club c1;
	c1.set_H(1);
	c1.set_L(1);
	c1.set_W(1);

	cout << "��Ա����c1�����Ϊ�� " << c1.CubeArea() << endl;
	cout << "��Ա����c1�����Ϊ�� " << c1.CubeV() << endl;

	cout << "-------------------------------"<<endl;

	cout << "ȫ�ֺ���c1�����Ϊ�� " << CubeS(c1.get_H(),c1.get_W(),c1.get_L()) << endl;
	cout << "ȫ�ֺ���c1�����Ϊ�� " << CubeV(c1.get_H(), c1.get_W(), c1.get_L()) << endl;

}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
