#include<stdio.h>

int main01()  //我写的 
{
	int i;
	int step=0;
	 
	printf("请输入一个1000以内整数：");
	scanf("%d", &i);
	
	while(i>1000)
	{
		printf("输入错误，请重新输入。"); 
		break;
	}
	  	 
	while(i!=1 && i<1000)
	{
		if(i%2==0)
		{
			i/=2;
			
		}
		else if(i%2==1)
		{
			i=(3*i+1)/2;
		}
		step++;
	}
	printf("从这个数到1需要 %d 步。\n", step); 
	return 0;
}
	

int main()  //书本答案 
{
	int i,step=0;
	scanf("%d", &i);
	while(i!=1)
	{
		if(i%2==0) i/=2;
		else i=(3*i+1)/2;
		step++;
	}
	printf("%d\n", step);
	return 0;
}

