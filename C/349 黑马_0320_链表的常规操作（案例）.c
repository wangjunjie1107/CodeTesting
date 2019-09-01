#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>

//使用结构体定义结点类型
typedef struct _LINKNODE
{
	int data; //数据域
	struct _LINKNODE * next; //指针域
}link_node;

//创建链表
link_node * init_linklist()
{
	//创建头结点指针
	link_node * head = NULL;
	//给头结点分配内存
	head = (link_node *)malloc(sizeof(link_node));
	if (head == NULL)
	{
		return NULL;
	}

	head->data = -1;
	head->next = NULL;

	//保存当前结点
	link_node * p_current = head;
	int data = -1;

	//通过循环体向链表中插入结点
	while (1)
	{
		printf("Please input data(input -1, then out):\n");
		scanf("%d", &data);

		//如果输入-1，则退出循环
		if (data == -1)
		{
			break;
		}

		//给新节点分配内存
		link_node * newnode = (link_node *)malloc(sizeof(link_node));
		if (newnode == NULL)
		{
			printf("给新节点分配内存失败！\n");
			break;
		}

		//给结点赋值
		newnode->data = data;
		newnode->next = NULL;

		//新节点入链表
		p_current->next = newnode;

		//更新赋值指针p_current
		p_current = newnode;
	}

	return head; //返回头结点
}

//遍历链表
void foreach_linklist(link_node * head)
{
	if (head == NULL)
	{
		printf("headnode is empty！\n");
		return;
	}

	//赋值指针变量
	link_node * p_current = head->next;
	int count = 1;

	while (p_current != NULL)
	{
		printf("第%d个数据为：%d\n", count, p_current->data);
		
		p_current = p_current->next;
		count++;
	}
	printf("\n");

}


//插入结点   在值val前插入结点  如果找不到val 则将新节点插入到链表尾部
void insert_linklist(link_node * head, int val, int data)
{
	if (head == NULL)
	{
		printf("headnode is empty！\n");
		return;
	}

	//两个辅助指针
	link_node * p_prev = head;  //这个指针是为了找p_current之前的结点，因为要在val之前插入
	link_node * p_current = p_prev->next;

	while (p_current != NULL)
	{
		if (p_current->data == val)
		{
			printf("找到了要插入的位置\n");
			break; //成功找到要插入的地点
		}
		p_prev = p_current;
		p_current = p_current->next;
	}

	//如果p_current为NULL，说明不存在值为val的节点
	if (p_current == NULL)
	{
		printf("不存在值为%d的节点，直接将结点插入到链表尾部\n", val);
	}

	//创建新的节点
	link_node * newnode = (link_node *)malloc(sizeof(link_node));
	newnode->data = data;
	newnode->next = NULL;

	//新节点入链表  挂链  先挂后面的链，后挂前面的链
	newnode->next = p_current;  //如果p_current = NULL，也就是未找到val  则新节点插入在链表的最后
	p_prev->next = newnode;


	//交互性
	if (newnode->next == NULL)
		printf("已经成功插入在链表尾部\n");
	else
		printf("已经成功将新节点插入在val之前"); 

}

//删除结点
void remove_linklist(link_node * head, int data)
{
	if (head == NULL)
	{
		printf("headnode is empty！\n");
		return;
	}

	//辅助指针
	link_node * p_prev = head;
	link_node * p_current = p_prev->next;

	//查找值为val的结点
	while (p_current != NULL)
	{
		if (p_current->data == data)
		{
			printf("找到了要删除的结点！\n");
			break;
		}
		//继续后移寻找
		p_prev = p_current;
		p_current = p_current->next;
	}

	//如果未找到要删除的数据，则返回
	if (p_current == NULL)
	{
		printf("未找到要删除的结点\n");
		return;
	}

	//删除当前结点
	p_prev->next = p_current->next;  //挂链
	free(p_current); //释放要删除结点的空间
	printf("已经成功删除结点！\n");

}

//销毁链表
void destroy_linklist(link_node * head)
{
	if (head == NULL)
	{
		printf("链表已经为空！\n");
		return;
	}

	//赋值指针
	link_node * p_current = head;
	link_node * p_next = NULL;
	while (p_current != NULL)
	{
		//缓存当前的下一个结点
		//如果p_current->next 为NULL，则p_next这个指针已经指向NULL了
		//就不用再使这个指针指向NULL了
		 p_next = p_current->next;

		//释放当前结点的堆空间
		free(p_current);

		//继续指向下一个结点
		p_current = p_next;
	}

	printf("链表销毁完毕！\n");
}

void test()
{
	//创建链表
	link_node * nowHead = init_linklist();

	//遍历链表
	foreach_linklist(nowHead);

	//在值val前插入结点,如果val不存在，则在尾部插入
	printf("是否要插入数据？输入1表示要插入数据，其他退出：");
	int num = 0;		
	scanf("%d",&num); 
	while(num == 1)
	{
		int val;
		int data;
		printf("要将结点插入到那个值之前？\n");
		scanf("%d", &val);
		printf("要插入的数据是多少？\n");
		scanf("%d", &data);
		insert_linklist(nowHead, val, data);
		printf("\n插入结点后链表的数据为：\n");
		foreach_linklist(nowHead);
		
		printf("是否继续插入？输入1表示要插入数据，其他退出：");
		int num1 = 0;
		scanf("%d",&num1); 
		if(num1 == 1)
			num = 1;
		else 
			break;
	}
	

	//删除结点
	int data1 = 0;
	printf("\n请输入要删除的数据：");
	scanf("%d", &data1);
	remove_linklist(nowHead, data1);
	printf("删除结点后链表的数据为：\n");
	foreach_linklist(nowHead);


	//销毁链表
	printf("\n是否要销毁链表？输入1表示销毁，其他退出：");
	int data2 = 0;
	scanf("%d", &data2);
	if(data2 == 1)
	{
		destroy_linklist(nowHead);
	}
	else
		return;
}


int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
