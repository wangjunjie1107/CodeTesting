#include<stdio.h>
#include<string.h>

void MyStringCopy(char * arr1, char * arr2)
{
	int len = strlen(arr1);
	
	for(int i = 0; i < len; i++)
	{
		*(arr2 + i) = *(arr1 + i); //�ַ�������  
	}
	*(arr2 + len) = '\0'; //ĩβ�ӽ�����־ 
} 
 
int main()
{
	char arr1[] = "Hello ������";
	char arr2[100];
	 
	MyStringCopy(arr1, arr2);
	
	printf("%s\n", arr2);
	return 0;
}
