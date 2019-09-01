#include<stdio.h>

int main()
{
	 int k;
	 int i=0;
	 int arr[5];
	 int j=(sizeof(arr)/sizeof(arr[0]))-1;
	 
	printf("请输入五个数组元素，并用逗号隔开："); 
	 for(k=0 ; k<5 ; k++)   //输入数组 
	 {
	 
	 	scanf("%d",&arr[k]);  //输入数组，输入一个数要加取地址符号&
		                      //切记！ 
	 } 
	 
	 while(i<j)
	 {
	 	//通过临时变量交换数据
		 int temperare=arr[i];
		 arr[i]=arr[j];
		 arr[j]=temperare;
		 i++;
		 j--;
	 }
	 
	 printf("数组逆置的结果为："); 
	 for(k=0; k<5; k++)
	 {
	 	printf("%d  ", arr[k]);
	 }
	 
	 return 0;
}
