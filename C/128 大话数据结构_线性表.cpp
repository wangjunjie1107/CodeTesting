#include<stdio.h>

//线性表的抽象数据类型定义
/*

* operation
*
*	InitList(*L);  初始化操作，建立一个空的线性表L
*	
*	ListEmpty(L);   若线性表为空，返回true，否则返回false 
*	
*	ClearList(*L);   将线性表清空
*	
*	GetElem(L, i, *e); 将线性表L中的第i个位置元素值返回给e
*	
*	LocateElem(L,e); 在线性表L中查找与给定值e相等的元素，如果查找成功，
*						返回该元素在表中序号表示成功；否则，返回0表示失败。
*	 
*	ListInsert(*L, i, e); 在线性表L中的第i个位置插入新元素e
*	
*	ListDelete(*L, i, *e); 删除线性表L中第i个位置元素，并用e返回其值
*	
*	ListLength(L); 返回线性表L的元素个数 

*/	
	 
//将所有的在线性表Lb中但不在La中的数据元素插入到La中
void union(List *La, List Lb)
{
	int La_len, Lb_len, i;
	ElemType e;  //声明与 La 和 Lb 相同的数据元素e
	La_len = ListLength(La);
	Lb_len = ListLength(Lb);
	
	for(i = 1; i <= Lb_len; i++)
	{
		GetElem(Lb, i, e); //取Lb中第i个数据元素赋给e
		
		if(!LocateElem(La, e, equal)) //La中不存在和e相同的数据元素 
	 		ListInsert(La, ++La_len, e); //插入元素 
	 } 
 } 
int main()
