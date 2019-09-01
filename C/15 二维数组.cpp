#include<stdio.h>

int main()
{
	//一维数组类型  数组名[元素个数]={值1，值2}; 
	
	//二维数组类型  数组名[行][列]={{值1，值2}，{值3，值4}};
	
	int arr[3][3]={{1,1,1},{2,5,1},{51,15,48}};
	int i;
	int j;
	
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d  ", arr[i][j]);	 
		}
		printf("\n");
	 } 
	  
	 printf("二维数组大小：%d\n", sizeof(arr) );
	 printf("二维数组的一行大小：%d\n", sizeof(arr[0]) );
	 printf("二维数组的元素大小：%d\n", sizeof(arr[0][0]) );
	 
	 printf("二维数组的行数：%d\n", sizeof(arr)/sizeof(arr[0]) );
	 printf("二维数组的列数：%d\n", sizeof(arr[0])/sizeof(arr[0][0]) );
	 
	 
	 //二维数组的首地址 表示的三种方法  
	 
	 printf("%d\n",arr);
	 printf("%d\n",arr[0]);
	 printf("%d\n",&arr[0][0]);
	 
	 printf("%d\n",arr[1]);   //数组第二行的起始地址
	 
	 
	 //利用for循环打印所有元素地址
	 printf("所有二维元素的地址："); 
	 for(i=0 ; i<3 ; i++)
	 {
	   for(j=0 ; j<3 ; j++) 
	   {
	   	  printf("%d\n", &arr[i][j]);
	   }
     }
     
     //二维数组元素的初始化，只有挨着数组名的可以省略不写。 
	 
	 return 0;
} 
