//ѭ������
#define QUEUEMAX 15
typedef struct
{
	DATA data[QUEUEMAX];//��������
	int head;//��ͷ 
	int tail;//��β 
}CycQueue;

CycQueue *CycQueueInit()
{
	CycQueue *q;
	if(q = (CycQueue *)malloc(sizeof(CycQueue)))
	{
		q->head = 0;//��ͷ 
		q->tail = 0;//��β
		return q; 
	}
	else
		return NULL;//���ؿ� 
}

//�ͷŶ��� 
void CycQueueFree(CycQueue *q)
{
	 if(q != NULL)
	 	free(q);
} 

//�����Ƿ�Ϊ�� 
int CycQueueIsEmpty(CycQueue *q) 
{
	return (q->head == q->tail);
}

//�����Ƿ�Ϊ��
int CycQueueIsFull(CycQueue *q)
{
	return ((q->tail + 1)%QUEUEMAX == q->head);
}

//��Ӻ��� 
int CycQueueIn(CycQueue *q, DATA data)  
{
	if((q->tail + 1)%QUEUEMAX == q->head)
	{
		printf("����������\n");
		return 0;
	}
	else
	{
		q->tail = (q->tail + 1)%QUEUEMAX; //���β���к�
		q->data[q->tail] = data;
		return 1; 
	}
} 

//ѭ�����г��� 
DATA *CycQueueOut(CycQueue *q)
{
	if(q->head == q->tail)
	{
		printf("�����ѿգ�\n");
		return NULL;
	}
	else
	{
		q->head = (q->head + 1) % QUEUEMAX;
		return &(q->data[q->head]);
	}	
} 

//��ȡ���г���
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
		printf("�����Ѿ�Ϊ�գ�\n");
		return NULL;
	}
	else
	{
		//������Ѱ��Ԫ�صĵ�ַ 
		return &(q->data[(q->head + 1) % QUEUEMAX]);
	}
}


