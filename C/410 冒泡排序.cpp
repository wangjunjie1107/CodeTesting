#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct student
{
	char name[64];
	int	score;
};
void test01()
{
	struct student arr[100];
	int n;
	printf("要输入多少人的成绩?\n");
	scanf("%d", &n);
	
	printf("请依次输入姓名和成绩,中间用空格隔开：\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d", &(arr[i].name),&(arr[i].score));
	}
	
	printf("冒泡排序前：\n");
	for (int i = 0; i < n; i++)
	{
		printf("姓名：%10s， 成绩：%10d  \n", arr[i].name, arr[i].score);
	}
	printf("\n");

	//冒泡排序  按照分数从小到大排序
	struct student temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			//如果前面的数大于后面的数，交换数字
			if (arr[i].score > arr[j].score)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("冒泡排序后：\n");
	for (int i = 0; i < n; i++)
	{
		printf("姓名：%10s， 成绩：%10d  \n", arr[i].name, arr[i].score);
	}
}


int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
