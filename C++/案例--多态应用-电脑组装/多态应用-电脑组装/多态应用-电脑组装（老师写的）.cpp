#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
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


//电脑类
class Computer
{
public:

	Computer(CPU * cpu, VideoCard * vc, Memory *mem)
	{
		this->m_cpu = cpu;
		this->m_vc = vc;
		this->m_mem = mem;
	}

	//工作函数
	void work()
	{
		this->m_cpu->calculate();
		this->m_vc->display();
		this->m_mem->storage();
	}

	~Computer()
	{
		if (this->m_cpu != NULL)
		{
			delete this->m_cpu;
			m_cpu = NULL;
		}
		if (this->m_vc != NULL)
		{
			delete this->m_vc;
			m_vc = NULL;
		}
		if (this->m_mem != NULL)
		{
			delete this->m_mem;
			m_mem = NULL;
		}
	}

	CPU * m_cpu;

	VideoCard * m_vc;

	Memory * m_mem;

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

class intelMemory :public Memory
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

class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了" << endl;
	}
};


void test01()
{
	cout << "第一台电脑组装：" << endl;

	CPU * intelcpu = new intelCPU;
	VideoCard * intelvc = new intelVideoCard;
	Memory* intelmem = new intelMemory;

	Computer c1(intelcpu, intelvc, intelmem);
	c1.work();

	cout << "第二台电脑组装：" << endl;

	CPU * lenovecpu = new LenovoCPU;
	VideoCard * lenovevc = new LenovoVideoCard;
	Memory* lenovemem = new LenovoMemory;

	Computer c2(lenovecpu, lenovevc, lenovemem);
	c2.work();

	cout << "第三台电脑组装：" << endl;

	lenovecpu = new LenovoCPU;
	lenovevc = new intelVideoCard;
	lenovemem = new intelMemory;

	Computer c3(lenovecpu, lenovevc, lenovemem);
	c3.work();
}


int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}