//导入一个文件   stdio.h  std是一个标准库 i-input o-output 标准输入输出库  .h头文件
// <> 表示导入系统文件  “”表示导入自定义文件
 
#include<stdio.h>

// 两个斜杠表示注释，行注释，只能注释一行

/* 
   这是一个块注释
   可以注释多行
   注释内容不参与程序编译 
*/ 

// int 数据类型  整型  如果出现在函数中，表示函数的返回值 
// main  程序的主函数，程序有且只有一个主函数。  
// ()里面表示函数的参数 函数的参数可以有多个，中间用逗号分隔。 
 
int main() 
{   // 函数体 代码体 程序体 
    //  printf 是stdio.h 系统中提供的函数，表示在标准输出设备上打印字符串。 
	//  1971年 T&R（汤姆逊和理查德）在贝尔实验室发明C语言 
	// “”称为字符串 ；表示一条语句的结束 
	printf("Hello World!\n");			
	//return 出现在其他函数中表示函数结束
	//如果出现在main函数中表示程序结束 
	//0 表示函数的返回值  要和函数的返回值类型相对应 
	
	return 0;
 } 
