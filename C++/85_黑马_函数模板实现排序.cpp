#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len;i++)
	{
		int max = i;
		for (int j = i + 1;j < len;j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}

		if (i != max)
		{
			mySwap(arr[i], arr[max]);
		}
	}
}

	
template<class T>
void myPrint(T arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	char arr[] = { 'a','b','c' };
	int len = 3;
	mySort(arr, len);
	myPrint(arr, len);

	int intArray[] = { 1, 5, 3, 2, 4 };
	len = sizeof(intArray) / sizeof(int);
	mySort(intArray, len);
	myPrint(intArray, len);

}

int main()
{
	
	test01();


	system("pause");
	return EXIT_SUCCESS;
}
