/*


atoi()会扫描字符串，跳过前面的空格字符，
直到遇到数字或正负号才开始做转换，
而遇到非数字或字符串结束符('\0')才结束转换，
并将结果返回返回值。 

atof()：把一个小数形式的字符串转化为一个浮点数。
atol()：将一个字符串转化为long类型

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "   123456789wangjunjie";
	
	int a = atoi(arr1); //转换为数字
	printf("%d\n", a);
	
	char arr2[] = " 1.22154aaaaaa";
	float b = atof(arr2);  //转换为浮点数 
	printf("%f\n", b);  
	
	char arr3[] = "  851.5";
	long int c = atof(arr3);  //转换为长整型 
	printf("%ld\n", c);

	
	return 0; 
	
 } 
