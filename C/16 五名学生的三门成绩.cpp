#include<stdio.h>
#include<math.h>

int main()
{
	int arr[5][3];
	int i;
	int j;
	
	printf("请分别输入五名学生的三门学科成绩："); 
	
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	//成绩打印结果如下：
	printf("成绩打印结果如下：\n"); 
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	//每名学生的平均成绩
	
	 for(i=0 ; i<5 ; i++)
	{
		int sum=0;
		for(j=0 ; j<3 ; j++)
		{
			sum+=arr[i][j];
		}
		sum/=3; 
		printf("第%d名学生的平均成绩为：%d\n", i+1, sum);
	}
	
	printf("\n");
	//每门课的总成绩
	
	 for(i=0 ; i<3 ; i++)
	{
		int sum=0;
		
		for(j=0 ; j<5 ; j++)
		{
			sum+=arr[j][i];
		}
		sum/=5; 
		printf("第%d门课的平均成绩为：%d\n", i+1, sum);
	} 
	
	return 0;
 } 
