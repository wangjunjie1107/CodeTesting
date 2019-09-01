#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;

char * getname(void); //函数声明

int main()
{
	char * name = NULL;

	//接收字符串
	name = getname();

	//打印字符串所在地址
	cout << name << " at " << (int *)name << endl;

	//释放堆区空间
	delete [] name;

	//指针置空
	name = NULL;

	system("pause");
	return EXIT_SUCCESS;
}


char * getname(void)
{
	char  temp[80] = { 0 };

	//输入姓名
	cout << "Enter your name: ";
	cin >> temp;


	//分配内存空间 字符串拷贝
	char * name = new char[strlen(temp) + 1];//节省空间  只分配够用的空间 包括拷贝空字符
	
	strcpy(name, temp);
	

	//返回指向字符串的指针
	return name;
}
