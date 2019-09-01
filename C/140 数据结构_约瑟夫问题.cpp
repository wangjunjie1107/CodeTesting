#include<stdio.h>
#include<stdlib.h>
 
/*
   ��������ռ���������غ�39����̫����Josephus����������
 ����һ�����У�39����̫�˾�����Ը��Ҳ��Ҫ������ץ��������
 ������һ����ɱ��ʽ��41�����ų�һ��ԲȦ����1���˿�ʼ������
 ÿ��������3�˸��˾ͱ�����ɱ��Ȼ��������һ�����±�����ֱ��
 �����˶���ɱ����Ϊֹ��
 	
	 Ȼ��Josephus���������Ѳ�������ӣ�JosephusҪ���������ȼ�װ
 ��ӣ������������Լ������ڵ�16�����31��λ�ã������ӹ����ⳡ������Ϸ��
 
*/

//��ѭ������ģ��Լɪ�����⣬��41������ɱ��˳�������

//n����ΧȦ��������m���У����ʣ�µ��Ǽ��ţ�

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
		temp = p->next; //ɾ����m�����
		p->next = temp->next;
		
		free(temp);
		
		p = p->next;   
	}
	
	printf("%d\n", p->data);
	
	return 0;
}




















 
