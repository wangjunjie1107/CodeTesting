#include<stdio.h>

int Compare(SqList A, SqList B)
{
	//若A<B返回-1， A=B返回0， A<B返回1 
	
	int j = 0; 
	
	//while()循环判断两个线性表的前 j 个元素  
	while(j < A.length && j < B.length)
	{
		if(A.elem[j] < B.elem[j])
		{
			return -1;
		}
		else if(A.elem[j] > B.elem[j])
		{
			return 1;
		}
		else j++;
	} 
	
	
	//比较完前 j 个元素后，看哪个链表为空 
	if(A.length == B.length)  //A 和 B 都为空 
	{
		return 0;
	} 
	else if(A.length < B.length) //A 空 B 不空 
	{
		return -1;
	}
	else return 1;  // B 空 A 不空 
} 


int main()
{
	
 } 
