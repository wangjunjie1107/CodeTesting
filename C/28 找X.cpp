#include<stdio.h>

int main01()  //�ҵĴ� 
{
	int n;
	int i;
	int x;
	
	scanf("%d",&n);  //��������Ĵ�С 
	int arr[n];
	
	for(i=0; i<n; i++)     //�������� 
	{
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&x);   //����һ����x 
	
	for(i=0; i<n; i++)   //�ж�������ڲ���������
	{
		if(x==arr[i])
		{
			printf("%d\n", i);  //�ҵ��Ļ�
			break;
		}
	}
	
	if(i==n)   //���û�ҵ�
	{
		printf("-1\n");
	}
	return 0;
} 



 //���ϵĴ�
const int maxn = 210;
int a[maxn]; //���n���� 
int main() 
{
	int n,x;
	while(scanf("%d", &n) != EOF)   //�������� 
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
	}
	
	scanf("%d", &x);
	
	int k;
	
	for(k = 0; k < n; k++)   //��������Ԫ��
	{
		if(a[k]==x)
		{
			printf("%d\n", k);
			break;    //�ҵ��Ļ��Ͳ��ü������������� 
		}
	 } 
	 
	 if(k==n)  //û�ҵ��Ļ� 
	 {
	 	printf("-1\n");
	  } 
	  
	  return 0;
} 
