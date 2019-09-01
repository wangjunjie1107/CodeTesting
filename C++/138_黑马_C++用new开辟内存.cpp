#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Person
{
public:
	
	Person()
	{
		cout << "Person 的默认构造函数调用" << endl;
	}
	
	Person(int a)
	{
		cout << "Person 的有参构造函数调用" << endl;
	}

	Person(const Person & p)
	{
		cout << "Person 的拷贝构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person 的析构函数调用" << endl;
	}
};


/*

 C 和 C++ 堆区开辟内存和释放内存的区别：
	
	（1）C用malloc  C++ 用 new
	（2）malloc --- free
	（3）new ----- delete	
	（4）malloc free 本质是库函数
	（5）new delete 本质是运算符
	（6）malloc 返回的数据类型 void *
	（7）new 返回的数据类型是创建的对象的指针类型

*/


void test01()
{
	//new 运算符 也是在堆区开辟内存空间
	Person * p1 = new Person;

	Person * p2 = new Person(10);

	Person * p3 = new Person(*p2);

	//如果想释放new 出来的对象，利用关键字delete 
	delete p1;
	delete p2;
	delete p3;

	//指针指向空
	p1 = NULL;
	p2 = NULL;
	p3 = NULL;
}

// 2、注意事项
// 不要用 void * 接收new出来的对象 原因无法释放
void test02()
{
	void * p1 = new Person;
	delete p1;//无法释放  找不到p1


	Person * p = new Person;
	delete p;
	p = NULL;//delete 之后 指针要 指向空

	if (p == NULL)
	{
		cout << "p被释放了" << endl;
	}
}

//3、利用new在堆区开辟数组
void test03()
{	
	//如果利用new在堆区开辟 自定义类型数据的数组，
	//必须有默认构造函数
	Person * PersonArray = new Person[10];
	
	delete[]PersonArray;

	//如果在栈上开辟数组，可以没有默认构造函数
	Person p[2] = { Person(1),Person(2) };
	
}
int main()
{

	//test01();

	test02();

	//test03();

	system("pause");
	return EXIT_SUCCESS;
}










