#include<stdio.h>

void exchangeL(SqList &L, int m, int n)
{
	//线性表分成两个部分后，两部分倒置
	for(i = 0; i < n; i++)
	{
		w = L.elem[i+m];
		for(j = m; j >= 1; j--)
			L.elem[i+j] = L.elem[i+j-1];
		
		L.elem[i] = w; 
	 } 
 } //exchange1
 
 int main()
 {
 	return 0;
 }
