#include<stdio.h>

int main()
{
	int arr[5];
	int i=0;
	int j=0;
	int temp;
	 	  
	printf("请输入五个数组元素，并用空格隔开：");
	for(i=0 ; i<5 ; i++)   //输入数组 
	 {
	 
	 	scanf("%d",&arr[i]);  //输入数组，输入一个数要加取地址符号&
		                      //切记！ 
	 } 
	 
	//循环比较数组元素，如第一个元素和其余元素依次比较 
	
    for(i=0 ; i<5 ; i++)  //外层控制行 
	   { 
	  	  for(j=0 ; j<5-1-i ; j++) //内层控制行 
	  	   {
	  	        if(arr[j]>arr[j+1])  //比较两个元素  
	  	        {                    //每次比较的是两个相邻的数据 
	  	       		temp=arr[j];
			   		arr[j]=arr[j+1];
			   		arr[j+1]=temp;
	        	}
	    	}
	   }
	  
	    printf("冒泡排序结果为："); 
	    for(i=0 ; i<5 ; i++)
	    {
	    	printf("%d\t",arr[i]);
		} 
	return 0;
	}
 
