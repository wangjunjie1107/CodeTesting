#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



template<class T>
class MyArray
{
public:

	//有参构造
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];

	}

	//拷贝构造
	MyArray(const MyArray & arr)
	{
		this->m_Size = arr.m_Size;
		this->m_Capacity = arr.m_Capacity;

		//分配内存空间
		this->pAddress = new T[arr.m_Capacity];

		//深拷贝
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}


	// = 赋值运算符重载
	MyArray& operator=(const MyArray & arr)
	{
		//先检查原有堆区是否有数据，有的话就释放
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}

		//获取数组大小和容量
		this->m_Size = arr.m_Size;
		this->m_Capacity = arr.m_Capacity;

		//开辟堆空间
		this->pAddress = new T[this->m_Capacity];

		//深拷贝
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;

	}


	//[]运算符重载
	T& operator[](int pos)
	{
		return this->pAddress[pos];
	}

	//尾插法  const 告知编译器 此引用不会修改
	void push_Back(const T & value)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}

		this->pAddress[this->m_Size] = value;
		this->m_Size++;

	}

	//获得容量
	int getCapacity()
	{
		return this->m_Capacity;
	}


	//获得数组大小
	int getSize()
	{
		return this->m_Size;
	}

	//析构函数
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}

	//属性
private:
	T * pAddress; //指向堆区数组指针

	int m_Capacity; //数组容量

	int m_Size;  //数组大小
};
