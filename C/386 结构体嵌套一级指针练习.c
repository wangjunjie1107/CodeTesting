#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//结构体设计
struct Person
{
	char * name;
	int age;
};

//分配空间并且赋值  
//要操控一级指针  传递的参数必须是一级指针的地址，也就是形参必须为二级指针
void allocateSpace(struct Person ** myPerson)
{
	if (myPerson == NULL)
	{
		return;
	}
	
	struct Person * temp = malloc(sizeof(struct Person));

	temp->name = malloc(sizeof(char)*64);
	strcpy(temp->name, "wangjunjie");
	//sprintf(temp->name, "%d wangjunjie", 1);
	temp->age = 22;

	*myPerson = temp;
}


//打印人员信息
void printPerson(struct Person ** myPerson)
{
	if (myPerson == NULL)
	{
		return;
	}

	printf("姓名：%s  年龄：%d\n", (*myPerson)->name, (*myPerson)->age);
}

//释放堆区数据
void freeSpace(struct Person * myPerson)
{
	if (myPerson == NULL)
	{
		return;
	}

	if (myPerson->name != NULL)
	{
		printf("%s被释放了！\n",myPerson->name);
		free(myPerson->name);
		myPerson->name = NULL;
	}

	free(myPerson);

}
void test()
{
	//分配内存空间
	struct Person * myPerson = malloc(sizeof(struct Person));

	//分配内存并赋值
	allocateSpace(&myPerson);

	//打印人员信息
	printPerson(&myPerson);

	//释放堆区数据
	freeSpace(myPerson);
	myPerson = NULL;

}
int main()
{

	test();
	system("pause");
	return EXIT_SUCCESS;
}
