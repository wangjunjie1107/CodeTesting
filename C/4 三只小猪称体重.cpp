#include<stdio.h>
int main()
{
	int a; 
	int b;
	int c;
	printf("��������ֻС�������,���ö��Ÿ�������λ���"); 
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b&&a>=c) 
	{
		printf("\n");
		printf("�������ص�Ϊ��"); 
		printf("��һֻС��,����Ϊ��%d����",a);
	}
	else if(b>=a&&b>=c)
     	{
     	 printf("\n");
		 printf("�������ص�Ϊ��");
		 printf("�ڶ�ֻС��,����Ϊ��%d����",b);
		}
		else if(c>=a&&c>=b)
		{
		    printf("\n");
			printf("�������ص�Ϊ��"); 
	      	printf("����ֻС��,����Ϊ��%d����",c);
		} 
	return 0;
 } 
