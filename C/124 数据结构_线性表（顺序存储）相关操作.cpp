#include<stdio.h>
const LIST_INIT_SIZE = 100; //���Է���ռ�
const LISTINCREMENT = 10; //�ռ��������

typedef struct
{
	ElemType *elem; //�洢�ռ�
	int length; //��ǰ����
	int listsize; //��ǰ�洢����
}SqList;

//��ʼ�����Ա�Ϊ˳������һ��Ԥ�����С������ռ䣬�������Ա�ĳ�ʼ������Ϊ0�� 
Status InitList_Sq(SqList &L)
{
	//����ձ�
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE*sizeog(ElemType));
	if(!L.elem)
		exit(OVERFLOW);
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return OK;
}//InitList_Sq


//��˳���L�е� i ��λ�ò�����Ԫ��e
Status ListInsert_Sq(SqList &L, int i, ElemType e)
{
	if( i < 1 || i > L.length + 1 )
		return ERROR;//�Ƿ���λ��
	if(L.length >= L.listsize)
		error('OVERFLOW');//��� 
	for(j = L.length -1; j >= i-1; --j)
		L.elem[j+1] = L.elem[j];
		//�� i ��Ԫ��֮�������Ԫ�غ���
	
	L.elem[i-1] = e;
	L.length++;
	return OK;
} //ListInsert_Sq


//ɾ��L�еĵ� i ��Ԫ�أ������Ԫ��ǰ��
Status ListDelete(SqList &L, int i, Elem Type &e)
{

	if( (i < 1) || (i > L.length))
		return ERROR;
	
	p = &L.Elem[i-1];
	e= *p;
	q = L.Elem + L.length - 1;
	
	for(++p; p <= q; ++p)
		*(p-1) = *p;
	--L.length;
	return ok;
 }//ListDelete_Sq
 
 Status GetElem_L(LinkList L; int i, ElemType *e)
 {
 	//���� i ��Ԫ�ش���ʱ����ֵ���ظ�e, OK�� ����ERROR
	 
	 if((i < 1) || (i > L.length)) 
	 	return ERROR;
	*e = L.elem[i-1];
	
}//GetElem_l


int ListEmpty(LinkList L)
{
	//�����Ա�Ϊ�գ� �򷵻�TRUE�� ���򷵻�FALSE
	If(L.length = 0) 
		return TRUE;
	Else return FALSE;
} 
 

int ListLength(LinkList L)
{
	//�������Ա�ĳ��ȣ������Ա���Ԫ�صĸ���
	
	return L.length�� 
}
 
  
