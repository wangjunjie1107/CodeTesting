#include<stdio.h>

int main()
{
	const char * mesg = "Don't be fool!";
	const char * copy;
	
	copy = mesg;  //这个语句把mesg的值赋给了copy,即让copy也指向了mesg指向的字符串 
	
	printf("%s\n\n", copy);
	
	//打印的第一项表示指针指向的值 
	
	//打印的第二项表示指针存储在这个地址编号内存中 
	
	//value 表示 指针mesg里面存的值的地址
	//所谓指针的值就是它里面存储的地址。
	 
	printf("mesg = %s, &mesg = %p, value = %p.\n\n", mesg, &mesg, mesg);
	printf("copy = %s, &copy = %p, value = %p.\n\n", copy, &copy, copy);
	
	return 0; 
}
