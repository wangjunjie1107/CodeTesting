#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

// memset��ͷ�ļ�Ϊ string.h

// ����ʹ��memset��ֵ0��-1����Ϊmemsetʹ�õ��ǰ��ֽڸ�ֵ������ÿ���ֽڸ�ͬ����ֵ���������int�͵�4���ֽھͻᱻ����ͬ����ֵ��
// ������0�Ķ����Ʋ���Ϊȫ0�� -1�Ķ����Ʋ���ȫΪ1��������Ū��
// ���Ҫ�����ݸ��������֣�����1������ʹ��fill����
 
int main()
{
	int a[3] = {1,2,3};
	//0
	memset(a, 0, sizeof(a));
	for(int i = 0; i < 3; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	//-1
	memset(a, -1, sizeof(a));
	for(int i = 0; i < 3; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	//1 
	memset(a, 1, sizeof(a));
	for(int i = 0; i < 3; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	 
	 
	return 0;
} 
