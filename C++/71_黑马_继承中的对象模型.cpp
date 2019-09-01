#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C; //m_C被子类继承了下去，但是由编译器进行了保护，因此访问不到
};

//C:\Program Files (x86)\Microsoft Visual Studio 12.0\Common7\Tools\Shortcuts
//E:跳转盘符 
//cd 到文件目录下  cd E:\0315\sendToStudent\Day16_C++\Code\01 关系运算符重载\06 继承中的对象模型

//cl /d1 reportSingleClassLayoutSon 文件名  CL /d1  C后面是字母l   d后面是数字1 

class Son:public Base
{
public:
	int m_D;
};

void test01()
{
	cout << "sizeof Son = " << sizeof(Son) << endl;//16
}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
