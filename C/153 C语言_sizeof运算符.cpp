#include<stdio.h>

/*
*  sizeof���Ǻ��������Բ���Ҫ�����κ�ͷ�ļ������Ĺ����Ǽ���һ���������͵Ĵ�С����λΪ�ֽ�
*  sizeof�ķ���ֵΪsize_t
*  size_t������32λ����ϵͳ����unsigned int����һ���޷��ŵ�����
*/
int main()
{
	int a;
	int b = sizeof(a); //sizeof�õ�ָ��ֵռ���ڴ�Ĵ�С����λ���ֽ�
	printf("%d\n", b);
	
	size_t c = sizeof(a);
	printf("c = %u\n", c); //���޷������ķ�ʽ���C��ֵ
	
	return 0; 
 } 
