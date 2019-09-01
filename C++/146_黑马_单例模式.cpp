#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//单例模式-主席类案例
//通过一个类 只能创建一个对象，共享这个对象

class ChairMan
{
public:

	//4、对外提供getInstance 获取主席指针，而且是只读状态
	//获取主席指针
	static ChairMan * getInstance()
	{
		return singleMan;
	}

	void getName()
	{
		cout << "wang" << endl;
	}
private:
	//1 防止创建多个主席对象，将构造函数私有化
	ChairMan()
	{

	}

	//5、将拷贝构造函数私有化
	ChairMan(const ChairMan &)
	{

	}

	//2 在类中 声明主席的指针，类外初始化主席对象  静态变量
	//3将指针私有化
	static ChairMan * singleMan;
};

//静态类型  类内声明  类外初始化
ChairMan * ChairMan::singleMan = new ChairMan;

void test01()
{
	ChairMan * c1 = ChairMan::getInstance();
	ChairMan * c2 = ChairMan::getInstance();



	if (c1 == c2)
	{
		cout << "c1 == c2" << endl;
	}
	else
		cout << "c1 != c2" << endl;

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
