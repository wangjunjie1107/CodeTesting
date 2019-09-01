#include "dynamicArray.h"


//��ʼ������ 
//��������ʼ�������� 
//����ֵ������ָ��
struct dynamicArray * init_dynamicArray(int capacity)
{
	//������ȫ�Լ��
	if (capacity <= 0)
	{
		return NULL;
	}

	//����������ڴ�
	struct dynamicArray * arr = malloc(sizeof(struct dynamicArray));
	//�����ڴ�ʧ��
	if (arr == NULL)
	{
		return NULL;
	}
	//��ʼ������
	arr->pAddr = malloc(sizeof(void *) * capacity);
	arr->m_Capacity = capacity;
	arr->m_size = 0;


	//��������ָ��
	return arr;
}

//��������
void insert_dynamicArray(struct dynamicArray * arr, void * data, int pos)
{
	//��ȫ�Լ��
	if (arr == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	if (pos <0 || pos>arr->m_size)
	{
		//����λ��Υ�� ��ʹ��β�巨
		pos = arr->m_size;
	}

	//������������Ѿ�����
	if (arr->m_size == arr->m_Capacity)
	{
		//1���������ڴ�ռ��С  ��չ�ڴ�
		int newCapacity = arr->m_Capacity * 2;

		//2�������¿ռ�
		void ** newSpace = malloc(sizeof(void *) * newCapacity);

		//3����ԭ�ռ��µ����ݿ������¿ռ���
		memcpy(newSpace, arr->pAddr, sizeof(void *) * arr->m_Capacity);

		//4���ͷ�ԭ�ռ�
		free(arr->pAddr);

		//5������ָ��ָ��
		arr->pAddr = newSpace;

		//6������������
		arr->m_Capacity = newCapacity;
	}

	//����Ԫ�ز��뵽������ָ��λ��
	for (int i = arr->m_size - 1;i >= pos;i--)
	{
		//Ԫ�غ���
		arr->pAddr[i + 1] = arr->pAddr[i];
	}
	//�������ݲ��뵽ָ��λ��
	arr->pAddr[pos] = data;
	//���������С
	arr->m_size++;
}

//������̬����  �ص����� void(*myPrint)(void *)
void foreach_dynamicArray(struct dynamicArray * arr, void(*myPrint)(void *))
{
	if (arr == NULL)
	{
		return;
	}
	for (int i = 0;i < arr->m_size;i++)
	{
		myPrint(arr->pAddr[i]);
	}
}

//ɾ������
//����λ��ɾ������
void removeByPos_dynamicArray(struct dynamicArray * arr, int pos)
{
	if (arr == NULL)
	{
		return;
	}
	if (pos<0 || pos > arr->m_size - 1)
	{
		//��Чλ��
		return;
	}

	for (int i = pos;i < arr->m_size; i++)
	{
		//ɾ��ָ��λ�õ�Ԫ�أ���ǰ�����ƶ� ��ʵ��ָ����ƶ� ���Բ��ÿ�����ʲô���͵�����
		arr->pAddr[i] = arr->pAddr[i + 1];
	}
	//���������С
	arr->m_size--;

}

//��ֵ��ʽɾ������  int(*myCompare)(void *,void *) �ص�����
void removeByValue_dynamicArray(struct dynamicArray * arr, void * data, int(*myCompare)(void *, void *))
{
	if (arr == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}

	for (int i = 0;i < arr->m_size;i++)
	{
		//���ûص����� ���û��Լ���д�ص����� �������ǶԱ����ݵĽ��
		if (myCompare(arr->pAddr[i], data))
		{
			//�ҵ�λ�ú󣬵��ð�λ��ɾ��Ԫ�أ�����Ԫ��
			removeByPos_dynamicArray(arr, i);
			break;
		}
	}
}


//��������
void destroy_dynamicArray(struct dynamicArray * arr)
{
	if (arr == NULL)
	{
		return;
	}

	//�ڲ�ά���ڶ�������ָ�����ͷ�
	if (arr->pAddr != NULL)
	{
		free(arr->pAddr);
		arr->pAddr = NULL;
	}

	free(arr);
	arr = NULL;

}