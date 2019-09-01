#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	//加入随机数种子
	srand((unsigned int)time(NULL));
	int num = rand()%1000+1; // 随机数在 1-1000 之间 
	
	int value;
	
	printf("请输入一个数字："); 
	while(1)
	{
		scanf("%d",&value);
		
		if(value < 0|| value > 1000)
		{
			printf("输入错误\n");
		}
		
		else if(value > num)
			printf("您输入的数太大了\n");
			
		else if (value < num)
			printf("您输入的数太小了\n");
			
		else
		{
			printf("恭喜您！中奖啦~\n");
			break;
		}
		
		printf("请继续输入："); 
	 } 
	 
	 return 0;
}
