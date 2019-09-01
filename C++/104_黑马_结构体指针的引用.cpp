#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct Person
{
	int m_Age;
};

//指针引用

void allocateSpace(Person * &p)
{
	p = new Person;
	p->m_Age = 1000;
}

void freeSpace(Person * &p)
{
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}

void test()
{
	Person * p1;
	
	allocateSpace(p1);
	
	
	cout << "p的年龄： " << p1->m_Age << endl;
	
	
	freeSpace(p1);
	if (p1 == NULL)
	{
		cout << "空指针" << endl;
	}

}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;

}
