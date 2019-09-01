#include<stdio.h>
#define SIZE 10
int main()
{
	int i;
	int arr[SIZE];
	int num;  
	
    for(i=0 ; i<SIZE ; i++)
    {
    	scanf("%d",&arr[i]);  //输入一个数组 
    }
    
    int max=arr[0];
	 
    for(i=0 ; i<SIZE ; i++)
	{
		if(arr[i]>max)
	     {
	     	max=arr[i];
	     	num=i+1; 
         }
	} 
	printf("最重的小猪%d号，体重为：%d\n", num,max);
	return 0;
 } 
