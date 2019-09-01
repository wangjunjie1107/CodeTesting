#include<stdio.h>
#include<string.h>

int main()
{
	char text[20],change[20];  //存储用户的输入 和 转换后的字符串 
	
	int num; //记录用户的选择 
	
	while(1)
	{
		printf("输入大小写转换方式（1 表示大写，2 表示小写，其他表示退出): \n");
		
		scanf("%d",&num);
		
		if(num == 1)
		{
			printf("请输入一串字符：\n");
			scanf("%s",text); 
			strcpy(change,text);
			strupr(change);
			printf("转换成大写字符串为：%s \n",change);
		} 
		else if(num == 2)
		{
			printf("请输入一串字符：\n");
			scanf("%s",text);
			strcpy(text,change);
			strlwr(change);
			printf("转换成小写字符串为：%s \n",change);
		}
		else
		{
			printf("程序退出\n"); 
			break;	
		} 
	} 
	
	return 0; 
 } 
