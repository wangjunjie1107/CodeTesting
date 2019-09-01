typedef struct
{
	char key[15]; //�ؼ��֣���������Ϊ�ؼ��֣�
	char addr[20];
	char telephone[15];
	char mobile[12]; 
}DATA; //���ݽ������

#include<stdio.h>
#include "283 �㷨_����Ĳ���.h"
#include "283 �㷨_����Ĳ���.cpp"

void ChainListAll(ChainListType *head)//��������
{
	ChainListType *h;
	DATA data;
	h = head;
	
	printf("���������������£�\n");
	while(h) //ѭ����������ÿ����� 
	{
		data = h->data; //��ȡ�������
		printf("������%s\n", data.key);
		printf("��ַ��%s\n", data.addr);
		printf("�绰��%s\n", data.telephone);
		printf("�ֻ���%s\n", data.mobile);
		
		h = h->next;  //������һ��� 
	}
	
	return; 
} 

ChainListType *input(ChainListType *head) //��ͨѶ¼��������Ϣ
{
	DATA data;
	
	printf("��������ϵ����Ϣ\n");
	printf("������");
	scanf("%s",data.key);
	printf("��ַ��");
	scanf("%s",data.addr);
	printf("�绰��");
	scanf("%s",data.telephone);
	printf("�ֻ���");
	scanf("%s",data.mobile);	 
	
	//������Ӻ���,���½����ӵ�ͷ�� 
	return ChainListAddFirst(head, data);
}

void find(ChainListType *head)
{
	ChainListType *h;
	DATA data;
	char name[15];
	
	printf("���������������");
	scanf("%s", name);
	
	h = ChainListFind(head, name);
	
	if(h) //���ҽ��ָ����Ч 
	{
		data = h->data; //��ȡ������� 
		printf("������%s\n", data.key);
		printf("��ַ��%s\n", data.addr);
		printf("�绰��%s\n", data.telephone);
		printf("�ֻ���%s\n", data.mobile);
	} 
} 

void Delete(ChainListType *head)
{

	char name[15];
	printf("������Ҫɾ����������");
	scanf("%s", name);
	
	//����ɾ������ 
	ChainListDelete(head,name); 
}


int main()
{
	ChainListType *node, *head = NULL;
	int select; //ѡ��˵������
	
	
	//Ϊʲô��ʾ�б����ʾ���Σ������� 
	do{
		printf("\n_______________________\n");
		printf("1.�����ϵ��\n");
		printf("2.������ϵ��\n");
		printf("3.ɾ����ϵ��\n");
		printf("4.��ʾ��ϵ��\n");
		printf("0.�˳�\n");
		printf("\n_______________________\n");
	
		select = getchar();
		
		switch(select)
		{
			case '1':
				printf("\n�����ϵ��\n");
				head = input(head);
				break;
			case '2':
				printf("\n������ϵ��\n");
				find(head);
				break;
			case '3':
				printf("\nɾ����ϵ��\n");
				Delete(head);
				break;
			case '4':
				printf("\n��ʾ��ϵ��\n");
				ChainListAll(head);
				break;
			case '0':
				return 0;
				
		}
		
	}while(select != '0');
} 
 
