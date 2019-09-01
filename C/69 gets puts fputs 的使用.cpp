#include<stdio.h>
#define STLEN 10

 //输入行太长，fputs会继续输出超出的字符 
void test01() 
{
	char words[STLEN];
	puts("Enter strings(empty line to quit):");
	
	while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
		fputs(words,stdout);   //输入行太长，fputs会继续输出超出的字符 
	puts("done");
	
}

	//输入行太长，puts会丢弃输入行超出的字符 
void test02()
{
	char words[STLEN];
	puts("Enter strings(empty line to quit):");
	while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
	{
		int i = 0;
		while(words[i] != '\n' && words[i] != '\0')
		{
			i++;
		} 
		if(words[i] == '\n')
		{
			words[i] = '\0';
		}
		else
			while(getchar() != '\n')
					continue;
		puts(words);			//输入行太长，puts会丢弃输入行超出的字符 
	}
	puts("done");
	
}


int main()
{
	char words[STLEN];
	test01();
	test02();
	return 0;
 }
