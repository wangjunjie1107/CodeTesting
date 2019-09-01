#include<stdio.h>
#include<string.h> 

//字符串头文件提供很多字符串处理函数

/* 
*   strstr("string1", "string2") //在字符串1中查找字符串2,将字符串替换为数组也可以 
*   strchr() //在字符串中查找字符
*   strcmp()//比较字符串
*   strcpy()//复制字符串
*   strlen()//返回字符串的长度
*   strcat()//连接字符串 
*/

int main()
{
	char arr1[] = "hello ";
	char arr2[] = "world";
	
	printf("%d\n", strlen(arr1)); //连接字符串前 
	 
	printf("%s\n", strcat(arr1, arr2));
	
	printf("%d\n", strlen(arr1)); //连接字符串后 
	
	return 0;
 } 
