#include<stdio.h>
 
// %p打印变量的内存地址 是以无符号十六进制格式打印  打印时需要在变量前加上 【&】

int main()
{
	int scores[10] = {1,5,4,8,98,88,77,66,44};
	//打印数组名

	printf("数组名对应的地址：%p\n", scores);
	printf("数组第一个元素对应的地址：%p\n", &scores[0]);
	printf("数组第二个元素对应的地址：%p\n", &scores[1]);
	
	return 0;
}

	

