#define _CRT_SECURT_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * test()
{
	char * p = 'c';

	return p;
}
int main()
{
	//1��δ��ʼ������Ұָ��
	char *p; 
	
	//2���ͷ��ڴ��Ҫʹָ��ָ��NULL������Ұָ��
	char * p1 = malloc(4);
	free(p1);
	p1 = NULL; //�ͷ��ڴ��Ҫʹָ��ָ��NULL������Ұָ��

	//����ָ���Ƿ�Ϸ�
	if (!p1)
	{
		printf("p1�ǺϷ���\n");
	}
	else
		printf("p1���ǺϷ��ģ�û���ÿգ�\n");


	//3����Ҫ����ָ��ջ�ڵ�ָ������ã���Ϊջ���ڴ��ں�������ʱ�ᱻ�ͷš�
	char * p2 = test();
	if (!p2)
	{
		printf("p2�ǺϷ���\n");
	}
	else
		printf("p2���ǺϷ��ģ���Ϊջ���ڴ��ڱ�����������ʱ�Ѿ����ͷţ�\n");
	system("pause");
	return EXIT_SUCCESS; //��stdlib.h�ж���

}
