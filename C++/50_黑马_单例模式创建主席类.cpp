#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;


class ChairMan
{
public:
	//对外提供getInstance 获取主席指针，而且是只读状态
	static ChairMan * getInstance()
	{

		return singleMan;
	}

//1 防止创建多个主席对象，将构造函数私有化
private:
	//构造函数私有化
	ChairMan() 
	{
		//编译时运行 所以在main函数之前运行之前打印
		cout << "主席的创建" << endl;
	}; 

	//拷贝构造函数私有化
	ChairMan(const ChairMan &) {};

	//私有静态成员变量
	// 在类中 声明主席的指针，类外初始化主席对象
	static ChairMan * singleMan;

};

//静态成员初始化  类外初始化主席对象
ChairMan * ChairMan::singleMan = new ChairMan;



void test01()
{
	ChairMan * c1 = ChairMan::getInstance();
	ChairMan * c2 = ChairMan::getInstance();

	if (c1 == c2)
	{
		cout << "c1==c2" << endl;
	}
	else
	{
		cout << "c1!=c2" << endl;
	}
}


int main()
{
	cout << "main函数的调用" << endl;

	test01();


	system("pause");
	return EXIT_SUCCESS;
}

