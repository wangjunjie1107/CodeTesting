#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;


template<class T1>
void mySwap(T1 &a, T1 & b)
{
	T1 temp = a;
	a = b;
	b = temp;
}



template<class T>
void mySort(T arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		int min = i;//最小值下标默认为i
		for (int j = i + 1;j < len;j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;//更新最小下标
			}
		}

		//如果最小值的下标没有改变，则不交换数据
		if (i != min)
		{
			mySwap(arr[i], arr[min]);
		}
	}
}

template<class T>
void myPrint(T arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void test()
{
	char charArray[] = { 'a','b','D','w','E','y' };
	int len1 = sizeof(charArray) / sizeof(char);
	
	mySort(charArray, len1);
	myPrint(charArray, len1);

	int intArray[] = { 1,2,515,12,515,66,55,66,51,2,-1,5,0 };
	int len2 = sizeof(intArray) / sizeof(int);
	mySort(intArray, len2);
	myPrint(intArray, len2);
}
int main()
{
	test();
	

	system("pause");
	return EXIT_SUCCESS;

}
