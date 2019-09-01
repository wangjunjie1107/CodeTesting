#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>

//内存对齐原则

//第一个属性开始  从0开始计算偏移量
//第二个属性要放在  该属性的大小 与 对齐模数比  取小的值的 整数倍上 
//当所有属性都计算完毕后，整体做二次偏移，
//将上面计算的结果 扩充到 这个结构体中最大数据类型 与对齐模数  比 取小的值 的整数倍



//#pragma pack(show)  //默认对齐模数为8

#pragma pack(1)  //更改对齐模数为1  对齐模数 可以改为 2的n次方

struct Person
{
	char a[23];  // 0-23	//0-22
	int b;		//24-27		//23-26
	double c;	//32-39		//27-34
	float d;	//40-43		//35-38
	char e[48];//44-91		//39-86
	int f;	//92-95			//87-90

	
	//总的内存 根据最大的数据类型 8个字节  总的内存为96  0-95
	//更改对齐模数为1后 总内存为91   0-90
};
int main()
{

	//默认对齐模数

	/*printf("a 的偏移量为：%d\n", offsetof(struct Person , a));
	printf("b 的偏移量为：%d\n", offsetof(struct Person, b));
	printf("c 的偏移量为：%d\n", offsetof(struct Person, c));
	printf("d 的偏移量为：%d\n", offsetof(struct Person, d));
	printf("e 的偏移量为：%d\n", offsetof(struct Person, e));
	printf("f 的偏移量为：%d\n", offsetof(struct Person, f));
	printf("总的内存为：%d\n", sizeof(struct Person));*/


	//更改对齐模数 为 1后

	printf("a 的偏移量为：%d\n", offsetof(struct Person, a));
	printf("b 的偏移量为：%d\n", offsetof(struct Person, b));
	printf("c 的偏移量为：%d\n", offsetof(struct Person, c));
	printf("d 的偏移量为：%d\n", offsetof(struct Person, d));
	printf("e 的偏移量为：%d\n", offsetof(struct Person, e));
	printf("f 的偏移量为：%d\n", offsetof(struct Person, f));
	printf("总的内存为：%d\n", sizeof(struct Person));


	system("pause");
	return EXIT_SUCCESS;
}
