#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//需求：利用通用排序函数 实现对char和int数组排序，排序算法利用选择排序，排序规则 从大到小

//交换函数
template<class T1>
void mySwap(T1 & a, T1 & b)
{
	T1 temp = a;
	a = b;
	b = temp;
}

template<class T> //等价于 template<typename T>
void mySort(T arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		int max = i;  //现指定最值的下标
		for (int j = i + 1;j < len;j++)
		{
			if (arr[j] > arr[max])
			{
				 //比较其余的值与最值之间的大小关系，
				//如果找到新的最值，则更新最值下标
				//每循环一次，  会找到数组中 从位置i开始 到最后一元素 中的最大的值
				max = j;
			}
		}

		if (max != i)
		{
			mySwap(arr[i], arr[max]);//交换数据
		}
	}
}

template<class T>
void myPrint(T arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void test01()
{
	cout << "----------------------------" << endl;
	cout << "int类型数组排序：" << endl;
	int int_arr[] = { 7,5,4848,54,55,5,6,48,21,3,144 };
	int len = sizeof(int_arr) / sizeof(int);
	
	cout << "排序前：" << endl;
	myPrint(int_arr, len);

	cout << "排序后：" << endl;
	mySort(int_arr, len);
	myPrint(int_arr, len);


	cout << "----------------------------" << endl;
	cout << "char类型数组排序：" << endl;

	char char_arr[] = "giahfeiwahnciewabv";
	int len2 = sizeof(char_arr) / sizeof(char);

	cout << "排序前：" << endl;
	myPrint(char_arr, len2);

	cout << "排序后：" << endl;
	mySort(char_arr, len2);
	myPrint(char_arr, len2);
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
