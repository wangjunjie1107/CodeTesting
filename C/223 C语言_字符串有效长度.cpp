#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char arr[] = "asd";  //末尾还有结束符  \0 
	
	int len = strlen(arr);
	
	printf("字符串有效长度：%d\n", len);
	
	printf("字符串长度：%d\n", sizeof(arr));
	
	int index = 0;
	
	while(arr[index] != '\0')
	{
		index++;
	}
	
	printf("字符串有效长度：%d\n", index); 
	
	return 0; 
}
