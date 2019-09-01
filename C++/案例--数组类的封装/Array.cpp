#include "Array.h"


//默认构造  初始化容量为100
MyArray::MyArray()
{

	//容量和大小赋值
	this->m_Capacity = 100;
	this->m_Size = 0;

	//开辟堆区空间
	this->pAddress = new int[100];
}


//有参构造  参数为初始化容量
MyArray::MyArray(int capacity)
{

	//容量和大小赋值
	this->m_Size = 0;
	this->m_Capacity = capacity;

	//开辟堆区空间
	this->pAddress = new int[capacity];

}

//拷贝构造  深拷贝
MyArray::MyArray(const MyArray & array)
{

	//容量和大小赋值
	this->m_Capacity = array.m_Capacity;
	this->m_Size = array.m_Size;

	//memcpy(this->pAddress, array.pAddress, array.m_Size * sizeof(int));

	//开辟堆区空间  深拷贝
	this->pAddress = new int[this->m_Capacity];

	//将数据拷贝到新空间下
	for (int i = 0;i < this->m_Size;i++)
	{
		this->pAddress[i] = array.pAddress[i];
	}
}

//尾插
void MyArray::pushBack(int val)
{
	if (this->m_Size == this->m_Capacity)
	{
		cout << "栈区已满" << endl;
		return;
	}

	//将元素放入到最后一个位置  数组大小+1
	this->pAddress[this->m_Size++] = val;

}

//根据位置设置数据
void MyArray::setDateByPos(int pos, int val)
{
	if (pos < 0 || pos > this->m_Capacity)
	{
		cout << "设置数据的位置有误！" << endl;
		return;
	}
	if (this->pAddress[pos] == NULL)
	{
		//插入的位置原本为空  数组大小+1
		this->m_Size++;
	}
	this->pAddress[pos] = val;
}


//根据位置插入数据
void MyArray::insertDateByPos(int pos, int val)
{
	if (pos < 0 || pos > this->m_Capacity)
	{
		cout << "插入位置有误！" << endl;
		return;
	}

	if (this->m_Size == this->m_Capacity)
	{
		cout << "栈区已满" << endl;
		return;
	}

	//将数组元素后移
	for (int i = this->m_Size - 1; i >= pos; i--)
	{
		this->pAddress[i + 1] = this->pAddress[i];
	}

	//在 pos 位置上插入数据
	this->pAddress[pos] = val;

	//数组大小+1
	this->m_Size++;
}


//根据位置获取数据
int  MyArray::getDate(int pos)
{
	if (pos < 0 || pos > this->m_Capacity)
	{
		cout << "元素位置有误！返回 -1" << endl;
		return -1;
	}

	return this->pAddress[pos];
}

//返回数组容量
int  MyArray::getCapacity()
{
	return this->m_Capacity;
}

//返回数组大小
int  MyArray::getSize()
{
	return this->m_Size;
}

//重载[] 运算符
int &  MyArray::operator[](int pos)
{
	if (pos < 0 || pos > this->m_Size)
	{

	}
	return this->pAddress[pos];
}

//重载 == 运算符
bool  MyArray::operator==(MyArray & arr)
{
	if (arr.pAddress == NULL)
	{
		return false;
	}

	//比较容量和大小
	if (this->m_Capacity != arr.m_Capacity || this->m_Size != arr.m_Size)
	{
		return false;
	}

	//比较数组中的元素
	for (int i = 0; i < this->m_Size; i++)
	{
		if (this->pAddress[i] != arr.pAddress[i])
			return false;
	}

	return true;

}

// 重载 赋值 = 运算符 深拷贝  
// 浅拷贝就是直接指针赋值 容易出现堆区数据释放错误
void  MyArray::operator=(MyArray & arr)
{
	//若传入数据为空 则直接返回
	if (arr.pAddress == NULL)
	{
		cout << "传入数据为空" << endl;
		return;
	}

	//若原本数组不为空 则先释放原来的数组
	if (this->pAddress != NULL)
	{
		delete[]this->pAddress;
		this->pAddress = NULL;
	}

	//设置数组大小和容量
	this->m_Capacity = arr.m_Capacity;
	this->m_Size = arr.m_Size;


	//开辟堆区空间 然后复制数据
	this->pAddress = new int[arr.m_Capacity];
	for (int i = 0;i < this->m_Size;i++)
	{
		this->pAddress[i] = arr.pAddress[i];
	}
}

//析构函数
MyArray::~MyArray()
{
	if (this->pAddress != NULL)
	{
		delete[]this->pAddress;
		this->pAddress = NULL;
	}
}
