#include<string.h>
 
//添加结点到链表尾部 
ChainListType *ChainListAddEnd(ChainListType *head, DATA data)
{
	ChainListType *node, *h;
	
	if(!(node = (ChainListType *)malloc(sizeof(ChainListType))))
	{
		printf("为保存结点数据申请内存失败！\n");
		return NULL; //分配内存失败 
	}
	
	node->data = data;  //保存数据 
	node->next = NULL; //设置结点指针为空，即为表尾
	
	if(head == NULL) 	//链表头结点指向空
	{
		head = node;	//让头结点指向插入的结点 
		return head;	//返回头结点 
	}
	
	
	h = head;//定义一个指针，指向头结点，让它从头结点开始往下查找，直到找到尾节点 
	while(h->next != NULL) //查找链表的末尾
	{
		h = h->next;
	}		
	h->next = node;
	return head;
}

//添加结点到链表头部 
ChainListType *ChainListAddFirst(ChainListType *head, DATA data)
{
	ChainListType *node, *h;
	
	if(!(node = (ChainListType *)malloc(sizeof(ChainListType))))
	{
		printf("为保存结点数据申请内存失败！\n");
		return NULL; //分配内存失败 
	}
	
 
	node->data = data;  //保存数据 
	
	//挂链操作
	node->next = head; //指向头指针所指结点
	head = node;		//头指针指向新增结点 
	
	return head; 
} 

//将结点插入到链表当中 
ChainListType *ChainListInsert(ChainListType *head, char *findkey, DATA data)
{
	ChainListType *node, *node1;
	
	//为新节点分配内存空间，准备装入数据 
	if(!(node = (ChainListType *)malloc(sizeof(ChainListType))))
	{
		printf("为保存结点数据申请内存失败！\n");
		return NULL; //分配内存失败 
	}
	
	node->data = data;	//保存结点中的数据 
	node1 = ChainListFind(head, findkey);
	
	if(node1)  //若找到要插入的位置，也就是在哪个结点之后插入 
	{
		//挂链操作 
		node->next  = node1->next;
		node1->next = node;
	}
	else{
		free(node); //释放内存
		printf("未找到插入位置！\n");  
	} 
	
	return head; //返回头指针 
}

//按关键字在链表中查找  
ChainListType *ChainListFind(ChainListType *head, char *key)
{
	ChainListType *h;
	h = head; //保存链表头指针
	
	while(h) //若结点有效，则进行查找 
	{
		//若关键字与传入关键字相同	 
		if(strcmp(h->data.key, key) == 0)
			return h;  //返回该结点指针
			
		h = h->next; //继续查找下一结点 
	}
	
	return NULL;  //返回空指针，表示未找到	
} 


//删除指定关键字的结点
int  ChainListDelete(ChainListType *head, char *key)
{
	ChainListType *node, *h;//node保存删除结点的前一个结点 
	node = h = head;
	
	while(h) //当 h ！= NULL 时 
	{
		if(strcmp(h->data.key, key) == 0)//找到要删除的结点
		{
			node->next = h->next;//使前一结点指向当前结点的下一个结点
			free(h);//释放内存
			return 1; 
		}
		else
		{
			node = h; //指向当前结点
			h = h->next; //指向下一结点 
		}
	}
	
	return 0;//未找到要删除的结点 
}

//获取链表长度 
int ChainListLength(ChainListType *head) 
{
	ChainListType *h;
	int i = 0; //计数
	h = head;
	
	while(h)  //遍历整个链表 
	{
		i++;  //累加结点数量 
		h = h->next; //处理下一结点 
	}
	return i; //返回结点数量 
} 
  
