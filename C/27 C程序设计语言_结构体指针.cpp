#include<stdio.h>

struct point
{
	int a;
	int b;
}point;

int main()
{
	//����һ���ṹ�壬����ֵ 
	struct point q = {1, 2};
	
	//����һ���ṹ��ָ�� 
	struct point *p;
	
	//ָ��ָ��ṹ��
	p = &q; 
	
	//ͨ��ָ������ṹ�� 
	printf("%d,%d\n", (*p).a, (*p).b);
	printf("%d,%d\n", p->a, p->b); //pΪָ��ʱ����ֱ���ü�ͷ�����ṹ��
	 
	//������ݸ������Ľṹ�ܴ�ʹ��ָ�뷽ʽ��Ч��
	//ͨ���ȸ��������ṹ��Ч��Ҫ�ߡ� 
	
	return 0;
 } 
 
 
 
 
 
 
 
 
