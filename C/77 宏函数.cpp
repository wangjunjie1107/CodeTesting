#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MYADD(x,y) (x)+(y)
//�꺯��  Ҫ��֤����������Բſ���
//�꺯�� ��һ���̶���  �����ͨ�ĺ���Ч�ʸ� 
//��ͨ����������ջ�ͳ�ջʱ���ϵĿ���
//����ͨ����һЩ�Ƚ�Ƶ������С�ĺ�����װΪ�꺯�� 
//�꺯�� �ŵ㣺�Կռ� �� ʱ�� 
int myAdd(int x, int y)
{
	return x + y;
}
 
void test01()
{
	int a = 10;
	int b = 12;
	int ret = MYADD(a,b);
	
	printf("%d\n", ret);
} 
 
 
int main()
{
 	test01();
 	
 	return 0;
}













