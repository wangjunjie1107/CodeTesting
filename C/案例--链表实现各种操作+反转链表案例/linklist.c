#include "linklist.h"

//结点结构体
struct LinkNode
{
	//数据域
	int num;

	//指针域
	struct LinkNode * nextNode;
};
//初始化链表
//函数返回值 创建好的链表的头结点
struct LinkNode * init_LinkList()
{
	struct LinkNode * pHeader = malloc(sizeof(struct LinkNode));
	if (pHeader == NULL)
	{
		return NULL;
	}

	//头结点不维护数据域
	pHeader->num = -1;
	pHeader->nextNode = NULL;

	//创建尾节点指针 用户记录当前链表尾部节点位置，方便做尾插
	struct LinkNode * pTail = pHeader;
	int val = -1;
	while (1)
	{
		printf("请插入数据，输入-1代表插入结束\n");

		scanf("%d", &val);

		if (val == -1)
		{
			break;
		}

		//创建新节点
		struct LinkNode * newNode = malloc(sizeof(struct LinkNode));
		newNode->num = val;
		newNode->nextNode = NULL;

		//更新结点指向
		pTail->nextNode = newNode;
		pTail = newNode;
	}

	//返回给用户
	return pHeader;
}

//遍历链表
void foreach_LinkList(struct LinkNode * pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}
	//当前结点 指向第一个有真实数据结点
	struct LinkNode * temp = pHeader->nextNode;

	while (temp != NULL)
	{
		printf("%d ", temp->num);
		temp = temp->nextNode;
	}
}

//插入结点功能
void insert_LinkList(struct LinkNode * pHeader, int oldVal,int newVal)
{
	while (pHeader == NULL)
	{
		return;
	}

	//创建两个临时指针实现结点插入
	struct LinkNode * pPrev = pHeader;
	struct LinkNode * pCurrent = pHeader->nextNode;
	
	while (pCurrent != NULL)
	{
		if (pCurrent->num == oldVal)
		{
			//找到了要插入的地方
			break;
		}

		//未找到 则两个辅助指针向后移动
		pPrev = pCurrent;
		pCurrent = pCurrent->nextNode;
	}

	//创建新节点
	struct LinkNode * newNode = malloc(sizeof(struct LinkNode));
	newNode->num = newVal;
	newNode->nextNode = NULL;

	//挂链
	newNode->nextNode = pCurrent;
	pPrev->nextNode = newNode;
}

//删除节点功能
void delete_LinkList(struct LinkNode * pHeader, int delVal)
{
	if (pHeader == NULL)
	{
		return;
	}

	//创建两个辅助指针变量
	struct LinkNode * pPrev = pHeader;
	struct LinkNode * pCurrent = pHeader->nextNode;

	while (pCurrent != NULL)
	{
		if (pCurrent->num == delVal)
		{
			break;
		}

		//如果没找到 指针继续向后移动
		pPrev = pCurrent;
		pCurrent =pCurrent->nextNode;
	}

	if (pCurrent == NULL)
	{
		//属于没有找到用户想删除的结点
		return;
	}

	//找到后 更改指针指向
	pPrev->nextNode = pCurrent->nextNode;
	free(pCurrent);
	pCurrent = NULL;
}

//清空链表
void clear_LinkList(struct LinkNode * pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}

	//创建临时结点
	struct LinkNode * pCurrent = pHeader;

	while (pCurrent != NULL)
	{
		//先记录下一个结点
		struct LinkNode * temp = pCurrent->nextNode;
		free(pCurrent);
		pCurrent = temp;
	}
	pHeader->nextNode = NULL;
}

//销毁链表
void destroy_LinkList(struct LinkNode * pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}

	//临时指针
	struct LinkNode * pCurrent = pHeader;
	while (pCurrent != NULL)
	{
		//记录下一个结点
		struct LinkNode * temp = pCurrent->nextNode;
		free(pCurrent);
		pCurrent = temp;
	}
	//将头结点也释放
	//销毁和清空的区别就是是否释放头结点
	free(pHeader);
	pHeader = NULL;
}


//按位置删除结点
void deleteSite_LinkList(struct LinkNode * pHeader, int site)
{
	if(pHeader == NULL)
	{
		return;
	}
	if(site < 1) //从第一个结点开始，才可以删除 
	{
		return;
	}
	
	//创建临时指针
	struct LinkNode * temp = pHeader->nextNode;
	struct LinkNode * pPrev = pHeader;
	int count = 1;//记录位置 
	
	while(temp != NULL) 
	{
		if(count == site)
		{
			break;
		}
		
		count++;
		pPrev = temp;
		temp = temp->nextNode;
		
	} 
	
	//未找到要删除的位置 
	while(temp == NULL)
	{
		return;
	} 
	
	//删除结点  此时temp指向的位置是要删除的结点
	pPrev->nextNode = temp->nextNode;
	free(temp);
	temp = NULL;
} 

//按位置查找结点  会打印结点的值 
void researchSite_LinkList(struct LinkNode * pHeader, int site)
{
	if(pHeader == NULL)
	{
		return;
	}
	if(site < 1) //从第一个结点开始，才可以查找 
	{
		return;
	}
	
	//创建临时指针
	struct LinkNode * temp = pHeader->nextNode;
	struct LinkNode * pPrev = pHeader;
	int count = 1;//记录位置 
	
	while(temp != NULL) 
	{
		if(count == site)
		{
			break;
		}
		
		count++;
		pPrev = temp;
		temp = temp->nextNode;
		
	} 
	
	//未找到 
	while(temp == NULL)
	{
		return;
	} 
	
	//打印结点  此时temp指向的位置是要查找的结点
	printf("%d ",temp->num); 

}  

//获取链表长度 
int strlen_LinkList(struct LinkNode * pHeader)
{
	if(pHeader == NULL)
	{
		return;
	}
	
	//创建临时结点
	struct LinkNode * temp = pHeader;
	int len = 0;//结点长度计数 
	while(temp->nextNode != NULL)
	{
		len++;
		temp = temp->nextNode;
			
	} 
	
	return len;
}

//反转链表  只将结果值反转打印， 并不实际将链表相反链接  
void reverseValue_LinkList(struct LinkNode * pHeader)
{
	if(pHeader == NULL)
	{
		return;
	}
	
	//获取链表长度 
	int lens = strlen_LinkList(pHeader);
	 
	//按位置查找链表的值 并打印 
	int i = 0;
	for(i = lens; i > 0; i--)
	{
		researchSite_LinkList(pHeader, i);
	} 
}

//反转链表  实际将链表相反链接  
void reverseLink_LinkList(struct LinkNode * pHeader)
{
	if(pHeader == NULL)
	{
		return;
	}
	
	//创建三个结构体指针 实现链表的反转
	struct LinkNode * pPrev = NULL; 
	struct LinkNode * pCurrent = pHeader->nextNode; 
	struct LinkNode * pNext = NULL;
	
	while(pCurrent != NULL)
	{
		//先记录下一个结点
		pNext = pCurrent->nextNode;
		
		//更改指针指向  往回指
		pCurrent->nextNode = pPrev;
		
		//更改两个辅助指针的指向
		pPrev = pCurrent;
		pCurrent = pNext; 
	}
	
	//将头结点链接到第一个结点上
	pHeader->nextNode = pPrev; 
} 





















