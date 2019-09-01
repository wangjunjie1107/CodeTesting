#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//动态数组结构体
struct dynamicArray
{
	//真实在堆区开辟数组的指针
	void ** pAddr;
	//数组容量
	int m_Capacity;
	//数组大小
	int m_size;
};

//初始化数组 
//参数：初始数组容量 
//返回值：数组指针
struct dynamicArray * init_dynamicArray(int capacity);


//插入数组
void insert_dynamicArray(struct dynamicArray * arr, void * data, int pos);


//遍历动态数组  回调函数 void(*myPrint)(void *)
void foreach_dynamicArray(struct dynamicArray * arr, void(*myPrint)(void *));


//删除数组
//按照位置删除数据
void removeByPos_dynamicArray(struct dynamicArray * arr, int pos);


//按值方式删除数据  int(*myCompare)(void *,void *) 回调函数
void removeByValue_dynamicArray(struct dynamicArray * arr, void * data, int(*myCompare)(void *, void *));


//销毁数组
void destroy_dynamicArray(struct dynamicArray * arr);