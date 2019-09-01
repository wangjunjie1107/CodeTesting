#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<float.h>

//结构体设计
struct Person
{
	char *name;//姓名
	int age;
};

//分配内存并赋值，返回一个结构体二级指针
struct Person ** allocateSpace()
{
	//结构体二级指针
	struct Person ** temp = malloc(sizeof(struct Person *) * 3);

	for (int i = 0; i < 3; i++)
	{
		//给每个Person分配内存
		temp[i] = malloc(sizeof(struct Person));

		//给每个Person name分配内存空间
		temp[i]->name = malloc(sizeof(char) * 64);

		//给name姓名赋值
		sprintf(temp[i]->name, "wangjunjie_%d", i + 1);

		//给年龄赋值
		temp[i]->age = i + 18;
	}

	return temp;
}

//打印结构体数组的信息
void printPerson(struct Person ** pArray, int len)
{
	for (int  i = 0; i < len; i++)
	{
		printf("姓名：%s 年龄：%d\n", pArray[i]->name, pArray[i]->age);
	}
}

//释放堆区数据
void freeSpace(struct Person ** pArray, int len)
{
	//判断
	while (pArray == NULL || len <= 0)
		return;

	for (int i = 0; i < len; i++)
	{
		//先释放name的内存空间
		free(pArray[i]->name);
		pArray[i]->name = NULL;

		//再释放Person的内存空间
		free(pArray[i]);
		pArray[i] = NULL;
	}

	//释放整个数组
	free(pArray);
	pArray = NULL; //让局部变量指针指向空
}

void test01()
{
	
	struct Person ** pArray = NULL;

	//分配内存并赋值  接收一个二级指针
	pArray = allocateSpace();

	//打印数组的信息
	printPerson(pArray, 3);

	//释放堆区数据
	freeSpace(pArray, 3);
	pArray = NULL; //让结构体指针指向空  值传递 不能够使此处指针指向空
					//如果要在别的函数里使此处指针指向空 要用地址传递
}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}


