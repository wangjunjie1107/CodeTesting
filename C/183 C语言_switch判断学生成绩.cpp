#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	
	while(1)
	{
		

	printf("请输入学生成绩： ");
	scanf("%d", &a); 
	
	switch(a/10)
	{
		case 10 :printf("优秀");break; 
		case 9 :printf("优秀");break;
		
		case 8 :printf("良好");break;
		case 7 :printf("良好");break;
		
		case 6 :printf("及格");break;
		
		default:printf("不及格或输入错误");break; 
	}
	
		//是否继续输入 
		char c;
		printf("\n输入完成？（回复Y/y退出，按其他键继续）：");
		scanf("%s", &c);
	
		if(c == 'y'|| c == 'Y')
		{
			break;
		}
		else
		{
			continue;
		} 
	
	}
	
	printf("输入完成。\n");
	
	return 0;
 } 
