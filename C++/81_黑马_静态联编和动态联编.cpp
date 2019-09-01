#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//动物类
class Animal
{
public:
	virtual void speak()//虚函数
	{
		cout << "动物在说话" << endl;
	}
	virtual void eat(int a)//虚函数
	{
		cout << "动物在吃饭" << endl;
	}

};

//猫类
class cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
	void eat(int a)  
	{
		cout << "小猫在吃饭" << endl;
	}
};


//狗类
class dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
	void eat(int a)
	{
		cout << "小狗在吃饭" << endl;
	}
};

void test01()
{
	cat c1;
	c1.eat(10);

	dog d1;
	d1.eat(10);

	Animal a1;
	a1.eat(0);
}
void test02()
{
	//父类指针指向子类对象
	Animal * animal = new cat;
	animal->eat(10);
}

void test03()
{

	Animal * animal = new cat;
	animal->eat(10);

	//*(int *)animal 解引用到了虚函数表中
	// *(int *)*(int *)animal 解引用到了函数入口地址
	((void(*)())(*(int *)*(int *)animal))();

	// *((int*)*(int *)animal +1) 找到吃饭入口地址

	//调用惯例出问题
	//C/C++默认调用惯例  __cdecl
	//C++调用惯例  __stdcall

	//函数调用 指定 stdcall调用惯例
	typedef void(__stdcall *FUNCPOINT)(int);
	(FUNCPOINT(*((int*)*(int *)animal + 1)))(10);

}
int main() 
{	
	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}




