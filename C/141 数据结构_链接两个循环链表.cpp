#include<stdio.h>

//����A��BΪ�ǿ�ѭ�������βָ��
LinkList Connect(LinkList A, LinkList B)
{
	LinkList p = A->next; //����A���ͷ���λ��
	
	A->next = B->next->next; //B��Ŀ�ʼ������ӵ�A��β
	
	free(B->next); //�ͷ�B���ͷ��㣬��ѧ����������
	
	B->next = p;
	
	return B; 
 } 
