#include<stdio.h>
#include<string.h> 

//�ַ���ͷ�ļ��ṩ�ܶ��ַ���������

/* 
*   strstr("string1", "string2") //���ַ���1�в����ַ���2,���ַ����滻Ϊ����Ҳ���� 
*   strchr() //���ַ����в����ַ�
*   strcmp()//�Ƚ��ַ���
*   strcpy()//�����ַ���
*   strlen()//�����ַ����ĳ���
*   strcat()//�����ַ��� 
*/

int main()
{
	char arr1[] = "hello ";
	char arr2[] = "world";
	
	printf("%d\n", strlen(arr1)); //�����ַ���ǰ 
	 
	printf("%s\n", strcat(arr1, arr2));
	
	printf("%d\n", strlen(arr1)); //�����ַ����� 
	
	return 0;
 } 
