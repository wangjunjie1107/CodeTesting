#include<stdio.h>

int Compare(SqList A, SqList B)
{
	//��A<B����-1�� A=B����0�� A<B����1 
	
	int j = 0; 
	
	//while()ѭ���ж��������Ա��ǰ j ��Ԫ��  
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
	
	
	//�Ƚ���ǰ j ��Ԫ�غ󣬿��ĸ�����Ϊ�� 
	if(A.length == B.length)  //A �� B ��Ϊ�� 
	{
		return 0;
	} 
	else if(A.length < B.length) //A �� B ���� 
	{
		return -1;
	}
	else return 1;  // B �� A ���� 
} 


int main()
{
	
 } 
