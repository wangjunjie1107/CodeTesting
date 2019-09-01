#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

//strcmp(str1,str2)
//str1 < str2 返回 -1 
//str1 > str2 返回 1
//str1 = str2 返回 0

//字符串比较实际上是ASCII码比较
int main()
{
	char arr1[] = "a";
	char arr2[] = "A";
	char arr3[] = "Ab";

	printf("a = %d\n", 'a');
	printf("A = %d\n", 'A');

	//遇到\0比较就停止了 
	int value = strcmp(arr1, arr2);
	printf("%d\n", value);  //相同，值为0 

	int value1 = strcmp(arr1, arr3);
	printf("%d\n", value1); //arr1 < arr3，值为 -1  arr1 > arr3 值为 1 

							//有限比较   遇到\0就停止了 
	int value2 = strncmp(arr1, arr2, 5);
	printf("%d\n", value2); //相同，值为0   不同值为非零值 都是真 


	system("pause");
	return 0;
}
