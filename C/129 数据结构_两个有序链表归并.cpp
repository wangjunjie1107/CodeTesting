#include<stdio.h>

void MergeList(LinkList &La, LinkList &Lb)
{
	//�鲢�����ǵݼ�������La��Lb���γ��µ�La
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
