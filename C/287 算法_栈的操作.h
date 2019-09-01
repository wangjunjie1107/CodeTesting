typedef struct stack
{
	DATA data[SIZE + 1];
	int top;
}SeqStack;

//申请栈内存 
SeqStack *SeqStackInit()
{
	SeqStack *p;
	
	if(p = (SeqStack *)malloc(sizeof(SeqStack)))
	{
		p->top = 0; //设置栈顶为0
		return 0; //返回指向栈的指针 
	}
	
	return NULL; 
}

//判断栈是否为空 
int SeqStackIsEmpty(SeqStack *s)
{
	return (s->top == 0);
}


//释放栈所占用空间 
void SeqStackFree(SeqStack *s)
{
	if(s)
		free(s); 
}

//清空栈 
void SeqStackClear(SeqStack *s) 
{
	s->top = 0;
}

//判断栈是否已满
int SeqStackIsFull(SeqStack *s)
{
	return (s->top == SIZE);
}

//入栈操作 
int SeqStackPush(SeqStack *s, DATA data) 
{
	if( (s->top + 1) > SIZE)
	{
		printf("栈溢出！\n");
		return 0;
	}
	
	//将元素入栈 
	s->data[++s->top] = data;
	
	return 1; 
}

//出栈操作 
DATA SeqStackPop(SeqStack *s) 
{
	if(s->top == 0)
	{
		printf("栈为空！");
		exit(0); 
	}
	
	//返回数据，并使top指向栈顶元素 
	return (s->data[s->top--]);
}

//读栈顶数据 
DATA SeqStackPeek(SeqStack *s) 
{
	if(s->top == 0)
	{
		printf("栈为空！");
		exit(0); 
	}
	
	return (s->data[s->top]);
}

