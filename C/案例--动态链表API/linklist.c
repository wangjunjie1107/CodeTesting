#include "linklist.h"


//初始化链表 头插法
//函数返回值 创建好的链表的头结点
struct LinkNode* init_LinkNode()
{
	struct LinkNode* pHeader = malloc(sizeof(struct LinkNode));
	if (pHeader == NULL)
	{
		return NULL;
	}

	//头结点赋值
	pHeader->num = -1;
	pHeader->next = NULL;

	long long val = -1;
	while (1)
	{
		printf("请插入数据，输入-1代表插入结束（插入数据的方法为头插法）\n");

		scanf("%d", &val);
		if (val == -1)
		{
			break;
		}
		
		//创建新节点
		struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
		newNode->num = val;
		newNode->next = NULL;
		
		//挂链,头插法
		newNode->next = pHeader->next;
		pHeader->next = newNode;
		
		if (newNode->next == NULL)
		{
			struct LinkNode* pTail = newNode;
		}
	}
	return pHeader;
}

//找到尾节点
struct LinkNode * find_TailLinkNode(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		printf("pHeader == NULL !\n");
		return NULL;
	}
	if (pHeader->next == NULL)
	{
		printf("pHeader->next == NULL !\n");
		return NULL;
	}

	struct LinkNode* pCurrent = pHeader;
	while (pCurrent->next != NULL)
	{
		pCurrent = pCurrent->next;
	}

	if (pCurrent->next == NULL)
	{
		printf("find tail link node! the tail's value is %d\n", pCurrent->num);
		return pCurrent;
	}

}

//尾插法
struct LinkNode *  insert_LinkNodeatTail(struct LinkNode* pTail)
{
	if (pTail == NULL)
	{
		return NULL;
	}

	printf("请输入要插入的数据，将采用尾插法插入,输入-1放弃插入数据\n");
	int val = -1;
	scanf("%d", &val);
	if (val == -1)
	{
		return NULL;
	}

	//创建新节点
	struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
	newNode->num = val;

	//挂链
	newNode->next = NULL;
	pTail->next = newNode;

	printf("插入成功，返回尾节点\n");
	return newNode;

}

//遍历链表
void foreach_LinkList(struct LinkNode* pHeader)
{
	if (pHeader == NULL || pHeader->next == NULL)
	{
		return;
	}

	//记录打印到第几个结点
	int count = 0;
	//记录当前有效结点（头结点无效）
	struct LinkNode* pCurrent1 = pHeader->next;
	struct LinkNode* pCurrent2 = pHeader->next;

	//遍历链表,先统计有多少个结点
	do
	{
		count++;
		pCurrent1 = pCurrent1->next;
	} while (pCurrent1 != NULL);
	printf("一共有 %d 个结点\n", count);

	count = 0; //重置count  
	//打印结点
	do
	{
		count++;
		printf("结点_%d : %d\n", count, pCurrent2->num);
		pCurrent2 = pCurrent2->next;
	}while(pCurrent2 != NULL);
	
	return;
}

//插入结点功能 在所有符合数据的位置插入数据
void insert_LinkList(struct LinkNode* pHeader, int oldVal, int newVal)
{
	if (pHeader == NULL)
	{
		return;
	}
	
	struct LinkNode* pCurrent = pHeader->next;

	
	int count = 0;
	while (pCurrent != NULL)
	{
		

		if (pCurrent->num == oldVal)
		{
			//找到了要插入的位置后才创建新节点
			struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
			newNode->num = newVal;
			newNode->next = NULL;

			//计数 并插入结点
			count++;
			newNode->next = pCurrent->next;
			pCurrent->next = newNode;

			printf("第 %d 次插入成功！\n",count);
		}

		pCurrent = pCurrent->next;
	}

	if (pCurrent == NULL && count == 0)
	{
		printf("插入失败，未找到插入位置，可能是插入的旧数据有误！\n");
		return;
	}

	if (pCurrent == NULL && count != 0)
	{
		printf("全部插入完成！\n");
		return;
	}

}

//删除结点
void delete_LinkList(struct LinkNode* pHeader, int delVal)
{
	if (pHeader == NULL || pHeader->next == NULL)
	{
		return NULL;
	}

	//纪录剩余结点数
	int count = 0;
	struct LinkNode* pCount = pHeader->next;
	while (pCount != NULL)
	{
		count++;
		pCount = pCount->next;
	}

	//删除结点需要两个节点一起操作
	struct LinkNode* pCurrent = pHeader->next;
	struct LinkNode* pFront = pHeader;

	while (pCurrent != NULL)
	{
		if (pCurrent->num == delVal)
		{
			//删除结点  

			//1.挂链
			pFront->next = pCurrent->next;

			//2.释放堆区空间
			free(pCurrent);
			pCurrent = NULL;

			printf("已经成功删除结点!\n");
			printf("剩余结点数目为 %d\n", count - 1);
			return;
		}

		pCurrent = pCurrent->next;
		pFront = pFront->next;
	}

	if (pCurrent == NULL)
	{
		printf("删除失败，未找到要删除的结点！\n");
		return;
	}

	
}

//清空链表
void clear_LinkNode(struct LinkNode* pHeader)
{
	if (pHeader == NULL || pHeader->next == NULL)
	{
		return;
	}

	struct LinkNode* pCurrent = pHeader->next;
	struct LinkNode* pNext = NULL; //纪录下一个节点位置
	while (pCurrent != NULL)
	{
		pNext = pCurrent->next;

		free(pCurrent);
		pCurrent = pNext;
	}
	pHeader->next = NULL;
	return;
}

//销毁链表
void destory_LinkNode(struct LinkNode* pHeader)
{
	if (pHeader == NULL)
	{
		return;
	}

	//先清空链表
	struct LinkNode* pCurrent = pHeader->next;
	struct LinkNode* pNext = NULL; //纪录下一个节点位置
	while (pCurrent != NULL)
	{
		pNext = pCurrent->next;

		free(pCurrent);
		pCurrent = pNext;
	}
	pHeader->next = NULL;

	free(pHeader);
	pHeader = NULL;
	return;
}