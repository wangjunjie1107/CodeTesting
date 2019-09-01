#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>


//手机类
class Phone
{
public:
	Phone()
	{
		cout << "Phone的默认构造函数调用" << endl;
	}

	Phone(string name)
	{
		cout << "Phone的有参构造函数调用" << endl;
		this->m_PhoneName = name;
	}

	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}

	string m_PhoneName;
};


//游戏类
class Game
{
public:
	Game()
	{
		cout << "Game的默认构造函数调用" << endl;
	}

	Game(string gName)
	{
		cout << "Game的有参构造函数调用" << endl;
		m_GameName = gName;
	}

	~Game()
	{
		cout << "Game的析构函数调用" << endl;
	}

	string m_GameName;
};

//人类
class Person
{
public:
	Person()
	{
		cout << "Person的默认构造函数调用" << endl;
	}

	//初始化列表实现属性初始化
	Person(string name, string pName, string gName) :m_PersonName(name), m_PersonPhone(pName), m_PersonGame(gName)
	{
		cout << "Person的有参构造函数调用" << endl;
	}

	void playGame()
	{
		cout << this->m_PersonName << "拿着" << this->m_PersonPhone.m_PhoneName
			<< "打" << this->m_PersonGame.m_GameName << endl;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;

	}


	//构造函数顺序： Phone Game Person 
	//若颠倒下面的Phone和Game类的定义的位置，则构造函数调用时机也相反
	//析构和构造顺序相反  栈，先进后出
	string m_PersonName;
	Game m_PersonGame;
	Phone m_PersonPhone;

	
};

void test01()
{
	//当其他类对象 作为本类中的成员，构造的顺序是：
	//先调用其他类对象的构造，再调用本类构造，析构顺序与构造相反
	
	
	Person p1("Tom", "苹果", "吃鸡");
	p1.playGame();
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
