/*

	问题描述：魔术师利用一副牌中的13张黑牌，预先将它们排好后
	叠放在一起，排面朝下。对观众说：“我不看牌，只数数就可以猜到每张牌
	是什么，我大声数数，你们听， 不信？现场演示。”
		
		魔术师将最上面的那张牌数为1，把他翻过来正好是黑桃A，将黑桃A
	放在桌子上，第二次数1,2，将第一张牌放在这些牌的下面，将第二张
	牌翻过来，正好是黑桃2， 也将它放在桌子上这样依次进行将13张牌全部翻出，
	准确无误。
	
*/
 
// 利用循环链表解决问题
 
#include<stdio.h>
#include<stdlib.h>

#define CardNumber 13

//定义一个链表 
typedef struct node
{
	int data;
	struct node *next;
}sqlist, *linklist;


//链表初始化 
linklist CreateLinkList()
{
	linklist head = NULL;
	linklist s, r;  //定义两个指针 
	int i;
	
	r = head;
	
	for(i = 1; i <= CardNumber; i++)
	{
		s = (linklist)malloc(sizeof(sqlist));
		s->data = 0;//将所有数据初始化为0 
		
		if(head == NULL)
			head = s;
		else
			r->next = s;
		
		r = s;  //一直保持让r指针指向最后一个节点 
	}
	
	r->next = head;  //使尾节点r指向头结点， 构成循环链表 
	
	return head;
 } 
 
//发牌顺序计算
void Magician(linklist head)
{
	linklist p;
	int j;
	int Countnumber = 2;
	
	p = head;
	p->data = 1; //第一张牌放1
	
	while(1)
	{
		for(j = 0; j < Countnumber; j++)  //巧妙的循环 
		{
			p = p->next;
			if(p->data != 0)   //该位置有牌的话，则下一个位置
			{
				p->next;
				j--;
			} 
		}
		
		if(p->data == 0)
		{
			p->data = Countnumber;
			Countnumber++;   //将所有的牌初始化 
			
			if(Countnumber == 14)
				break;
		}
	} 
 } 
 

//销毁工作
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
	
	printf("按如下顺序排列可以使魔术成功：\n");
	
	for(i = 0; i < CardNumber; i++)
	{
		printf("黑桃%d \n", p->data);
		p = p->next;
	}
	
	DestoryList(&p);
	
	return 0;
 } 
















 
 
 
 
 
 
 
 
 
 
 
 
 
