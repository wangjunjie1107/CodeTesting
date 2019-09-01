#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//动物类
class Animal
{
public:
	virtual void speak() //虚函数
	{
		cout << "动物在说话" << endl;
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
};

//狗类
class dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//Animal & animal = c1;
//C++ 中父类的指针或引用 可以指向子类的对象 不会报错
void doSpeak(Animal & animal)
{
	//属于地址早绑定，因此speak函数地址早已确定，调用动物在说话
	//但是，我们如果创建的是猫，本质想让猫说话，因此需要地址晚绑定
	//地址晚绑定 virtual
	animal.speak();
}

void test01()
{
	cat c1;
	doSpeak(c1);

	dog d1;
	doSpeak(d1);

	Animal a1;
	doSpeak(a1);
}

int main() 
{	

	test01();

	system("pause");
	return EXIT_SUCCESS;
}




