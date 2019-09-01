#include<stdio.h>

int main()
{
	unsigned int value = 0;
	printf("输入一个无符号数：");
	scanf("%d",&value); 
	
	//转换十进制为二进制 

	//计算二进制值中为1的位数 
	int counts = 0;
	for(counts = 0; value != 0; value >>=1) 
	{
		if((value & 1) != 0)
		{
			counts += 1;
		}
	}
	
	printf("\n这个数字在二进制的表示下，值为1的位有%d个。", counts);  
	return 0;
}
