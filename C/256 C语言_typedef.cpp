#include<stdio.h>

/*

typedefΪC���ԵĹؼ���
	
������Ϊһ����������(�������ͻ��Զ�����������)����һ�������֣����ܴ��������͡�

��#define��ͬ��typedef�������������ͣ����������Ǳ��ʽ������ֵ
	
#define������Ԥ����typedef�����ڱ���׶�

*/

typedef int INT;
typedef char BYTE;

typedef struct type
{
	INT a;
	BYTE b;
}type;

int main()
{
	INT a;
	type i;
	
	i.a = 10;
	i.b = 'w';
	
	printf("%d\n%c\n", i.a, i.b);
	return 0;
 } 
