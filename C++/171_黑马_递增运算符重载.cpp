#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class MyAdd
{
	friend ostream & operator<<(ostream & cout, const MyAdd & m);
	
public:
	MyAdd(int a)
	{
		this->m_Num = a;
	}

	//重载 后置 ++
	//如果在形参中添加int占位参数，编译器可以识别出这是后置++
	MyAdd  operator++(int)
	{
		//先 记录原来的值
		MyAdd temp = *this;

		//再++
		this->m_Num++;

		//再将记录的值返回
		return temp;
	}

	//重载 后置 --
	MyAdd  operator--(int)
	{
		MyAdd temp = *this;
		this->m_Num--;
		return temp;
	}


	//重载 前置++
	MyAdd & operator++()
	{
		// 先 ++
		this->m_Num++;
		
		//后返回自身
		return *this;
	}

	//重载 前置--
	MyAdd & operator--()
	{
		this->m_Num--;
		return *this;
	}

private:
	int m_Num;
};

//为了可以产生链式编程的效果 重载<<运算符
ostream & operator<<(ostream & cout, const MyAdd & m)
{
	cout << m.m_Num;
	return cout;
}

void test()
{
	MyAdd a(10);

	cout << "a++ " << a++ << "  " << a << endl;
	cout << "a-- " << a-- << "  " << a << endl;
	cout << "++a " << ++a << "  " << a << endl;
	cout << "--a " << a-- << "  " << a << endl;

}

// ++i  效率 高于 i++  因为 后置++ 或 后置--  需要创建一个临时变量
int main() 
{

	test();




	system("pause");
	return EXIT_SUCCESS;
}
