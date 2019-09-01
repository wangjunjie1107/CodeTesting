#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

//sprintf 格式化字符串
void test01()
{
	char buf[1024];
	//memset 是一种初始化函数，作用是将某一块内存中的内容全部设置为指定的值。 
	memset(buf,0,1024); 
	sprintf(buf,"今天是 %d年 %d月 %d日\n", 2018,5,6);
	
	printf("buf: %s\n",buf);
	
	memset(buf,0,1024);
	char str1[] = "hello";
	char str2[] = "world";
	
	int len = sprintf(buf,"%s %s\n",str1,str2); //sprintf返回的是字符串的长度 
	printf("buf: %s\n字符串长度：%d\n\n",buf,len);
	
	//数字转字符串
	memset(buf,0,1024);
	int num = 100;
	sprintf(buf,"%d\n",num); //十进制 
	printf("buf: %s\n", buf);
	
	//设置宽度 右对齐
	memset(buf,0,1024);
	int num2 = 100;
	sprintf(buf,"%8d\n",num2);
	printf("buf: %s\n",buf); 
	
	//设置宽度 左对齐
	memset(buf,0,1024);
	int num3 = 100;
	sprintf(buf,"%-8d",num2);
	printf("buf: %sa\n\n",buf); //打印字母a是为了看出来buf的左对齐 
	
	//转成16进制字符串  小写
	memset(buf,0,1024);
	sprintf(buf,"0x%x\n",num);   //十六进制 
	printf("buf: %s\n",buf);
	
	//转成8进制字符串 
	memset(buf,0,1024);
	sprintf(buf,"0%o\n",num);   //八进制 
	printf("buf: %s\n",buf);
} 

 int main()
 {
 	test01();
 	
 	return 0;
  } 
