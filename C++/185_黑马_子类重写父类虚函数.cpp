#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//动物类
class Animal
{
public:
	virtual void speak()  //虚函数
	{
		cout << "动物在说话" << endl;
	}

	virtual void eat(int a)  //虚函数
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

	//子类 重写 父类中的虚函数
	void eat(int a)  //虚函数
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

//C++中父类的指针或者引用 可以指向子类的对象 不会报错
// Animal & animal = c1;  父类的引用指向子类对象
void doSpeak(Animal & animal)
{
	//属于地址早绑定，因此speak函数地址早已确定，调用动物在说话
	//但是，我们如果创建的是猫，本质想让猫说话，因此需要地址晚绑定
	animal.speak();
}

void test01()
{
	cat c1;
	doSpeak(c1);

	dog d1;
	doSpeak(d1);
}

void test02()
{
	//虚函数指针
	cout << "sizeof  Animal = " << sizeof(Animal) << endl;
}

void test03()
{
	Animal * animal = new dog;
	animal->speak();
	animal->eat(10); //如果子类 未 重写父类中的虚函数 ，则父类指针调用时会调用父类中的函数


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

	test01();
	test02();
	
	test03();
	system("pause");
	return EXIT_SUCCESS;
}




















