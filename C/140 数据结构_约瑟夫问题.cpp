#include<stdio.h>
#include<stdlib.h>
 
/*
   在罗马人占领乔塔帕特后，39个犹太人与Josephus及他的朋友
 躲在一个洞中，39个犹太人决定宁愿死也不要被敌人抓到，于是
 决定了一个自杀方式，41个人排成一个圆圈，由1个人开始报数，
 每报数到第3人该人就必须自杀，然后再由下一个重新报数，直到
 所有人都自杀身亡为止。
 	
	 然而Josephus和他的朋友并不想遵从，Josephus要他的朋友先假装
 遵从，他将朋友与自己安排在第16个与第31个位置，于是逃过了这场死亡游戏。
 
*/

//用循环链表模拟约瑟夫问题，把41个人自杀的顺序编号输出

//n个人围圈报数，报m出列，最后剩下的是几号？

typedef struct node
{
	int data;
	struct node *next;
}node;

node *create(int n)
{
	node *p = NULL, *head;
	head = (node*)malloc(sizeof(node));
	p = head;
	node *s;
	int i = 1;
	
	if( 0 != n )
	{
		while( i <= n)
		{
			s = (node*)malloc(sizeof(node));
			s->data = i++;
			p->data = s;
			p = s;
		}
		s->next = head->next;
	}
	
	free(head); 
	
	return s->next;
}

int main()
{
	int n = 41;
	int m = 3;
	int i;
	
	node *p = create(n);
	node *temp;
	
	m %= n;
	
	while(p != p->next)
	{
		for(i = 1; i < m-1; i++)
		{
			p = p->next;
		}
		
		printf("%d->", p->next->data);
		temp = p->next; //删除第m个结点
		p->next = temp->next;
		
		free(temp);
		
		p = p->next;   
	}
	
	printf("%d\n", p->data);
	
	return 0;
}




















 
