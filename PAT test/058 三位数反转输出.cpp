#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
//��λ����ת��� 
int main()
{
    //��������
    int n;

    //�������
    scanf("%d", &n);
    if(n % 10 != 0)
    {
    	printf("%d%d%d", n % 10, n / 10 % 10, n / 100);
	}
	else
	{
		printf("%d%d", n / 10 % 10, n / 100);
	}

   
    //����
    return 0;
}
