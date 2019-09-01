typedef struct stack
{
	DATA data[SIZE + 1];
	int top;
}SeqStack;

//����ջ�ڴ� 
SeqStack *SeqStackInit()
{
	SeqStack *p;
	
	if(p = (SeqStack *)malloc(sizeof(SeqStack)))
	{
		p->top = 0; //����ջ��Ϊ0
		return 0; //����ָ��ջ��ָ�� 
	}
	
	return NULL; 
}

//�ж�ջ�Ƿ�Ϊ�� 
int SeqStackIsEmpty(SeqStack *s)
{
	return (s->top == 0);
}


//�ͷ�ջ��ռ�ÿռ� 
void SeqStackFree(SeqStack *s)
{
	if(s)
		free(s); 
}

//���ջ 
void SeqStackClear(SeqStack *s) 
{
	s->top = 0;
}

//�ж�ջ�Ƿ�����
int SeqStackIsFull(SeqStack *s)
{
	return (s->top == SIZE);
}

//��ջ���� 
int SeqStackPush(SeqStack *s, DATA data) 
{
	if( (s->top + 1) > SIZE)
	{
		printf("ջ�����\n");
		return 0;
	}
	
	//��Ԫ����ջ 
	s->data[++s->top] = data;
	
	return 1; 
}

//��ջ���� 
DATA SeqStackPop(SeqStack *s) 
{
	if(s->top == 0)
	{
		printf("ջΪ�գ�");
		exit(0); 
	}
	
	//�������ݣ���ʹtopָ��ջ��Ԫ�� 
	return (s->data[s->top--]);
}

//��ջ������ 
DATA SeqStackPeek(SeqStack *s) 
{
	if(s->top == 0)
	{
		printf("ջΪ�գ�");
		exit(0); 
	}
	
	return (s->data[s->top]);
}

