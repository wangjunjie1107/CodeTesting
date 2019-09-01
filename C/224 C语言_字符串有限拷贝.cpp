#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "Hello World";
	char arr2[100];
	char arr3[100];
	
	strcpy(arr2, arr1);
	printf("%s\n", arr2);
	
	//有限拷贝 
	//参数：目标字符串 源字符串 字符长度
	//注:有限拷贝不会将\0拷贝到目标字符串中
	strncpy(arr3, arr1, 5);
	
	arr3[6] = '\0'; //因此我们要手动加上结束符
	 
	printf("%s\n", arr3);
	
	return 0;
 } 
