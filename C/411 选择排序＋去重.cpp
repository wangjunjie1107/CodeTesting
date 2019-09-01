#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void selectSort(int arr[], int n)
{
	if (arr == NULL || n <= 0)
	{
		return;
	}

	//������ ��С��������  ѡ������
	for (int i = 0; i < n; i++)
	{
		int min = i; //ָ����С����Ϊ��ǰ�±�
		for (int j = i + 1; j < n; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}

		if (min != i)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}

	//ȥ��
	for (int i = 0; i < n; i++)
	{
		//��������ظ������������ָ���ǰ�������
		if (arr[i] == arr[i + 1])
		{
			for (int j = i + 1; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
			n--;  //ȥ��һ�Σ������С��1
		}
	}

	printf("\nͳ����ɣ�\n");
	printf("һ��Ҫ�� %d ���顣 ", n);
	printf("���Ϊ�� ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
}


void test01()
{
	int arr[101];
	int n;

	printf("�ж��ٸ�ͬѧ�����˵��飿����������С��100��\n");
	scanf("%d", &n);
	printf("������Ҫ���������: \n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}

	//�������
	//ѡ������
	selectSort(arr, n);
}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
