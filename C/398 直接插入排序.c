#include<stdio.h>

/*
	插入排序是把一个记录插入到已排序的有序序列中去，
	使整个序列在插入了该记录后仍然有序。
	插入排序中较简单的一种方法便是直接插入排序，
	其插入位置的确定是通过将待插入的记录与有序区中的各记录自右向左依次比较其关键字值大小来确定的。
*/



int main()
{
	int arr[] = {1,245,561,1561,484,161,6,6156,161,5161,48,47,9416,131561,484,615,648,16,31,564,3,4,554,6};
	int arr_size = sizeof(arr) / sizeof(int);
	
	
	int i,j;
	int temp;
	
	for(i = 1; i < arr_size; i++)
	{
		temp = arr[i]; //给监视哨赋值
		j = i - 1;    //确定要比较的元素在最右边的位置 
		while(temp > arr[j])
		{
			arr[j + 1] = arr[j]; //数据右移 
			j--;				//移向左边一个未比较的数 
		}
		arr[j + 1] = temp;		//在确定的位置插入s[i] 
	}
	
	
	for(i = 0; i < arr_size; i++)
	{
		printf("%d\n", arr[i]);
	}
	
	return 0;
}
	
	
