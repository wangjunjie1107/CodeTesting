#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
int main()
{
    //��������
    int n;	

    //���롢���㡢���
	scanf("%d", &n);
	if(n == 1)
	{
		printf("1\n");
	}
	else if(n % 2 == 0) 
	{
		printf("%d\n", (1 + n) * (n / 2));	//ż�� 
	}
	else
	{
		printf("%d\n", (1 + n) * (n / 2) + (1 + n) / 2 );	//���� 
	} 
   
    //����
    return 0;
}
