//数组元素必须是常量，或者是常量表达式。
//数组元素必须预先知道大小，  动态数组---开辟堆空间

 
#include<stdio.h>

int main()
{
	//int arr[5]={1,2,5,3,5,};
	
	/*
	int arr[5]={1,2,5,3,55};
	printf("%d\n",arr[-1]) ;   //数组元素越界 
	printf("%d\n",arr[5]) ;    //数组元素越界 
	int i=0;  
	*/
	
	int arr[]={1,2,5,3,55}; //事先不定义数组长度，输出时直接根据已有元素输出。 
	
	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++) 
	{
	   printf("%d\n", arr[i]); //利用for循环输出整个数组 
    }
	return 0;
 } 
