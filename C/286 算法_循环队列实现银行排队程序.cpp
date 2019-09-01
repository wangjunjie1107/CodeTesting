#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct
{
	int num;//�˿ͱ��
	long time; //�������ʱ�� 
}DATA;

#include "286 �㷨_ѭ�����в���.h"

int num; //�˿����

//��ӹ˿ͽ������ 
void add(CycQueue *q)
{
	DATA data;
	
	//�������δ�� 
	if(!CycQueueIsFull(q))
	{
		data.num = ++num;
		data.time = time(NULL);
		CycQueueIn(q,data);
	}
	else
		printf("\n�Ŷӵ���̫�࣬���Ժ����Ŷӣ�\n"); 
}

//֪ͨ��һ�˿�׼��
void next(CycQueue *q)
{
	DATA *data;
	
	//�����в�Ϊ�� 
	if(!CycQueueIsEmpty(q))
	{
		data = CycQueueOut(q);//ȡ����ͷ��������
		printf("\n����Ϊ%d�Ĺ˿Ͱ���ҵ��\n", data->num); 
	}
	
	//�����в�Ϊ�� 
	if(!CycQueueIsEmpty(q))
	{
		data = CycQueuePeek(q);//ȡ������ָ��λ�õ����� 
		printf("\n����Ϊ%d�Ĺ˿�׼��������Ϊ������ҵ��\n", data->num); 
	}
}

int main()
{
	CycQueue *queue1;
	int i, n;
	char select;
	
	num = 0; //�˿���� 
	queue1 = CycQueueInit(); //��ʼ������
	
	if(queue1 == NULL)
	{
		printf("��������ʱ����\n");
		getchar();
		return 0; 
	}
	
	do{
		printf("\n��ѡ����������\n");
		printf("1.�µ��˿�\n");
		printf("2.��һ���˿�\n");
		printf("0.�˳�\n");
		
		fflush(stdin);
		
		select = getchar();
		switch(select)
		{
			case '1':
				add(queue1);
				printf("\n���ڹ���%dλ�˿��ڵȺ�\n",CycQueueLen(queue1));
				break;
			
			case '2':
				next(queue1);
				printf("\n���ڹ���%dλ�˿��ڵȺ�\n",CycQueueLen(queue1));
				break;
			
			case '0':
				break;
		}
	}while(select != '0');
	
	CycQueueFree(queue1); //�ͷŶ���
	
	getchar();
	return 0; 
} 


 
