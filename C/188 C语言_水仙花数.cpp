#include<stdio.h>

int main()
{
	int index = 100;
	
	while(index <1000)
	{
		int a = index / 100;   //��λ 
		int b = index / 10 - a * 10;  //ʮλ  b = index / 10 % 10
		int c = index / 1 - a * 100 -b * 10;  //��λ   c = index % 10 
		
		if(a*a*a + b*b*b + c*c*c == index)
		{
			printf("����%d��ˮ�ɻ�����\n", index);
		} 
		
		index++;
	}
	
	return 0;
 } 
