#include<stdio.h>
#define SIZE 10
int main()
{
	int i;
	int arr[SIZE];
	int num;  
	
    for(i=0 ; i<SIZE ; i++)
    {
    	scanf("%d",&arr[i]);  //����һ������ 
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
	printf("���ص�С��%d�ţ�����Ϊ��%d\n", num,max);
	return 0;
 } 
