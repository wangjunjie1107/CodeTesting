#include<stdio.h>
#define STLEN 10

 //������̫����fputs���������������ַ� 
void test01() 
{
	char words[STLEN];
	puts("Enter strings(empty line to quit):");
	
	while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
		fputs(words,stdout);   //������̫����fputs���������������ַ� 
	puts("done");
	
}

	//������̫����puts�ᶪ�������г������ַ� 
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
		puts(words);			//������̫����puts�ᶪ�������г������ַ� 
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
