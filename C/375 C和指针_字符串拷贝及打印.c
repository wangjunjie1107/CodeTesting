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

	char * temp = buffer;//代替buffer移动
	while ((*temp++ = *source++) != '\0')
		;

	printf("%s\n", buffer);//buffer并未移动，所以可以从数组首开始打印字符

}
int main()
{
	char buffer[1024] = { 0 };
	char source[] = "wangjunjie";
	//字符串复制
	MyStringCopy(buffer, source);
	system("pause");
	return EXIT_SUCCESS;
}
