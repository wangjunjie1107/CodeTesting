#include<stdio.h>

int main()
{
	char * names[5] = { "zhao", "qian", "sun", "li", "zhou"}; //存储了五个字符型的指针 
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Name %d: %s\n", i, names[i]);
		 
	} 
	
	return 0;
}
