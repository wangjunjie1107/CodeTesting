#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
 
//һ���·�95Ԫ����������300Ԫ���ɴ�8.5�ۡ����빺���·�����������֧����������λС�� 
int main()
{
    //��������
    double n;		
	
    //���롢���㡢���
	scanf("%lf", &n);
	if(n >= 4)
	{
		//���� 
  		printf("%0.2f\n", (int)n * 95.0 * 8.5);		
	}
	else if(n >= 0 && n < 4) 
	{
		//������ 
		printf("%0.2f\n", (int)n * 95.0);
	}
	else
	{
		printf("-1\n");
	}
   
    //����
    return 0;
}
