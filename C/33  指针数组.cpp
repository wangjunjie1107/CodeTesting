#include<stdio.h>

int main(void)
{
	//指针数组里面元素存储的是指针
	int a[] = { 1,2,3, };
	int b[] = { 4,5,6, };
	int c[] = { 7,8,9, };
	int* arr[] = { a,b,c };
	
	//指针数组是一个特殊的二维数组模型
	//指针数组对应于二级指针
	
	//指针数组和二级指针建立关系 
	int** p = arr;   //通过p操作数组
	
	printf("%d\n", **p);  //   arr[0][0]=1
	//二级指针加偏移量 相当于跳过了一个一位数组 
	printf("%d\n", **(p+1));  //arr[1][0]=4
	//一级指针加偏移量  相当于跳过了一个元素 
	printf("%d\n", *(*p+1)); //arr[0][1]=2
	
	printf("%d\n", *(*(p+1)+1));   //arr[1][2]=5
	
	
	
	printf("%d\n", arr[0][1]);  //数组a的第二个元素
	
	printf("%d\n", arr);    //arr是指针数组的首地址
	printf("%d\n", &arr[0]);    //同上 
	
	
	//下面三个表示的结果相同 
	printf("%d\n", arr[0]);  // 数组arr首个元素，也就是数组a的首地址 
	printf("%d\n", a);     //   数组a的首地址 
	printf("%d\n", &a[0]);   // 数组a的第一个元素的地址 

    //遍历数组中所有元素
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d\t", *(*(arr+i)+j));  
			//printf("%d\t", *(arr[i]+j));   //输出的三种方式 
			//printf("%d\t", arr[i][j]);
		}
		puts("");   //换行 
	 } 
	 



    return 0; 
 } 
