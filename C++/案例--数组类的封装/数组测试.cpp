#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#include "Array.h"

void test01()
{
	MyArray arr1; //默认构造
	cout << "-----------------------------------------" << endl;
	cout << "默认构造测试：" << endl;
	cout << "数组容量为：" << arr1.getCapacity() << endl;


	MyArray arr2(200);//有参构造测试
	cout << "-----------------------------------------" << endl;
	cout << "有参构造测试：" << endl;
	cout << "数组容量为：" << arr2.getCapacity() << endl;


	MyArray arr3(arr2);//拷贝构造测试
	cout << "-----------------------------------------" << endl;
	cout << "拷贝构造测试：" << endl;
	cout << "数组容量为：" << arr3.getCapacity() << endl;



	arr3.pushBack(100);//尾插测试
	arr3.insertDateByPos(1, 200);//根据位置设置数据
	arr3.insertDateByPos(1, 300);//根据位置插入数据
	cout << "-----------------------------------------" << endl;
	cout << "插入数据测试：" << endl;
	cout << "位置1数据为：" << arr3.getDate(1) << endl;
	cout << "位置2数据为：" << arr3.getDate(2) << endl;
	cout << "数组大小为：" << arr3.getSize() << endl;
	cout << "数组容量为：" << arr3.getCapacity() << endl;

	cout << "-----------------------------------------" << endl;
	cout << "运算符 [] 重载测试：" << endl;
	cout << "arr3[0] = " << arr3[0] << endl;
	cout << "arr3[1] = " << arr3[2] << endl;
	cout << "arr3[2] = " << arr3[2] << endl;


	cout << "-----------------------------------------" << endl;
	cout << "运算符 == 重载测试：" << endl;
	MyArray arr4 = arr3; //运算符 = 重载
	if (arr3 == arr4)
	{
		cout << "arr3 == arr2" << endl;
	}
	else
		cout << "arr3 != arr2" << endl;

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
