#include<stdio.h>

// 利用指针将地址发送给interchange()函数，
//使得当交换地址内的值时，直接在地址处交换
//  这样就通过 辅助函数 直接改变了 主函数 中的实参的值 

void interchange(int *u, int *v); 

int main()
{
	int x = 5, y = 10;
	printf("交换前 x = %d, y = %d\n\n", x, y);
	interchange(&x,&y);  //把地址发给交换函数
	
	printf("交换后 x = %d, y = %d", x,y);
	
	return 0; 
	
 } 
 
 void interchange(int *u, int *v)
 {
 	int temp;
 	temp = *u;  //temp 获得 u 所指向的对象的值 
 	*u = *v;
 	*v = temp;
 }
