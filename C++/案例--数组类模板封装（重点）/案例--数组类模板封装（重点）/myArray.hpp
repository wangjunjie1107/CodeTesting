#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



template<class T>
class MyArray
{
public:

	//�вι���
	MyArray(int capacity)
	{
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];

	}

	//��������
	MyArray(const MyArray & arr)
	{
		this->m_Size = arr.m_Size;
		this->m_Capacity = arr.m_Capacity;

		//�����ڴ�ռ�
		this->pAddress = new T[arr.m_Capacity];

		//���
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}


	// = ��ֵ���������
	MyArray& operator=(const MyArray & arr)
	{
		//�ȼ��ԭ�ж����Ƿ������ݣ��еĻ����ͷ�
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}

		//��ȡ�����С������
		this->m_Size = arr.m_Size;
		this->m_Capacity = arr.m_Capacity;

		//���ٶѿռ�
		this->pAddress = new T[this->m_Capacity];

		//���
		for (int i = 0;i < this->m_Size;i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;

	}


	//[]���������
	T& operator[](int pos)
	{
		return this->pAddress[pos];
	}

	//β�巨  const ��֪������ �����ò����޸�
	void push_Back(const T & value)
	{
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}

		this->pAddress[this->m_Size] = value;
		this->m_Size++;

	}

	//�������
	int getCapacity()
	{
		return this->m_Capacity;
	}


	//��������С
	int getSize()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}

	//����
private:
	T * pAddress; //ָ���������ָ��

	int m_Capacity; //��������

	int m_Size;  //�����С
};
