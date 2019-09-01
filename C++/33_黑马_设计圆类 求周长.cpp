#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


const double PI = 3.14;
//设计圆类

//语法： class + 类名{ };
class Circle
{
	//大括号内写这类的属性 和 行为
	//公共权限
public:
	
	//周长
	int m_R;


	//求周长 行为
	double calculateZC()
	{
		return 2 * PI * m_R;
	}
	

	//通过函数 给半径属性赋值
	void setR(int r)
	{
		m_R = r;
	}


	//通过函数 访问圆的半径
	int getR()
	{
		return m_R;
	}
	
};


void test01()
{
	//通过圆类 创建出 圆对象
	Circle c1;//c1为对象

	c1.setR(10);

	cout << "c1的半径是： " << c1.getR() << endl;
	cout << "c1的周长为： " << c1.calculateZC() << endl;

}
int main()
{
	test01();
	
	system("pause");
	return EXIT_SUCCESS;
}
