#include<string.h>
#include<stdio.h>
#include<ctype.h>

int wordCount(char * str)
{
	int flag = 0;
	int word = 0;
	
	int i,n;
	n = strlen(str);
	
	for(i = 0; i < n; i++)
	{
		if(flag == 0 && isalnum(str[i])) //前一个位置不是字母，当前位置是字母 
			word++;
		
		if(isalnum(str[i])) //如果是字母flag  = 1,否则 flag = 0；用于下次判定 
			flag = 1;
		else
			flag = 0;
	}
	
	return word; 
}



int main()
{
	char arr[100]; // ！ 不是字母 
	
	gets(arr);	

	int num = wordCount(arr);
	
	printf("string \"%s\" word count is %d\n", arr, num);
	return 0;
} 
