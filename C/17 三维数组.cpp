#include<stdio.h>

int mian()
{
	//  三维数组定义   ：  int arr[层][行][列]; 
	int arr[2][3][4]=
	{
		{
			{1,2,3,4},
			{2,4,5,8},
			{8,8,9,7}
		},
		{
			{6,4,8,4},
			{2,4,8,8},
			{5,8,4,7}
		}
	 } 
	 //三维数组大小： sizeof（arr);
	 //三维数组一层大小：sizeof（arr[0]）;
	 //三维数组一行大小： sizeof（arr[0][0]）;
	 //三维数组元素的大小： sizeof（arr[0][0][0]）;
	 
	 //三维数组层数： sizeof(arr)/sizeof(arr[0]) ;
	 //三维数组行数： sizeof(arr[0])/sizeof(arr[0][0]) ;
	 //三维数组列数： sizeof(arr[0][0])/sizeof(arr[0][0][0]) ;
	 
	return 0; 
}
