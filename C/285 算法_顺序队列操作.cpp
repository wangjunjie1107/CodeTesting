//˳����в���
#define QUEUEMAX 15

typedef struct
{
	DATA data[QUEUEMAX]; //��������
	int head;//��ͷ 
	int tail;//��β 
}SeqQueue;

SeqQueue *SeQueueInit()
{
	SeqQueue *q;
	//���뱣����е��ڴ� 
	if(q = (SeqQueue *)malloc(sizeof(SeqQueue)))
	{
		q->head = 0;//���ö�ͷ 
		q->tail = 0;//���ö�β
		return q; 
	}else
		return NULL; //���ؿ� 
}

void SeqQueueFree(SeqQueue *q) //�ͷŶ���
{
	if(q != NULL)
		free(q);
}

int SeqQueueIsEmpty(SeqQueue *q)//�����Ƿ�Ϊ�� 
{
	return (q->head = q->tail);
	//��  ���� 1
	//�ǿ�  ���� 0 
} 

//�����Ƿ����� 
int SeqQueueIsFull(SeqQueue *q)
{
	return (q->tail == QUEUEMAX); 
} 

//��ȡ���г��� 
int SeqQueueLen(SeqQueue *q) 
{
	return (q->tail - q->head); 
}

//˳����е���Ӻ���
int SeqQueueIn(SeqQueue *q, DATA data)
{
	if(q->tail == QUEUEMAX)
	{
		printf("����������\n");
		return 0;
	}
	else
	{
		q->data[q->tail++] = data;
		return 1;
	}
} 

//˳����еĳ���
DATA *SeqQueueOut(SeqQueue *q)
{
	if(q->head == q->tail)
	{
		printf("\n�����ѿգ�\n");
		return NULL;
	}
	else
	{
		//���س���Ԫ�صĵ�ַ  
		return &(q->data[q->head++]);
	}
} 

//��ȡ��ͷԪ��
DATA *SeqQueuePeek(SeqQueue *q)
{
	if(SeqQueueIsEmpty(q))
	{
		printf("\n����Ϊ��!\n");
		return NULL;
	}
	else
	{
		return &(q->data[q->head]);
	}
}

