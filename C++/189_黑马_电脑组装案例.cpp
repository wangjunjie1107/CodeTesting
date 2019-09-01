#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//抽象类
class CPU
{
public:
	virtual void calculate() = 0;
};

class VideoCard
{
public:
	virtual void display() = 0;
};

class Memory
{
public:
	virtual void storage() = 0;
};


//具体零件
//intel厂商
class intelCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "intel的CPU开始计算了" << endl;
	}
};

class intelVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "intel的显卡开始显示了" << endl;
	}
};

class intelMemory: public Memory
{
public:
	virtual void storage()
	{
		cout << "intel的内存条开始存储了" << endl;
	}
};


//Lenovo厂商
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算了" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;
	}
};

class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了" << endl;
	}
};


//电脑类
class Computer
{
public:

	//有参构造
	Computer(CPU * cpu, VideoCard * vc, Memory * mem)
	{
		this->m_cpu = cpu;
		this->m_mem = mem;
		this->m_vc = vc;
	}

	//工作函数
	void work()
	{
		this->m_cpu->calculate();
		this->m_mem->storage();
		this->m_vc->display();
	}

	//析构函数
	~Computer()
	{
		if (this->m_cpu != NULL)
		{
			delete this->m_cpu;
			this->m_cpu = NULL;
		}

		if (this->m_mem != NULL)
		{
			delete this->m_mem;
			this->m_mem = NULL;
		}

		if (this->m_vc != NULL)
		{
			delete this->m_vc;
			this->m_vc = NULL;
		}
	}

	//下面三个类都是抽象类 不能实例化对象 
	//只能使用类指针  指向子类对象 
	CPU * m_cpu;

	VideoCard * m_vc;

	Memory * m_mem;
};

void test01()
{
	cout << "第一台电脑组装：" << endl;
	
	//父类指针指向子类对象   多态使用
	CPU * intelcpu = new intelCPU;
	VideoCard * intelvc = new intelVideoCard;
	Memory * intelmem = new intelMemory;

	Computer c1(intelcpu, intelvc, intelmem);
	c1.work();



	cout << "第二台电脑组装：" << endl;

	//父类指针指向子类对象   多态使用
	CPU * lenovecpu = new LenovoCPU;
	VideoCard * lenovevc = new LenovoVideoCard;
	Memory* lenovemem = new LenovoMemory;

	Computer c2(lenovecpu, lenovevc, lenovemem);
	c2.work();




	cout << "第三台电脑组装：" << endl;

	//父类指针指向子类对象   多态使用
	lenovecpu = new LenovoCPU;
	lenovevc = new intelVideoCard;
	lenovemem = new intelMemory;

	Computer c3(lenovecpu, lenovevc, lenovemem);
	c3.work();
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
