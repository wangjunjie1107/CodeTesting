#include<stdio.h>

//˳��洢�ṹ��װ
 
#define MAXSIZE 20  //���鳤�� 
typedef int ElemType; 
typedef struct
{
	ElemType data[MAXSIZE];
	
	int length;  //���Ա�ǰ����
	 
}SqList; 


//GetElem ���� 
 
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Status

//Status �Ǻ��������ͣ���ֵ�Ǻ������״̬���룬��OK��
//��ʼ������˳�����Ա�L�Ѵ��ڣ�1 <= i <= ListLength(l)
//����������� e ���� L �е� i������Ԫ�ص�ֵ 
Status GetElem(SqList L, int i, Elemtype *e)
{
	if(L.length == 0 || i < 1 || i > L.length)
	{
		return ERROR;
	}
	
	*e = L.data[i-1];
	
	return OK;
}
