#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{

	friend ostream& operator<<(ostream & cout, Person p);
		
public:
	Person()
	{
		m_A = 100;
	}

private:
	int m_A;
};

ostream& operator<<(ostream & cout,Person p)
{
	cout << "m_A = " << p.m_A;
	return cout;
}

void test01()
{
	Person p;
	cout << p << endl;
}


int main() 
{
	test01();
	

	system("pause");
	return EXIT_SUCCESS;
}
