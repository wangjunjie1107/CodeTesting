#include<stdio.h>

int main()
{
	goto End; //无条件跳转到End标识
	
	printf("aaaaaaa\n");
	
	End: printf("BBBBBBBBBB\n");
	
	return 0; 
 } 
