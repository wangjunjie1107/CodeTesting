#include<stdio.h>
#include<string.h>
#include<stdlib.h>



printf()和scanf()使用标准输出和标准输入来交互
标准输出默认在显示器上显示数据
标准错误专门用来输出错误消息
标准输入默认从键盘读取数据
可以用fprintf(stderr, ...)把数据打印到标准错误
可以用fopen("文件名", "模式")创建你自己的数据流。一共有三种模式：w(写入)、r(读取)、a(追加)
用getopt()函数读取命令行选项很方便
命令行参数以字符串指针数组的形式传递给main()
可以用重定向把标准输入和标准输出和标准错误连接到其他地方

 




int main()
{
	FILE * in_file = fopen("input.exe", "r"); //创建一条数据流，从文件中读取数据
	FILE * out_file = fopen("output.exe", "w")//创建一条数据流，向文件写数据
	
	fclose(in_file);
	fclose(out_file); 
	 
 } 
