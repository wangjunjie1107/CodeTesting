#include<stdio.h>

int main01()  //我的答案 
{
	int n;
	int i;
	int x;
	
	scanf("%d",&n);  //输入数组的大小 
	int arr[n];
	
	for(i=0; i<n; i++)     //输入数组 
	{
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&x);   //输入一个数x 
	
	for(i=0; i<n; i++)   //判断这个数在不在数组中
	{
		if(x==arr[i])
		{
			printf("%d\n", i);  //找到的话
			break;
		}
	}
	
	if(i==n)   //如果没找到
	{
		printf("-1\n");
	}
	return 0;
} 



 //书上的答案
const int maxn = 210;
int a[maxn]; //存放n个数 
int main() 
{
	int n,x;
	while(scanf("%d", &n) != EOF)   //输入数组 
	{
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
	}
	
	scanf("%d", &x);
	
	int k;
	
	for(k = 0; k < n; k++)   //查找数组元素
	{
		if(a[k]==x)
		{
			printf("%d\n", k);
			break;    //找到的话就不用继续往下面找了 
		}
	 } 
	 
	 if(k==n)  //没找到的话 
	 {
	 	printf("-1\n");
	  } 
	  
	  return 0;
} 
