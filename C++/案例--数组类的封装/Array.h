#pragma once
#include<iostream>
using namespace std;

//数组类
class MyArray
{
private:
	int m_Capacity;	   //数组容量
	int m_Size;		   //数组大小
	int * pAddress;   //维护在底层真实堆区的数组
public:

	MyArray(); //默认构造  初始化容量为100

	MyArray(int capacity); //有参构造  参数为初始化容量

	MyArray(const MyArray & array); //拷贝构造

									//尾插
	void pushBack(int val);

	//根据位置设置数据
	void setDateByPos(int pos, int val);


	//根据位置插入数据
	void insertDateByPos(int pos, int val);

	//根据位置获取数据
	int getDate(int pos);

	//返回数组容量
	int getCapacity();

	//返回数组大小
	int getSize();

	//重载[] 运算符
	int & operator[](int pos);

	//重载 == 运算符
	bool operator==(MyArray & arr);

	//重载 赋值 = 运算符
	void operator=(MyArray & arr);

	//析构函数
	~MyArray();


};