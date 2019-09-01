#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
	//属性
private:
	T * pAddress;		//指向堆区数组指针
	int m_Capacity;		//数组容量
	int m_Size;			//数组大小
public:

	//默认构造
	MyArray()
	{
		this->pAddress = NULL;
		this->m_Capacity = 0;
		this->m_Size = 0;
	}


	//有参构造  传入需要开辟数组的大小
	MyArray(int capacity)
	{
		this->pAddress = new T[capacity];

		this->m_Capacity = capacity;
		this->m_Size = 0;
	}


	//拷贝构造
	MyArray(const MyArray & arr)
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		//不论是哪种类型的数组 都可以用for循环进行拷贝
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0;i < arr.m_Size;i++)
		{
			//先开辟堆区空间，然后拷贝数据   深拷贝
			this->pAddress[i] = arr.pAddress[i];
		}
	}


	//operator=    
	MyArray & operator=(const MyArray & p)
	{
		//先判断原有堆区是否有数据，如果有先释放
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}

		this->m_Capacity = p.m_Capacity;
		this->m_Size = p.m_Size;

		//不论是哪种类型的数组 都可以用for循环进行拷贝
		this->pAddress = new T[p.m_Capacity];
		for (int i = 0;i < p.m_Size;i++)
		{
			this->pAddress[i] = p.pAddress[i];
		}

		return *this;
	}

	//operator[]
	T & operator[](int pos)
	{
		return this->pAddress[pos];
	}

	//尾插
	bool pushback(const T & value)
	{
		if (this->m_Size < this->m_Capacity)
		{
			this->pAddress[m_Size] = value;
			this->m_Size++;
			return true;
		}
		else
		{
			cout << "内存已满，无法插入！" << endl;
			return false;
		}
	}

	//获取容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//获取大小
	int getSize()
	{
		return this->m_Size;
	}

	//析构
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}
};