#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyInter
{
	
	friend ostream& operator<<(ostream & cout, MyInter myInt);
		
public:
	MyInter()
	{
		num = 0;
	}

	//重载递增运算符
	//前置
	MyInter& operator++()
	{
		//先++
		num++;
		//后返回自身
		return *this;
	}

	//后置 
	//如果在形参中添加int占位参数，编译器可以识别出这是后置++
	MyInter operator++(int)
	{
		//先 记录原来值
		MyInter temp = *this;
		//再++
		num++;
		//再将记录的值返回
		return temp;
	}


	//重载减运算符
	//前置
	MyInter& operator--()
	{
		//先--
		num--;
		//后返回自身
		return *this;
	}

	//后置 
	//如果在形参中添加int占位参数，编译器可以识别出这是后置--
	MyInter operator--(int)
	{
		//先 记录原来值
		MyInter temp = *this;
		//再--
		num--;
		//再将记录的值返回
		return temp;
	}
private:
	int num;
};

//全局函数重载<<
ostream& operator<<(ostream & cout, MyInter myInt)
{
	cout << myInt.num;
	return cout;
}


//前置递增
void test01()
{
	MyInter myInt;

	cout << myInt << endl; // 0

	cout << ++(++myInt) << endl; //  2 
	cout << myInt << endl;   // 2
}

//后置递增
void test02()
{
	MyInter myInt;

	cout << myInt << endl; // 0

	cout << myInt++ << endl; // 0

	cout << myInt << endl; // 1
}


//前置递减
void test03()
{
	MyInter myInt;

	cout << myInt << endl; // 0

	cout << --(--myInt) << endl; //  -2
	cout << myInt << endl;   // -2
}

//后置递减
void test04()
{
	MyInter myInt;

	cout << myInt << endl; // 0

	cout << myInt-- << endl; // 0

	cout << myInt << endl; // -1
}

int main()
{
	//test01();

	//test02();


	test03();
	test04();

	system("pause");
	return EXIT_SUCCESS;
}
