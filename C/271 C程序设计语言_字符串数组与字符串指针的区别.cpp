#include<stdio.h>

int main()
{
	char amessage[] = "now is the time"; //定义一个数组
	
	char *pmessage = "now is the time";//定义一个指针
	
	/*
		amessage是一个仅仅足以存放初始化字符串以及空字符‘\0’的一维数组。
	数组中的单个字符可以进行修改，但amessage始终指向同一个存储位置。
		
		另一方面，pmessage是一个指针，其初值指向一个字符串常量，之后它可以
	被修改以指向其他地址，但如果试图修改字符串的内容，结果是没有定义的。因为字符串是一个字符常量 
	
	*/
	 
 } 
