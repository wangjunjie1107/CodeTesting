#include<stdio.h>
#include<ctype.h>  //大小写测试函数的头文件 

int main()
{
	char aWord;
	char upWord;
	char lowWord; 
	scanf("%c", &aWord);
	
	if(isupper(aWord))  //大写测定函数 
	{
		printf("aWord is a supper.\n");
	}
	else if(islower(aWord)) //小写测定函数 
	{
		printf("aWord is a lower.\n");
	}
	
	upWord = toupper(aWord); //将用户输入的字符转换为大写
	lowWord = tolower(aWord); //将用户输入的字符转换为小写 
	
	printf("%c\t%c", upWord, lowWord);
	return 0;
	
 } 
