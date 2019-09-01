#include<stdio.h>

int main()
{
	int a[5][3];
	
	//录入成绩 
	for(int i = 0; i < 5; i++)
	{
		printf("现在录入第%d名学生的成绩\n", i+1);
		for(int j = 0; j < 3; j++)
		{
			switch(j)
			{
				case 0: printf("请输入语文成绩: \n");
						scanf("%d", &a[i][j]);
						break;
				case 1: printf("请输入数学成绩: \n");
						scanf("%d", &a[i][j]);
						break;
				case 2: printf("请输入英语成绩: \n");
						scanf("%d", &a[i][j]);
						break;
			}
		}
	}
	
	//平均成绩 
	
	for(int i = 0; i < 5; i++)
	{
		int stusum = 0;
		
		for(int j = 0; j < 3; j++)
		{
			stusum += a[i][j];
		}
		
		printf("第%d名学生的平均成绩为%d\n", i+1, stusum/3);
	}
	
	//学科平均成绩
	int sum1 = 0, sum2 = 0, sum3 = 0;

	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			switch(j)
			{
				case 0:sum1 += a[i][j];break;
				
				case 1:sum2 += a[i][j];break;
				
				case 2:sum3 += a[i][j];break;
			}	
		}
	}
	
	printf("语文平均成绩为：%d\n",sum1); 
	printf("数学平均成绩为：%d\n",sum2); 
	printf("英语平均成绩为：%d\n",sum3); 
	
	
	return 0;
 } 
