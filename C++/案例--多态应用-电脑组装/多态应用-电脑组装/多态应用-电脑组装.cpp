#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string> 
using namespace std;




//抽象CPU
class CPU
{
public:
	virtual void calculate() = 0; //纯虚函数
};

//抽象显卡
class VideoCard
{
public:
	virtual void display() = 0;//纯虚函数
};

//抽象内存条
class Memory
{
public:
	virtual void storage() = 0;//纯虚函数
};


//配件生产商家

//CPU生产商
class Cpu01 :public CPU
{
public:
	//重写父类虚构函数
	void calculate()
	{
		cout << "     CPU已组装，来自Cpu01" << endl;
	}
};

class Cpu02 :public CPU
{
public:
	//重写父类虚构函数
	void calculate()
	{
		cout << "     CPU已组装，来自Cpu02" << endl;
	}
};

//显卡生产商
class Card01 :public  VideoCard
{
public:
	//重写父类虚构函数
	void display()
	{
		cout << "     显卡已组装，来自Card01" << endl;
	}
};

class Card02 :public  VideoCard
{
public:
	//重写父类虚构函数
	void display()
	{
		cout << "     显卡已组装，来自Card02" << endl;
	}
};



//内存生产商
class Memory01 :public Memory
{
public:
	//重写父类虚构函数
	void storage()
	{
		cout << "     内存已组装，来自Memory01" << endl;
	}
};

class Memory02 :public Memory
{
public:
	//重写父类虚构函数
	void storage()
	{
		cout << "     内存已组装，来自Memory02" << endl;
	}
};




//组装
class Computer
{
public:

	//默认构造
	Computer() {};

	//有参构造
	Computer(CPU * cpu, VideoCard * videocard, Memory * memory)
	{
		this->m_Cpu = cpu;
		this->m_Card = videocard;
		this->m_Memory = memory;
	}

	//传入三个零件
	CPU * m_Cpu;
	VideoCard * m_Card;
	Memory * m_Memory;


	//组装工作
	void doWork()
	{
		cout << "----------------------------------" << endl;
		cout << "          电脑组装完成！          " << endl;
		cout << "配件商：" << endl;


		this->m_Cpu->calculate();
		this->m_Card->display();
		this->m_Memory->storage();


		cout << "----------------------------------" << endl;

	}

	//析构函数
	~Computer()
	{
		if (this->m_Cpu != NULL)
		{
			delete this->m_Cpu;
			this->m_Cpu = NULL;
		}
		if (this->m_Card != NULL)
		{
			delete this->m_Card;
			this->m_Card = NULL;
		}
		if (this->m_Memory != NULL)
		{
			delete this->m_Memory;
			this->m_Memory = NULL;
		}

		cout << "堆区内存已经释放！" << endl;
	}

};


void test01()
{
	//声明 添加对象 组装  默认构造
	Computer c1;
	c1.m_Cpu = new Cpu02;
	c1.m_Card = new Card01;
	c1.m_Memory = new Memory02;
	c1.doWork();

	//声明 添加对象 组装  有参构造
	CPU * cpu02 = new Cpu01;
	VideoCard * card02 = new Card01;
	Memory * memory02 = new Memory02;
	Computer c2(cpu02, card02, memory02);
	c2.doWork();


	//堆区释放在析构函数中执行

}

int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
