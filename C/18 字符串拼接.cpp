#include<stdio.h>

int main()
{
	//字符串的结束标志是 \0  
	//定义字符数组n个元素，要预留一个位置给\0
	//遇到空格停止
	//字符串拼接
	char ch1[]="hello";
	char ch2[]="world";
	char ch3[20];
	
	int i=0;
	int j=0;
	
	while(ch1[i]!='\0')
	{
		ch3[i]=ch1[i];
		i++;
	}
	 
	 	while(ch2[j]!='\0')
	{
		ch3[i+j]=ch2[j];
		j++;
	}
	
	ch3[i+j+1]='\0';
	 
	printf("%s", ch3);
}
