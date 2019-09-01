#include "dynamicArray.h"


//初始化数组 
//参数：初始数组容量 
//返回值：数组指针
struct dynamicArray * init_dynamicArray(int capacity)
{
	//参数安全性检查
	if (capacity <= 0)
	{
		return NULL;
	}

	//给数组分配内存
	struct dynamicArray * arr = malloc(sizeof(struct dynamicArray));
	//分配内存失败
	if (arr == NULL)
	{
		return NULL;
	}
	//初始化属性
	arr->pAddr = malloc(sizeof(void *) * capacity);
	arr->m_Capacity = capacity;
	arr->m_size = 0;


	//返回数组指针
	return arr;
}

//插入数组
void insert_dynamicArray(struct dynamicArray * arr, void * data, int pos)
{
	//安全性检查
	if (arr == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	if (pos <0 || pos>arr->m_size)
	{
		//插入位置违法 则使用尾插法
		pos = arr->m_size;
	}

	//如果数组容量已经满了
	if (arr->m_size == arr->m_Capacity)
	{
		//1、计算新内存空间大小  扩展内存
		int newCapacity = arr->m_Capacity * 2;

		//2、开辟新空间
		void ** newSpace = malloc(sizeof(void *) * newCapacity);

		//3、将原空间下的数据拷贝到新空间下
		memcpy(newSpace, arr->pAddr, sizeof(void *) * arr->m_Capacity);

		//4、释放原空间
		free(arr->pAddr);

		//5、更改指针指向
		arr->pAddr = newSpace;

		//6、更新新容量
		arr->m_Capacity = newCapacity;
	}

	//将新元素插入到数组中指定位置
	for (int i = arr->m_size - 1;i >= pos;i--)
	{
		//元素后移
		arr->pAddr[i + 1] = arr->pAddr[i];
	}
	//将新数据插入到指定位置
	arr->pAddr[pos] = data;
	//更新数组大小
	arr->m_size++;
}

//遍历动态数组  回调函数 void(*myPrint)(void *)
void foreach_dynamicArray(struct dynamicArray * arr, void(*myPrint)(void *))
{
	if (arr == NULL)
	{
		return;
	}
	for (int i = 0;i < arr->m_size;i++)
	{
		myPrint(arr->pAddr[i]);
	}
}

//删除数组
//按照位置删除数据
void removeByPos_dynamicArray(struct dynamicArray * arr, int pos)
{
	if (arr == NULL)
	{
		return;
	}
	if (pos<0 || pos > arr->m_size - 1)
	{
		//无效位置
		return;
	}

	for (int i = pos;i < arr->m_size; i++)
	{
		//删除指定位置的元素，从前往后移动 其实是指针的移动 所以不用考虑是什么类型的数据
		arr->pAddr[i] = arr->pAddr[i + 1];
	}
	//更新数组大小
	arr->m_size--;

}

//按值方式删除数据  int(*myCompare)(void *,void *) 回调函数
void removeByValue_dynamicArray(struct dynamicArray * arr, void * data, int(*myCompare)(void *, void *))
{
	if (arr == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	for (int i = 0;i < arr->m_size;i++)
	{
		//利用回调函数 让用户自己编写回调函数 告诉我们对比数据的结果
		if (myCompare(arr->pAddr[i], data))
		{
			//找到位置后，调用按位置删除元素，覆盖元素
			removeByPos_dynamicArray(arr, i);
			break;
		}
	}
}


//销毁数组
void destroy_dynamicArray(struct dynamicArray * arr)
{
	if (arr == NULL)
	{
		return;
	}

	//内部维护在堆区数组指针先释放
	if (arr->pAddr != NULL)
	{
		free(arr->pAddr);
		arr->pAddr = NULL;
	}

	free(arr);
	arr = NULL;

}