#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	//双色球  六个红球  1-32  1个蓝球  1-16 
	
	srand((unsigned int)time(NULL));  //创建随机数 
	int arr[6]={0};
	int value=0;
	int flag=0;
	int i; 
	int j;
	
	for(int i=0; i<6; i++)   //产生红球的六个随机数 
 	{
		value=rand()%32+1;
		
		//去掉重复的数字
		for(j=0; j<flag; j++)
		{
			if(value==arr[j])
			{
				i--; 
				break;
			}
	    } 
	    
	    //将新的数字存到新的位置中 
	    if(j==flag)
		{
	       arr[flag]=value;
	       flag++;
		}
	} 
	
	//输出值 
	for(i=0; i<6; i++)
	{
		printf("%d  ", arr[i]); 
	}
	
	//蓝色的球的值
	printf("+ %d\n", rand()%16+1);
	 
	return 0;

 }
  
