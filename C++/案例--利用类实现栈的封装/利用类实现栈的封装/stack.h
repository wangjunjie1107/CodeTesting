#pragma once
#include<iostream>
#include<string>
using namespace std;


class Stack
{
private:
	enum{ MAX = 10 };
	int top;
	unsigned long items[MAX];

public:
	Stack();
	bool isEmpty()const;
	bool isFull()const;
	bool push(const unsigned long  & item);
	bool pop();
	unsigned long  & getTop();
};