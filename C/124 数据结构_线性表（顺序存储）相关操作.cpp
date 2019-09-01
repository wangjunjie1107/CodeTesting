#include<stdio.h>
const LIST_INIT_SIZE = 100; //初试分配空间
const LISTINCREMENT = 10; //空间分配增量

typedef struct
{
	ElemType *elem; //存储空间
	int length; //当前长度
	int listsize; //当前存储容量
}SqList;

//初始化线性表：为顺序表分配一个预定义大小的数组空间，并将线性表的初始长度设为0。 
Status InitList_Sq(SqList &L)
{
	//构造空表
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE*sizeog(ElemType));
	if(!L.elem)
		exit(OVERFLOW);
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return OK;
}//InitList_Sq


//在顺序表L中第 i 个位置插入新元素e
Status ListInsert_Sq(SqList &L, int i, ElemType e)
{
	if( i < 1 || i > L.length + 1 )
		return ERROR;//非法的位置
	if(L.length >= L.listsize)
		error('OVERFLOW');//溢出 
	for(j = L.length -1; j >= i-1; --j)
		L.elem[j+1] = L.elem[j];
		//第 i 个元素之后的所有元素后移
	
	L.elem[i-1] = e;
	L.length++;
	return OK;
} //ListInsert_Sq


//删除L中的第 i 个元素，后面的元素前移
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
 	//当第 i 个元素存在时，将值返回给e, OK， 否则ERROR
	 
	 if((i < 1) || (i > L.length)) 
	 	return ERROR;
	*e = L.elem[i-1];
	
}//GetElem_l


int ListEmpty(LinkList L)
{
	//若线性表为空， 则返回TRUE， 否则返回FALSE
	If(L.length = 0) 
		return TRUE;
	Else return FALSE;
} 
 

int ListLength(LinkList L)
{
	//返回线性表的长度，即线性表中元素的个数
	
	return L.length； 
}
 
  
