#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void selectSort(int arr[], int n)
{
	if (arr == NULL || n <= 0)
	{
		return;
	}

	//先排序 从小到大排序  选择排序
	for (int i = 0; i < n; i++)
	{
		int min = i; //指定最小基数为当前下标
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

	//去重
	for (int i = 0; i < n; i++)
	{
		//如果发现重复，则后面的数字覆盖前面的数字
		if (arr[i] == arr[i + 1])
		{
			for (int j = i + 1; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
			n--;  //去重一次，数组大小减1
		}
	}

	printf("\n统计完成！\n");
	printf("一共要买 %d 本书。 ", n);
	printf("书号为： ");
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

	printf("有多少个同学参与了调查？（人数必须小于100）\n");
	scanf("%d", &n);
	printf("请输入要买的书的书号: \n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
	}

	//排序输出
	//选择排序
	selectSort(arr, n);
}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
