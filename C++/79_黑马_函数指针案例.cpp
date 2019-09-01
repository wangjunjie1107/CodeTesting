#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//声明 简化代码 用p_fun代表整个声明
typedef const double * (*p_fun)(const double ar[], int n);

const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);


int main() 
{	
	double av[3] = { 1231.2,22220.2,1213.355 };

	//声明函数指针指向函数
	p_fun p1 = f1;
	
	//const double *(*p2)(const double *, int) = f2;
	auto p2 = f2;//自动类型

	cout << "Using pointers to functions: " << endl;
	cout << "Address Value"<<endl;
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *(p2)(av, 3) << endl;


	//函数指针数组
	const double *(*pa[3])(const double *, int) = { f1,f2,f3 };
	auto pb = pa;//自动类型
	cout << "\nUsing an array of pointers to functions: " << endl;
	cout << "Address   Value" << endl;
	for (int i = 0;i < 3;i++)
	{
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	}


	cout << "\nUsing a pointer to a pointer to a function:" << endl;
	cout << "Address   Value" << endl;
	for (int i = 0;i < 3;i++)
	{
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;

	}


	cout << "\nUsing pointers to an array of pointers:" << endl;
	cout << "Address   Value" << endl;
	auto pc = &pa;

	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;

	p_fun(*pd)[3] = &pa;//声明简化代码 
	//const double *(*(*pd)[3])(const double *, int) = &pa;

	const double * pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;

	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;

	system("pause");
	return EXIT_SUCCESS;
}

const double * f1(const double * ar, int n)
{
	return ar;
}
const double * f2(const double ar[], int n)
{
	return ar + 1;
}
const double * f3(const double ar[], int n)
{
	return ar + 2;
}




