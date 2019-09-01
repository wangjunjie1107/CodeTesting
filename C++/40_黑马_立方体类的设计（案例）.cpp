#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//设计立方体类（Cube)
//分别用全局函数和成员函数判断两个立方体是否相等

class Cube
{
public:
	//设置长
	void setL(int l)
	{
		m_L = l;
	}
	//获取长
	int getL()
	{
		return m_L;
	}

	//设置宽
	void setW(int w)
	{
		m_W = w;
	}
	//获取长
	int getW()
	{
		return m_W;
	}

	//设置高
	void setH(int h)
	{
		m_H = h;
	}
	//获取高
	int getH()
	{
		return m_H;
	}

	//获取面积
	int getS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_H * m_W;
	}

	//获取体积
	int getV()
	{
		return m_H * m_L * m_W;
	}

	//通过成员函数 判断两个立方体是否相等
	bool isSameByMem(Cube & c) //传入所判断的立方体的引用
	{
		return m_L == c.getL() && m_H == c.getH() && m_W == c.getW();
	}

private:
	//长
	int m_L;
	//宽
	int m_W;
	//高
	int m_H;
};

//通过全局函数 判断两个立方体是否相等
//传入参数为立方体的引用
bool isSame(Cube &c1, Cube &c2)
{
	c1.setH(10);  //引用传递直接更改原本的值
	c2.setH(10);
	return c1.getH() == c2.getH() && c1.getL() == c2.getL() && c1.getW() == c2.getW();
}

//测试
void test()
{
	Cube c1;//实例化 立方体对象

	//输入立方体的长宽高
	int length, width, high;
	cout << "请输入立方体的长、宽、高： ";
	cin >> length >> width >> high;
	c1.setH(high);
	c1.setW(width);
	c1.setL(length);

	//获取面积和体积
	cout << "c1的面积为： " << c1.getS() << endl;
	cout << "c1的体积为： " << c1.getV() << endl;



	Cube c2;//准备第二个立方体
	//输入立方体的长宽高
	cout << "请输入第二个立方体的长、宽、高： ";
	cin >> length >> width >> high;
	c2.setH(high);
	c2.setW(width);
	c2.setL(length);

	//获取面积和体积
	cout << "c2的面积为： " << c2.getS() << endl;
	cout << "c2的体积为： " << c2.getV() << endl;



	cout << "--------------------------------------" << endl;
	//通过全局函数判断 两个立方体是否相同
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "全局函数判断：c1和c2是相等的。" << endl;
	}
	else
	{
		cout << "全局函数判断：c1和c2是不相等的。" << endl;
	}

	cout << "::::" << c1.getH() << c2.getH() << endl;

	ret = c1.isSameByMem(c2);
	if (ret)
	{
		cout << "成员函数判断：c1和c2是相等的。" << endl;
	}
	else
	{
		cout << "成员函数判断：c1和c2是不相等的。" << endl;
	}



}
int main() 
{
	test();



	system("pause");
	return EXIT_SUCCESS;
}
