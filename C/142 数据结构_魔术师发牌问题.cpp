/*

	����������ħ��ʦ����һ�����е�13�ź��ƣ�Ԥ�Ƚ������źú�
	������һ�����泯�¡��Թ���˵�����Ҳ����ƣ�ֻ�����Ϳ��Բµ�ÿ����
	��ʲô���Ҵ����������������� ���ţ��ֳ���ʾ����
		
		ħ��ʦ�����������������Ϊ1�����������������Ǻ���A��������A
	���������ϣ��ڶ�����1,2������һ���Ʒ�����Щ�Ƶ����棬���ڶ���
	�Ʒ������������Ǻ���2�� Ҳ���������������������ν��н�13����ȫ��������
	׼ȷ����
	
*/
 
// ����ѭ������������
 
#include<stdio.h>
#include<stdlib.h>

#define CardNumber 13

//����һ������ 
typedef struct node
{
	int data;
	struct node *next;
}sqlist, *linklist;


//�����ʼ�� 
linklist CreateLinkList()
{
	linklist head = NULL;
	linklist s, r;  //��������ָ�� 
	int i;
	
	r = head;
	
	for(i = 1; i <= CardNumber; i++)
	{
		s = (linklist)malloc(sizeof(sqlist));
		s->data = 0;//���������ݳ�ʼ��Ϊ0 
		
		if(head == NULL)
			head = s;
		else
			r->next = s;
		
		r = s;  //һֱ������rָ��ָ�����һ���ڵ� 
	}
	
	r->next = head;  //ʹβ�ڵ�rָ��ͷ��㣬 ����ѭ������ 
	
	return head;
 } 
 
//����˳�����
void Magician(linklist head)
{
	linklist p;
	int j;
	int Countnumber = 2;
	
	p = head;
	p->data = 1; //��һ���Ʒ�1
	
	while(1)
	{
		for(j = 0; j < Countnumber; j++)  //�����ѭ�� 
		{
			p = p->next;
			if(p->data != 0)   //��λ�����ƵĻ�������һ��λ��
			{
				p->next;
				j--;
			} 
		}
		
		if(p->data == 0)
		{
			p->data = Countnumber;
			Countnumber++;   //�����е��Ƴ�ʼ�� 
			
			if(Countnumber == 14)
				break;
		}
	} 
 } 
 

//���ٹ���
void DestoryList(linklist *list)
{
	linklist ptr = *list;
	linklist buff[CardNumber];
	int i = 0;
	
	while(i < CardNumber)
	{
		buff[i++] = ptr;
		ptr = ptr->next; 
	}
	
	for(i = 0; i < CardNumber; i++)
	{
		free(buff[i]);
	}
	
	*list = 0; 
}

int main()
{
	linklist p;
	int i;
	
	p = CreateLinkList();
	Magician(p);
	
	printf("������˳�����п���ʹħ���ɹ���\n");
	
	for(i = 0; i < CardNumber; i++)
	{
		printf("����%d \n", p->data);
		p = p->next;
	}
	
	DestoryList(&p);
	
	return 0;
 } 
















 
 
 
 
 
 
 
 
 
 
 
 
 
