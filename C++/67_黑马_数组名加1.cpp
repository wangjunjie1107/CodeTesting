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

	//��������1���������鱾�����͵��ֽ���
	cout << *(arr + 1) << endl;

	system("pause");
	return EXIT_SUCCESS;

}
