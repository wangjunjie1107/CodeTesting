#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1基本语法
//语法  数据类型  & 别名 = 原名
void test01()
{
	int a = 10;

	int &b = a;

	b = 100;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}


//2、注意事项
void test02()
{
	//引用必须初始化
	int a = 10;
	//int &b; error 必须给引初始化
	int &b = a;

	//引用一旦初始化后，就不可以引向别的位置
	int c = 20;
	b = c; //赋值 并不是修改引用指向
}


//3 建立对数组引用
void test03()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	//1、直接建立引用
	//pArr就是arr的别名
	int(&pArr)[5] = arr;

	//for (int i = 0; i < 5;i++)
	//{
	//	cout << pArr[i] << endl;
	//}


	//2、先定义数组类型，再通过类型定义数组的引用
	typedef int(ARRAY_TYPE)[5];
	//  数据类型  & 别名 = 原名
	ARRAY_TYPE & pArr2 = arr;

	//for (int i = 0; i < 5; i++)
	//{
	//	cout << pArr2[i] << endl;
	//}

	//3、 先定义数组引用类型，再通过类型定义引用
	typedef int(&ARRAY_TYPE_REF)[5];

	ARRAY_TYPE_REF pArr3 = arr;


	for (int i = 0; i < 5; i++)
	{
		cout << pArr3[i] << endl;
	}

}

int main(){

	//test01();
	test03();


	system("pause");
	return EXIT_SUCCESS;
}
