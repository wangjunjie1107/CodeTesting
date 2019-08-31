#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<stdio.h>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<time.h>
#include<ctime>

/*
	���ֺڶ�6174��
		
		������һ����λ���ֲ���ȫ��ͬ����λ������������Ȱ��ĸ����ְ�����������
		�ٰ��ǵݼ�����Ȼ���õ�һ�����ּ��ڶ������֣����õ�һ���µ����֡�һֱ�ظ���������
		�ܿ��ͣ���С����ֺڶ���֮�Ƶ�6174��������������Ҳ����Kaprekar����

		���룺0-10000֮���������

		�������ʾ���򵽴���ֺڶ����Ĺ��̣����N����λ����ȫ��ȣ�����һ�������롰N - N = 0000�� 

*/

using namespace std;

int num = 0;			//�洢���������
int arr[4] = { 0 };     //�����ֵĸ�λ�洢��������

//�ݼ�����
bool MyCmpDown(int a, int b)
{
	return a > b;
}

//��������
bool MyCmpUp(int a, int b)
{
	return a < b;
}

//�����ֵ�ÿһλ�洢��������
void ToArr(int n, int arr[])
{
	for (int i = 0; i < 4; i++)
	{
		arr[i] = n % 10; 
		n /= 10;
		//cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

//�������е�����ת��Ϊ����
int ToNumber(int arr[])
{
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum = sum * 10 + arr[i];
		//cout << "sum = " << sum << endl;
	}
	return sum;
}

//���ֺڶ� 6174
void BlackHoleOfNumber()
{
	//ȡ�����ֵ�ÿһλ�������뵽������
	cin >> num;
	ToArr(num, arr);

	//����
	int result = num;
	int result1 = 0;
	int result2 = 0;
	while (result != 6174)
	{
		//�ǵ���
		sort(arr, arr + 4, MyCmpDown);
		result1 = ToNumber(arr);
		
		//�ǵݼ�
		sort(arr, arr + 4, MyCmpUp);
		result2 = ToNumber(arr);
		
		//������
		result = result1 - result2;

		//��� ʹ��printf��ʽ�����
		printf("%04d - %04d = %04d\n", result1, result2, result);

		//��result���´洢��������  ������һ��ѭ��
		ToArr(result, arr);
		
		//���ж�
		if (result == 0)
		{
			break;
		}
	}

	

}
int main()
{
	BlackHoleOfNumber();

	system("pause");
	return EXIT_SUCCESS;
}

