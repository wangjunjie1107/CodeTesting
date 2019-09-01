#include<stdio.h>

void mystrcat(char *str1,char *str2)
{
	int len1 = 0;
	int len2 = 0;
	
	while(str1[len1])
	{
		len1++;
	}
	
	while(str2[len2])
	{
		len2++;
	}
	
	int i;
	
	for(i = 0; i < len2; i++)
	{
		str1[len1 + i] = str2[i];
	}
 } 
 
 
 int main()
 {
 	char str1[] = "123456";
 	char str2[] = "ABCDEF";
 	
 	mystrcat(str1, str2);
 	
 	printf("%s\n", str1);
 	
 	return 0;
 }
