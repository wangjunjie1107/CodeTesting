#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#include "linklist.c"
#include "linklist.h"

void test01()
{
	//��ʼ������
	struct LinkNode* pHeader = init_LinkList();

	//��������
	printf("\n�������Ϊ��");
	foreach_LinkList(pHeader);
	
	
	//����ڵ㹦�� ��20֮ǰ������1000 
//	insert_LinkList(pHeader, 20, 1000);
//	printf("���������Ϊ��\n");
//	foreach_LinkList(pHeader);
	
	//ɾ���ڵ㹦��
//	delete_LinkList(pHeader, 1000);
//	printf("ɾ��������Ϊ��\n");
//	foreach_LinkList(pHeader);
	
	//�������
//	clear_LinkList(pHeader);
//	printf("����������Ϊ��\n");
//	foreach_LinkList(pHeader);
	
	//��������
//	destroy_LinkList(pHeader);
//	printf("�����������Ϊ��\n");
//	foreach_LinkList(pHeader);
	
	////��λ��ɾ�����
//	deleteSite_LinkList(pHeader, 4);
//	printf("ɾ��λ��4�Ľ��󣬽��Ϊ��\n");
//	foreach_LinkList(pHeader);
	
	//��λ�ò��ҽ��  ���ӡ����ֵ 
	//researchSite_LinkList(pHeader, 5); 
	
	//��ȡ����ĳ��� 
	int count = strlen_LinkList(pHeader); 
	printf("\n\n�������ڳ���Ϊ��%d\n", count);
	
	//��ת���� �����ֵ��ת��ӡ�� ����ʵ�ʽ������෴���� 
	printf("\n��ת��ӡֵ�Ľ��Ϊ��");
	reverseValue_LinkList(pHeader); 
	
	
	//��ת����  ʵ�ʽ������෴����  
	reverseLink_LinkList(pHeader);
	printf("\n\n��ת���Ӻ���Ϊ��");
	foreach_LinkList(pHeader);
	printf("\n\n");
}
int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}
