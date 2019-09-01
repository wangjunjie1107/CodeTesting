#include<stdio.h>
#include<string.h>

void Mystrcat(char * arr, char * s1)
{
	while(*arr)
		arr++;
	while(*s1)
	{
		*arr = *s1;
		arr++;
		s1++;
	}
	*arr = '\0';
}
int main()
{
	char arr1[] = "Hello";
	char arr2[] = "world";
	
	Mystrcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
