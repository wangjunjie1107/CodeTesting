#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//利用虚析构可以解决 父类指针被释放的时候，只调用父类的析构函数，而不调用子类的析构函数的问题

//纯虚析构需要有声明，也需要有实现
//如果函数体中 有了纯虚析构，那么这个函数也属于抽象类

// 父类如果有了 虚析构 或 纯虚析构，则父类指针在释放的时候，会调用子类的析构函数 
class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}

	virtual void speak() = 0; //纯虚函数


	//利用虚析构可以解决 不调用子类的析构函数的问题
	//virtual ~Animal()
	//{
	//	cout << "Animal析构函数调用" << endl;
	//}


	
	//纯虚析构需要有声明，也需要有实现
	//如果函数体中 有了纯虚析构，那么这个函数也属于抽象类
	virtual ~Animal() = 0;
};

Animal::~Animal()
{
	cout << "Animal纯虚析构函数调用" << endl;

}



class Cat :public Animal
{
public:

	Cat(char * name)
	{
		cout << "Cat构造函数调用" << endl;
		this->m_Name = new char[strlen(name) + 1];
		strcpy(this->m_Name, name);
	}

	//子类重写 父类 中的 纯虚函数
	void speak()
	{
		cout << this->m_Name << "小猫在说话" << endl;
	}

	//父类中有了虚析构 或 纯虚析构  父类指针在释放的时候，子类的析构函数会被调用 
	~Cat()
	{
		if (this->m_Name != NULL)
		{
			cout << "Cat析构函数调用" << endl;
			delete[]this->m_Name;
			this->m_Name = NULL;
		}
	}
	char * m_Name; //姓名
};



void test01()
{
	//父类指针指向子类对象
	Animal * animal_Cat = new Cat("Tom");
	animal_Cat->speak();

	delete animal_Cat;
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
