#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<float.h>

//整型数组选择排序
void MySort(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		//认定i为最小值的下标
		int min = i;

		for (int j = i + 1; j < len; j++)
		{
			if (arr[min] > arr[j])
			{
				//更新真实最小值下标
				min = j;
			}
		}
		//判断认定i和min是否一样，如果不一样，交换这两个下标对应的元素
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
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}
void test01()
{
	//选择排序
	//从小到大排序  升序
	int arr[] = { 3,5,1,2,4 };

	//封装选择排序函数
	int len = sizeof(arr) / sizeof(int);
	MySort(arr, len);

	//打印数组
	printArray(arr, len);
}



//字符数组选择排序  降序
//字符串比较：strcmp(str1,str2)  str1 < str2 返回-1
void MySortString(char * pArr[], int len)
{

	for (int i = 0; i < len;i++)
	{
		//认定i为最大值的下标
		int max = i;
		for (int j = i + 1;j < len;j++)
		{
			//找两个下标值  
			//字符串比较  是直接用一维指针进行比较 也就是一位数组名比较
			//如果第一个字符相同，就比较接下来的字符
			//计算机进行比较的过程，实际上将字符转化为相应的ASCII码值进行比较的

			//if(pArr[max] < pArr[j])  
			if (strcmp(pArr[max],pArr[j]) == -1)
			{
				//更新最大值下标
				max = j;
			}
		}

		if (i != max)
		{
			char * temp = pArr[i];
			pArr[i] = pArr[max];
			pArr[max] = temp;
		}
	}
}

//打印字符数组
void printString(char ** pArr, int len)
{
	for (int i = 0; i < len;i++)
	{
		printf("%s\n", pArr[i]);
	}
}


//指针数组 --  数组中每个元素 都是指针类型
void test02()
{
	char * pArr[] = { "aaa", "bbb", "ccc", "ddd", "fff", "eee","cafefa","cbfefa" };

	int len = sizeof(pArr) / sizeof(char *);
	
	//排序
	MySortString(pArr, len); //指针数组，数组名是一个二维指针
	//打印
	printString(pArr, len);
	// fff  eee  ddd  ccc  bbb  aaa 降序排序，利用选择排序算法
}

int main()
{
	//test01();
	test02();

	system("pause");
	system("pause");


	return EXIT_SUCCESS;
}
