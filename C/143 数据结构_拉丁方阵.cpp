/*
	拉丁方阵是一种n*n的方阵，方阵中恰有n中不同的元素，每种
	元素恰有n个，并且每种元素在一行和一列中恰好出现一次。 
*/
 
#include<stdio.h>

typedef struct node
{	
	int data;
	struct node *next;
}sqlist, *linklist;

	
	
	
