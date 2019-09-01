//顺序队列操作
#define QUEUEMAX 15

typedef struct
{
	DATA data[QUEUEMAX]; //队列数组
	int head;//队头 
	int tail;//队尾 
}SeqQueue;

SeqQueue *SeQueueInit()
{
	SeqQueue *q;
	//申请保存队列的内存 
	if(q = (SeqQueue *)malloc(sizeof(SeqQueue)))
	{
		q->head = 0;//设置队头 
		q->tail = 0;//设置队尾
		return q; 
	}else
		return NULL; //返回空 
}

void SeqQueueFree(SeqQueue *q) //释放队列
{
	if(q != NULL)
		free(q);
}

int SeqQueueIsEmpty(SeqQueue *q)//队列是否为空 
{
	return (q->head = q->tail);
	//空  返回 1
	//非空  返回 0 
} 

//队列是否已满 
int SeqQueueIsFull(SeqQueue *q)
{
	return (q->tail == QUEUEMAX); 
} 

//获取队列长度 
int SeqQueueLen(SeqQueue *q) 
{
	return (q->tail - q->head); 
}

//顺序队列的入队函数
int SeqQueueIn(SeqQueue *q, DATA data)
{
	if(q->tail == QUEUEMAX)
	{
		printf("队列已满！\n");
		return 0;
	}
	else
	{
		q->data[q->tail++] = data;
		return 1;
	}
} 

//顺序队列的出队
DATA *SeqQueueOut(SeqQueue *q)
{
	if(q->head == q->tail)
	{
		printf("\n队列已空！\n");
		return NULL;
	}
	else
	{
		//返回出队元素的地址  
		return &(q->data[q->head++]);
	}
} 

//获取队头元素
DATA *SeqQueuePeek(SeqQueue *q)
{
	if(SeqQueueIsEmpty(q))
	{
		printf("\n队列为空!\n");
		return NULL;
	}
	else
	{
		return &(q->data[q->head]);
	}
}

