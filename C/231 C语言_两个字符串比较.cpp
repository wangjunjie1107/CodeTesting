#include<stdio.h>
#include<string.h>

extern int my_strcmp(char s1[], char s2[]);

int main()
{
	char s1[] = "hello";
	char s2[] = "hello";
	
	int value = my_strcmp(s1, s2);
	
	if(value == 0)
	{
		printf("两个字符串不相同\n");
	}
	else if(value == 1)
	{
		printf("两个字符串相同\n");
	}
	
	return 0;
	
}

int my_strcmp(char s1[], char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	
	if(len1 != len2)
	{
		return 0;
	}
	
	char *p = s1;
	char *q = s2;
	
	for(int i = 0; i < len1; i++)
	{
		if(p[i] != q[i])
		{
			return 0;
		}
		else 
		{
			continue;
		} 
	}	
	
	return 1;

}
