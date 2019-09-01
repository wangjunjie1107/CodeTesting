#include<stdio.h>
#include<stdlib.h>

int main()
{
	int oldprice;
	int price = 0;
	int i = 0; 
	
	printf("请首先设置商品的真实价格: ");
	scanf("%d", &oldprice);
	system("cls");
	
	printf("请输入试猜的价格\n");
	while(oldprice != price)
	{
		i++;
		printf("参与者：");
		scanf("%d", &price);
		
		printf("主持人："); 
		if(price>oldprice)
		{
			printf("高了\n");
		}
		else if(price<oldprice)
		{
			printf("低了\n"); 
		}	
		else
		{
			printf("恭喜，答对了！\n");
			printf("你一共猜了%d次", i);
		}
	}
	
	getchar();
	return 0; 
 } 
