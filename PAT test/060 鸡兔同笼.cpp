#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 

int main()
{
    //��������
    int n;		//�����õ����� 
	int m;		//�����õ������� 
	 
    //���롢���㡢���
    scanf("%d%d", &n, &m);
    int k =  n - ((m - 2 * n) / 2);
    int r =  (m - 2 * n) / 2;
    if( k < 0 || r < 0  || k % 2 == 1 || r % 2 == 1)	
    {
    	//��Ч�𰸣�С��0�������� 
    	printf("No answer\n");
	}
	else
	{
		printf("%d %d\n", n - ((m - 2 * n) / 2) , (m - 2 * n) / 2);
	}

    //����
    return 0;
}
