#include<stdio.h>

typedef struct
{
	char key[15]; //���Ĺؼ���
	char name[20];
	int age; 
}DATA; //���������ͣ��ɶ���Ϊ�����ͣ�Ҳ�ɶ���Ϊ�ṹ

#include "282 �㷨_˳���Ĳ���.h"
#include "282 �㷨_˳���Ĳ���.cpp"

//����˳����еĽ�� 
int SeqListAll(SeqListType *SL)
{
	int i;
	
	for(i = 1; i <= SL->ListLen; i++)
	{
		printf("(%s,%s,%d)\n", SL->ListData[i].key, SL->ListData[i].name, SL->ListData[i].age);	
	}
} 

int main()
{
	int i;
	
	SeqListType SL;  	//����˳������ 
	DATA data, *data1;	//�����㱣���������ͱ�����ָ�����
	char key[15];	//����ؼ���
	
	SeqListInit(&SL);  //��ʼ��˳���
	
	//ѭ����ӽ������  ����0�˳� 
	do{
		printf("������ӵĽ�㣨ѧ�� ���� ���䣩��");
		fflush(stdin);	//	������뻺����
		scanf("%s%s%d", &data.key, &data.name, &data.age);
		
		if(data.age)//����������䲻Ϊ0 
		{
			if(!SeqListAdd(&SL,data))//����ӽ��ʧ�� 
			{
				break;//�˳���ѭ�� 
			}
		}else  //������Ϊ0
			break;//�˳���ѭ�� 
	}while(1);
	
	printf("\n˳����еĽ��˳��Ϊ��\n");
	SeqListAll(&SL); 	//��ʾ���нڵ����� 
	
	fflush(stdin); //������뻺���� 
	
	printf("\nҪȡ��������ţ�");
	scanf("%d", &i);//��������� 
	
	data1 = SeqListFindByNum(&SL, i); //����Ų��ҽ��
	if(data1)  //�����صĽ��ָ�벻ΪNULL 
	{
		printf("��%d�����Ϊ����%s,%s,%d)\n", i, data1->key, data1->name, data1->age);
	}
	 
	fflush(stdin);//������뻺����
	 
	printf("\nҪ���ҽ��Ĺؼ��֣�");
	scanf("%s",key); //����ؼ���
	
	//���ؼ��ֲ��ң����ؽ����� 
	i = SeqListFindByCont(&SL,key);
	//����Ų��ң����ؽ��ָ�� 
	data1 = SeqListFindByNum(&SL, i);
	if(data1)  //�����صĽ��ָ�벻ΪNULL 
	{
		printf("��%d�����Ϊ����%s,%s,%d)\n", i, data1->key, data1->name, data1->age);
	}
	
	getchar();
	return 0;
	 
}










