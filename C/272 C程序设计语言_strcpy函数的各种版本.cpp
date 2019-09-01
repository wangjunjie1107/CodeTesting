#include<stdio.h>

void strcpy1(char *s, char *t)
{
	int i;
	
	i = 0;
	while((s[i] = t[i]) != '\0')
		i++;
 } 
 
void strcpy2(char *s, char *t)
{
	int i;
	
	i = 0;
	while((*s = *t) != '\0')
	{
		s++;
		t++;
	}
}

void strcpy3(char *s, char *t)
{
	while((*s++ = *t++) != '\0')
	;
}

void strcpy4(char *s, char *t)
{
	while(*s++ = *t++)
	; 
}

int main()
{
	char s[100];
	char t[] = "wangjunjie";
	
	//strcpy1(s, t);
	//strcpy2(s, t);
	//strcpy3(s, t);
	strcpy4(s, t);
	printf("%s\n", s);
	return 0;
}
