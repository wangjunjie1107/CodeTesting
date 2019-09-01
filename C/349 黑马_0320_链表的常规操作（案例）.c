#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>

//ʹ�ýṹ�嶨��������
typedef struct _LINKNODE
{
	int data; //������
	struct _LINKNODE * next; //ָ����
}link_node;

//��������
link_node * init_linklist()
{
	//����ͷ���ָ��
	link_node * head = NULL;
	//��ͷ�������ڴ�
	head = (link_node *)malloc(sizeof(link_node));
	if (head == NULL)
	{
		return NULL;
	}

	head->data = -1;
	head->next = NULL;

	//���浱ǰ���
	link_node * p_current = head;
	int data = -1;

	//ͨ��ѭ�����������в�����
	while (1)
	{
		printf("Please input data(input -1, then out):\n");
		scanf("%d", &data);

		//�������-1�����˳�ѭ��
		if (data == -1)
		{
			break;
		}

		//���½ڵ�����ڴ�
		link_node * newnode = (link_node *)malloc(sizeof(link_node));
		if (newnode == NULL)
		{
			printf("���½ڵ�����ڴ�ʧ�ܣ�\n");
			break;
		}

		//����㸳ֵ
		newnode->data = data;
		newnode->next = NULL;

		//�½ڵ�������
		p_current->next = newnode;

		//���¸�ֵָ��p_current
		p_current = newnode;
	}

	return head; //����ͷ���
}

//��������
void foreach_linklist(link_node * head)
{
	if (head == NULL)
	{
		printf("headnode is empty��\n");
		return;
	}

	//��ֵָ�����
	link_node * p_current = head->next;
	int count = 1;

	while (p_current != NULL)
	{
		printf("��%d������Ϊ��%d\n", count, p_current->data);
		
		p_current = p_current->next;
		count++;
	}
	printf("\n");

}


//������   ��ֵvalǰ������  ����Ҳ���val ���½ڵ���뵽����β��
void insert_linklist(link_node * head, int val, int data)
{
	if (head == NULL)
	{
		printf("headnode is empty��\n");
		return;
	}

	//��������ָ��
	link_node * p_prev = head;  //���ָ����Ϊ����p_current֮ǰ�Ľ�㣬��ΪҪ��val֮ǰ����
	link_node * p_current = p_prev->next;

	while (p_current != NULL)
	{
		if (p_current->data == val)
		{
			printf("�ҵ���Ҫ�����λ��\n");
			break; //�ɹ��ҵ�Ҫ����ĵص�
		}
		p_prev = p_current;
		p_current = p_current->next;
	}

	//���p_currentΪNULL��˵��������ֵΪval�Ľڵ�
	if (p_current == NULL)
	{
		printf("������ֵΪ%d�Ľڵ㣬ֱ�ӽ������뵽����β��\n", val);
	}

	//�����µĽڵ�
	link_node * newnode = (link_node *)malloc(sizeof(link_node));
	newnode->data = data;
	newnode->next = NULL;

	//�½ڵ�������  ����  �ȹҺ�����������ǰ�����
	newnode->next = p_current;  //���p_current = NULL��Ҳ����δ�ҵ�val  ���½ڵ��������������
	p_prev->next = newnode;


	//������
	if (newnode->next == NULL)
		printf("�Ѿ��ɹ�����������β��\n");
	else
		printf("�Ѿ��ɹ����½ڵ������val֮ǰ"); 

}

//ɾ�����
void remove_linklist(link_node * head, int data)
{
	if (head == NULL)
	{
		printf("headnode is empty��\n");
		return;
	}

	//����ָ��
	link_node * p_prev = head;
	link_node * p_current = p_prev->next;

	//����ֵΪval�Ľ��
	while (p_current != NULL)
	{
		if (p_current->data == data)
		{
			printf("�ҵ���Ҫɾ���Ľ�㣡\n");
			break;
		}
		//��������Ѱ��
		p_prev = p_current;
		p_current = p_current->next;
	}

	//���δ�ҵ�Ҫɾ�������ݣ��򷵻�
	if (p_current == NULL)
	{
		printf("δ�ҵ�Ҫɾ���Ľ��\n");
		return;
	}

	//ɾ����ǰ���
	p_prev->next = p_current->next;  //����
	free(p_current); //�ͷ�Ҫɾ�����Ŀռ�
	printf("�Ѿ��ɹ�ɾ����㣡\n");

}

//��������
void destroy_linklist(link_node * head)
{
	if (head == NULL)
	{
		printf("�����Ѿ�Ϊ�գ�\n");
		return;
	}

	//��ֵָ��
	link_node * p_current = head;
	link_node * p_next = NULL;
	while (p_current != NULL)
	{
		//���浱ǰ����һ�����
		//���p_current->next ΪNULL����p_next���ָ���Ѿ�ָ��NULL��
		//�Ͳ�����ʹ���ָ��ָ��NULL��
		 p_next = p_current->next;

		//�ͷŵ�ǰ���Ķѿռ�
		free(p_current);

		//����ָ����һ�����
		p_current = p_next;
	}

	printf("����������ϣ�\n");
}

void test()
{
	//��������
	link_node * nowHead = init_linklist();

	//��������
	foreach_linklist(nowHead);

	//��ֵvalǰ������,���val�����ڣ�����β������
	printf("�Ƿ�Ҫ�������ݣ�����1��ʾҪ�������ݣ������˳���");
	int num = 0;		
	scanf("%d",&num); 
	while(num == 1)
	{
		int val;
		int data;
		printf("Ҫ�������뵽�Ǹ�ֵ֮ǰ��\n");
		scanf("%d", &val);
		printf("Ҫ����������Ƕ��٣�\n");
		scanf("%d", &data);
		insert_linklist(nowHead, val, data);
		printf("\n����������������Ϊ��\n");
		foreach_linklist(nowHead);
		
		printf("�Ƿ�������룿����1��ʾҪ�������ݣ������˳���");
		int num1 = 0;
		scanf("%d",&num1); 
		if(num1 == 1)
			num = 1;
		else 
			break;
	}
	

	//ɾ�����
	int data1 = 0;
	printf("\n������Ҫɾ�������ݣ�");
	scanf("%d", &data1);
	remove_linklist(nowHead, data1);
	printf("ɾ���������������Ϊ��\n");
	foreach_linklist(nowHead);


	//��������
	printf("\n�Ƿ�Ҫ������������1��ʾ���٣������˳���");
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
