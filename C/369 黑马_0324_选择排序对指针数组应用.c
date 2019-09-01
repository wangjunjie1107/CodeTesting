#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//整型数组选择排序
void MySort(int * arr, int len)
{
	for (int i = 0;i < len;i++) //找到最小值后，下标后移，在剩余的数列中继续找
	{
		int min = i;

		for (int j = i + 1;j < len;j++)//相当于在当前数列中寻找，找到最小值的下标后，和之前指定的下标进行交换 
		{
			if (arr[min] > arr[j])
			{
				//更新真实最小值下标
				min = j;
			}
		}

		//判定认定i和min是否一样，如果不一样，交换数据
		//因为有可能此时的 i 已经是最小的值了
		if (i != min)
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

void printArray(int *arr, int len)
{
	for (int i = 0;i < len;i++)
	{ 
		printf("%d ", arr[i]);
	}
}
void test01()
{
	//选择排序
	//从小到大排序 升序
	int arr[] = { 1,0,516,-1,216,52,60 };

	//封装选择排序函数
	int len = sizeof(arr) / sizeof(int);
	MySort(arr, len);

	//打印数组
	printArray(arr, len);
}

//字符数组选择排序 降序
//字符串比较：strcmp(str1,str2) str1 < str2 返回-1
//指针数组———数组中每个元素 都是指针类型

void MySortString(char *pArr[], int len)
{
	if(pArr == NULL)
	{ 
		return;
	}
	if (len < 2)
	{
		return;
	}

	for (int i = 0;i < len;i++)
	{
		int max = i;
		for (int j = i + 1;j < len;j++)
		{
			//strcmp(str1,str2)
			//str1 < str2 返回 -1 
			//str1 > str2 返回 1
			//str1 = str2 返回 0
			//如果后面的字符串大于前面的，则交换

			//找两个下标值  
			//字符串比较  是直接用一维指针进行比较 也就是一位数组名比较
			//如果第一个字符相同，就比较接下来的字符
			//计算机进行比较的过程，实际上将字符转化为相应的ASCII码值进行比较的
			
			if (strcmp(pArr[max], pArr[j]) == -1)
			{
				//printf("%d\n", strcmp(pArr[max], pArr[j]));

				max = j;//一路找到最大值的下标
			}
		}

		//交换
		if (max != i)
		{
			char * temp = pArr[i];
			pArr[i] = pArr[max];
			pArr[max] = temp;
		}
	}
}

void printString(char *pArr[], int len)
{
	if (pArr == NULL)
	{
		return;
	}
	if (len < 1)
	{
		return;
	}

	for (int i = 0; i < len;i++)
	{ 
		printf("%s\n", pArr[i]);
	}
}


void test02()
{
	char * pArr[] = { "aaa", "bbb", "ccc", "ddd", "fff", "eee","cafefa","cbfefa" };
	
	int len = sizeof(pArr) / sizeof(char *);

	//排序
	MySortString(pArr, len);

	//打印
	printString(pArr,len);
}


int main() 
{
	//test01(); //数组选择排序 不断更新下标 
	test02();
	system("pause");
	return EXIT_SUCCESS;
}
