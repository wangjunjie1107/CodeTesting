#pragma once
#include<iostream>
using namespace std;

//������
class MyArray
{
private:
	int m_Capacity;	   //��������
	int m_Size;		   //�����С
	int * pAddress;   //ά���ڵײ���ʵ����������
public:

	MyArray(); //Ĭ�Ϲ���  ��ʼ������Ϊ100

	MyArray(int capacity); //�вι���  ����Ϊ��ʼ������

	MyArray(const MyArray & array); //��������

									//β��
	void pushBack(int val);

	//����λ����������
	void setDateByPos(int pos, int val);


	//����λ�ò�������
	void insertDateByPos(int pos, int val);

	//����λ�û�ȡ����
	int getDate(int pos);

	//������������
	int getCapacity();

	//���������С
	int getSize();

	//����[] �����
	int & operator[](int pos);

	//���� == �����
	bool operator==(MyArray & arr);

	//���� ��ֵ = �����
	void operator=(MyArray & arr);

	//��������
	~MyArray();


};