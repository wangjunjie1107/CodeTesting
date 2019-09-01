#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Club
{
public:

	//设置长
	void set_L(int L)
	{
		m_L = L;
	}
	//设置宽
	void set_W(int W)
	{
		m_W = W;
	}
	//设置高
	void set_H(int H)
	{
		m_H = H;
	}

	//获取长
	int get_L()
	{
		return m_L;
	}
	//获取宽
	int get_W()
	{
		return m_W;
	}
	//获取高
	int get_H()
	{
		return m_H;
	}


	//求面积
	int CubeArea()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}


	//求体积
	int CubeV()
	{
		return m_L * m_H * m_W;
	}

private:
	int m_L; //长
	int m_W; //宽
	int m_H; //高
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

	cout << "成员函数c1的面积为： " << c1.CubeArea() << endl;
	cout << "成员函数c1的体积为： " << c1.CubeV() << endl;

	cout << "-------------------------------"<<endl;

	cout << "全局函数c1的面积为： " << CubeS(c1.get_H(),c1.get_W(),c1.get_L()) << endl;
	cout << "全局函数c1的体积为： " << CubeV(c1.get_H(), c1.get_W(), c1.get_L()) << endl;

}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
