#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void Arr(int arr[])
{
	arr[1] = 100;
}
int main()
{

	int arr[] = { 11,2,1,5,3,1 };

	Arr(arr);

	//数组名加1会跳过数组本身类型的字节数
	cout << *(arr + 1) << endl;

	system("pause");
	return EXIT_SUCCESS;

}
