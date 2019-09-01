#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	char *p = "111abc1abc11acb324abc324abc43abc";
	
	int n = 0;
	
	while((p = strstr(p, "abc")) != NULL)
	{
		p = p + strlen("abc");  //重新设置起点位置 
		n++;
		
		if(*p == 0)
			break;
	}
	
	printf("n = %d\n", n);
	
	return 0;
 } 
