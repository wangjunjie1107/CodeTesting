//循环队列
#define QUEUEMAX 15
typedef struct
{
	DATA data[QUEUEMAX];//队列数组
	int head;//队头 
	int tail;//队尾 
}CycQueue;

CycQueue *CycQueueInit()
{
	CycQueue *q;
	if(q = (CycQueue *)malloc(sizeof(CycQueue)))
	{
		q->head = 0;//队头 
		q->tail = 0;//队尾
		return q; 
	}
	else
		return NULL;//返回空 
}

//释放队列 
void CycQueueFree(CycQueue *q)
{
	 if(q != NULL)
	 	free(q);
} 

//队列是否为空 
int CycQueueIsEmpty(CycQueue *q) 
{
	return (q->head == q->tail);
}

//队列是否为满
int CycQueueIsFull(CycQueue *q)
{
	return ((q->tail + 1)%QUEUEMAX == q->head);
}

//入队函数 
int CycQueueIn(CycQueue *q, DATA data)  
{
	if((q->tail + 1)%QUEUEMAX == q->head)
	{
		printf("队列已满！\n");
		return 0;
	}
	else
	{
		q->tail = (q->tail + 1)%QUEUEMAX; //求队尾序列号
		q->data[q->tail] = data;
		return 1; 
	}
} 

//循环队列出队 
DATA *CycQueueOut(CycQueue *q)
{
	if(q->head == q->tail)
	{
		printf("队列已空！\n");
		return NULL;
	}
	else
	{
		q->head = (q->head + 1) % QUEUEMAX;
		return &(q->data[q->head]);
	}	
} 

//获取队列长度
int CycQueueLen(CycQueue *q)
{
	int n;
	n = q->tail - q->head;
	
	if(n < 0)
	{
		n = QUEUEMAX + n;
	}
	
	return n;
} 

DATA *CycQueuePeek(CycQueue *q)
{
	if(q->head == q->tail)
	{
		printf("队列已经为空！\n");
		return NULL;
	}
	else
	{
		//返回所寻找元素的地址 
		return &(q->data[(q->head + 1) % QUEUEMAX]);
	}
}


