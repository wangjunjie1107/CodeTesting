#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct Person
{
	int m_Age;
};

void allocateSpace(Person ** person)
{
	Person * p = (Person *)malloc(sizeof(Person));
	p->m_Age = 100;
	*person = p;
}

void test01()
{
	Person * p = NULL;
	allocateSpace(&p);

	cout << "p的年龄： " << p->m_Age << endl;
}


//指针引用
void allocateSpace2(Person * &p)
{
	p = (Person *)malloc(sizeof(Person));
	p->m_Age = 1000;
}

void freeSpace(Person * &p)
{
	free(p);
	p = NULL;
}

void test02()
{
	Person * p = NULL;
	allocateSpace2(p);

	cout << "p的年龄： " << p->m_Age << endl;


	freeSpace(p);

	if (p == NULL)
	{
		cout << "空指针" << endl;
	}

}




int main(){
	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
