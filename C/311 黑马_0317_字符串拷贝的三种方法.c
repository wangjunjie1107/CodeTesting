#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<stdlib.h>


//���������±꿽��
void stringCopy01(char * dest, char * source)
{
	int len = strlen(source); //�����ַ�������

	for (int i = 0; i < len; i++)
	{
		dest[i] = source[i];
	}
	dest[len] = '\0'; //�ǵüӽ�������
}

void stringCopy02(char * dest, char * source)
{
	//����ָ�뿽��
	while (*source != '\0')
	{
		*dest = *source;

		dest++;
		source++;
	}
	*dest = '\0';
}

void stringCopy03(char * dest, char * source)
{
	//��㿽��
	while(*dest++ = *source++)
	{
	}
}
int main()
{
	char *str = "wangjunjie";

	char dest[1024];

	//stringCopy01(dest,str);

	//stringCopy02(dest, str);
	
	stringCopy03(dest, str);

	printf("dest = %s\n", dest);

	system("pause");
	return EXIT_SUCCESS;
}
