#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct
{
	int num;//顾客编号
	long time; //进入队列时间 
}DATA;

#include "286 算法_循环队列操作.h"

int num; //顾客序号

//添加顾客进入队列 
void add(CycQueue *q)
{
	DATA data;
	
	//如果队列未满 
	if(!CycQueueIsFull(q))
	{
		data.num = ++num;
		data.time = time(NULL);
		CycQueueIn(q,data);
	}
	else
		printf("\n排队的人太多，请稍后再排队！\n"); 
}

//通知下一顾客准备
void next(CycQueue *q)
{
	DATA *data;
	
	//若队列不为空 
	if(!CycQueueIsEmpty(q))
	{
		data = CycQueueOut(q);//取队列头部的数据
		printf("\n请编号为%d的顾客办理业务！\n", data->num); 
	}
	
	//若队列不为空 
	if(!CycQueueIsEmpty(q))
	{
		data = CycQueuePeek(q);//取队列中指定位置的数据 
		printf("\n请编号为%d的顾客准备，马上为您办理业务！\n", data->num); 
	}
}

int main()
{
	CycQueue *queue1;
	int i, n;
	char select;
	
	num = 0; //顾客序号 
	queue1 = CycQueueInit(); //初始化队列
	
	if(queue1 == NULL)
	{
		printf("创建队列时出错！\n");
		getchar();
		return 0; 
	}
	
	do{
		printf("\n请选择具体操作：\n");
		printf("1.新到顾客\n");
		printf("2.下一个顾客\n");
		printf("0.退出\n");
		
		fflush(stdin);
		
		select = getchar();
		switch(select)
		{
			case '1':
				add(queue1);
				printf("\n现在共有%d位顾客在等候！\n",CycQueueLen(queue1));
				break;
			
			case '2':
				next(queue1);
				printf("\n现在共有%d位顾客在等候！\n",CycQueueLen(queue1));
				break;
			
			case '0':
				break;
		}
	}while(select != '0');
	
	CycQueueFree(queue1); //释放队列
	
	getchar();
	return 0; 
} 


 
