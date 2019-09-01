#include "stack.h"

Stack::Stack() 
{
	this->top = 0;
	this->items[top] = 0;
}

bool Stack::isEmpty()const
{
	return top == 0;
}

bool Stack::isFull()const
{
	return top == MAX;
}

bool Stack::push(const unsigned long & item) 
{
	if (top != MAX)
	{
		this->items[top++] = item;
		return true;
	}
	return false;
}

bool Stack::pop()
{
	if (top != 0)
	{
		top--;
		return true;
	}
	return false;
}

unsigned long & Stack::getTop()
{
	return this->items[top];
}