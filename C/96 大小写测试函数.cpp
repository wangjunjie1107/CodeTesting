#include<stdio.h>
#include<ctype.h>  //��Сд���Ժ�����ͷ�ļ� 

int main()
{
	char aWord;
	char upWord;
	char lowWord; 
	scanf("%c", &aWord);
	
	if(isupper(aWord))  //��д�ⶨ���� 
	{
		printf("aWord is a supper.\n");
	}
	else if(islower(aWord)) //Сд�ⶨ���� 
	{
		printf("aWord is a lower.\n");
	}
	
	upWord = toupper(aWord); //���û�������ַ�ת��Ϊ��д
	lowWord = tolower(aWord); //���û�������ַ�ת��ΪСд 
	
	printf("%c\t%c", upWord, lowWord);
	return 0;
	
 } 
