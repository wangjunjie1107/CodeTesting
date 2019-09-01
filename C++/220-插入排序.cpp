#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>


//插入排序
void insertSort(int arr[], int len)
{
	for (int i = 1; i < len; ++i)
	{
		if (arr[i] < arr[i - 1])
		{
			int temp = arr[i];
			int j = i - 1;
			for(; j>=0 && temp < arr[j] ; --j)
			{
				arr[j + 1] = arr[j]; //数据后移
			}
			arr[j + 1] = temp; //将j+1位置数据赋值为temp
		}
	}
}

void test01()
{
	int arr[] = { 1,213,15,4,849,11 };
	int len = sizeof(arr) / sizeof(int);

	insertSort(arr, len);

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
