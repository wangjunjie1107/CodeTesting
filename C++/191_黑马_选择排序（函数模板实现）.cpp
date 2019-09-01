#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//��������ͨ�������� ʵ�ֶ�char��int�������������㷨����ѡ������������� �Ӵ�С

//��������
template<class T1>
void mySwap(T1 & a, T1 & b)
{
	T1 temp = a;
	a = b;
	b = temp;
}

template<class T> //�ȼ��� template<typename T>
void mySort(T arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		int max = i;  //��ָ����ֵ���±�
		for (int j = i + 1;j < len;j++)
		{
			if (arr[j] > arr[max])
			{
				 //�Ƚ������ֵ����ֵ֮��Ĵ�С��ϵ��
				//����ҵ��µ���ֵ���������ֵ�±�
				//ÿѭ��һ�Σ�  ���ҵ������� ��λ��i��ʼ �����һԪ�� �е�����ֵ
				max = j;
			}
		}

		if (max != i)
		{
			mySwap(arr[i], arr[max]);//��������
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
	cout << "int������������" << endl;
	int int_arr[] = { 7,5,4848,54,55,5,6,48,21,3,144 };
	int len = sizeof(int_arr) / sizeof(int);
	
	cout << "����ǰ��" << endl;
	myPrint(int_arr, len);

	cout << "�����" << endl;
	mySort(int_arr, len);
	myPrint(int_arr, len);


	cout << "----------------------------" << endl;
	cout << "char������������" << endl;

	char char_arr[] = "giahfeiwahnciewabv";
	int len2 = sizeof(char_arr) / sizeof(char);

	cout << "����ǰ��" << endl;
	myPrint(char_arr, len2);

	cout << "�����" << endl;
	mySort(char_arr, len2);
	myPrint(char_arr, len2);
}


int main()
{

	test01();

	system("pause");
	return EXIT_SUCCESS;
}
