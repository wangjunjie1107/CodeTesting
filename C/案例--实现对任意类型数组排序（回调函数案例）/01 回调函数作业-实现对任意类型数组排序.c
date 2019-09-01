#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void selectSort(void * arr, int eleSize , int len  , int(*myCompare)( void* ,void * ) )
{
	
	char * temp = malloc(eleSize);

	for (int i = 0; i < len; i++)
	{
		//认定i就是最小值 或者最大值
		int minOrMax = i;

		for (int j = i + 1; j < len; j++)
		{
			//获取j元素首地址
			char * pJ = (char *)arr + eleSize * j;
			//获取当前最小值或最大值元素的首地址
			char * pMinOrMax = (char *)arr + eleSize *minOrMax;
			//if ( pJ  pMinOrMax)

			/*  升序
					if (*num1 < *num2)
					{
					return 1;
					}
			*/

			if (myCompare(pJ, pMinOrMax))
			{
				minOrMax = j;
			}
		}
		if (i != minOrMax) //如果认定最小值或最大值 不是计算出的minOrMax
		{
			//通过内存拷贝实现交换
			char * pI = (char *)arr + i * eleSize;
			char * pMinOrMax = (char *)arr + minOrMax * eleSize;

			memcpy(temp, pI, eleSize);
			memcpy(pI,pMinOrMax, eleSize);
			memcpy(pMinOrMax, temp, eleSize);
		}
	}

	if (temp != NULL)
	{
		free(temp);
		temp = NULL;
	}
}

int compareInt(void * data1,void * data2)
{
	int * num1 = data1;
	int * num2 = data2;

	//升序
	//if (*num1 < *num2)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return 0;
	//}

	return *num1 < *num2;
}

void test01()
{
	int arr[] = { 10, 40, 30, 20, 50, 90, 70, 60 ,80};

	int len = sizeof(arr) / sizeof(int);
	selectSort(arr, sizeof(int), len, compareInt);

	for (int i = 0; i < len;i++)
	{
		printf("%d\n",arr[i]);
	}

}


//结构体数组排序
struct Person
{
	char name[64];
	int age;
};

//按照年龄做降序
int comparePerson(void * data1, void * data2)
{
	struct Person * p1 = data1;
	struct Person * p2 = data2;

	
	//if (p1->age > p2->age)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return 0;
	//}

	return p1->age > p2->age;
}

void test02()
{
	struct Person arr[] = 
	{
		{ "aaa", 10 },
		{ "bbb", 40 },
		{ "ccc", 20 },
		{ "ddd", 30 },
		{ "eee", 50 },
	};

	int len = sizeof(arr) / sizeof(struct Person);
	selectSort(arr, sizeof(struct Person), len, comparePerson);

	for (int i = 0; i < len;i++)
	{
		printf("姓名： %s  年龄： %d\n", arr[i].name, arr[i].age);
	}

}

int main(){

	test01();
	//test02();


	system("pause");
	return EXIT_SUCCESS;
}