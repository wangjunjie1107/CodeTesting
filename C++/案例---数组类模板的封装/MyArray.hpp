#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
	//����
private:
	T * pAddress;		//ָ���������ָ��
	int m_Capacity;		//��������
	int m_Size;			//�����С
public:

	//Ĭ�Ϲ���
	MyArray()
	{
		this->pAddress = NULL;
		this->m_Capacity = 0;
		this->m_Size = 0;
	}


	//�вι���  ������Ҫ��������Ĵ�С
	MyArray(int capacity)
	{
		this->pAddress = new T[capacity];

		this->m_Capacity = capacity;
		this->m_Size = 0;
	}


	//��������
	MyArray(const MyArray & arr)
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		//�������������͵����� ��������forѭ�����п���
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0;i < arr.m_Size;i++)
		{
			//�ȿ��ٶ����ռ䣬Ȼ�󿽱�����   ���
			this->pAddress[i] = arr.pAddress[i];
		}
	}


	//operator=    
	MyArray & operator=(const MyArray & p)
	{
		//���ж�ԭ�ж����Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}

		this->m_Capacity = p.m_Capacity;
		this->m_Size = p.m_Size;

		//�������������͵����� ��������forѭ�����п���
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

	//β��
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
			cout << "�ڴ��������޷����룡" << endl;
			return false;
		}
	}

	//��ȡ����
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//��ȡ��С
	int getSize()
	{
		return this->m_Size;
	}

	//����
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			delete[]this->pAddress;
			this->pAddress = NULL;
		}
	}
};