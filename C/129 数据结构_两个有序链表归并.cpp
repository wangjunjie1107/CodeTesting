#include<stdio.h>

void MergeList(LinkList &La, LinkList &Lb)
{
	//归并两个非递减单链表La、Lb，形成新的La
	pa = La->next;
	pb = Lb->next;
	q = La;
	
	while(pa && pb)
	{
		if(pa->data <= pb->data)
		{
			q = pa;
			pa = pa->next;
		}
		else
		{
			t = pb;
			pb = pb->next;
			t->next = pa;
			q->next = t;
			q = t; 
		}
	
	} 
	if(pb)
	{
		q->next = pb;
	}
	 
 } 
