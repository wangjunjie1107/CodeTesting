#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void MyStringCopy(char * buffer, char * source)
{
	if (source == NULL)
	{
		return;
	}

	char * temp = buffer;//����buffer�ƶ�
	while ((*temp++ = *source++) != '\0')
		;

	printf("%s\n", buffer);//buffer��δ�ƶ������Կ��Դ������׿�ʼ��ӡ�ַ�

}
int main()
{
	char buffer[1024] = { 0 };
	char source[] = "wangjunjie";
	//�ַ�������
	MyStringCopy(buffer, source);
	system("pause");
	return EXIT_SUCCESS;
}
