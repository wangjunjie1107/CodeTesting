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
		if(flag == 0 && isalnum(str[i])) //ǰһ��λ�ò�����ĸ����ǰλ������ĸ 
			word++;
		
		if(isalnum(str[i])) //�������ĸflag  = 1,���� flag = 0�������´��ж� 
			flag = 1;
		else
			flag = 0;
	}
	
	return word; 
}



int main()
{
	char arr[100]; // �� ������ĸ 
	
	gets(arr);	

	int num = wordCount(arr);
	
	printf("string \"%s\" word count is %d\n", arr, num);
	return 0;
} 
