#include<stdio.h>

#define PRAISE "You are an extraordinary being." 
 //����ʱ�滻 ϰ�����ô�д��ʾ���ų���  

int main(void)
{
	char name[40];
	
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	
	return 0;
	
}
