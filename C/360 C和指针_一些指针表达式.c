#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void test()
{
	char p = 'a';
	char * temp = &p;

	printf("���ʽ��\n\tchar p = 'a';\n\tchar * temp = &p;\n\n"); //��ӡ���ʽ

	printf("&p ��ʾ �ַ�a�ĵ�ַ��%d\n\n\n", &p);
	printf("temp ��ʾ �ַ�a�ĵ�ַ��%d\n\n\n", temp);
	printf("&temp ��ʾ �ַ�ָ��temp�ĵ�ַ��%d\n\n\n", &temp);
	printf("*temp ��ʾ �ַ�ָ��tempָ����ڴ��е�ֵ��%c\n\n\n", *temp);
	printf("*temp + 1 ��ʾ �ַ�ָ��tempָ����ڴ��е�ֵ �ټ���1 ��ʾ��ĸb��%c\n\n\n", *temp + 1);
	printf("*(temp + 1) ��ʾ ���ַ�ָ��tempָ����ڴ��λ�ü�1��Ȼ���ٽ����ã������δ�����\n\n\n");
	printf("++temp ��ʾ tempָ����ڴ����һ��λ��,��Ϊδ���壬���Խ�������Ϸ���%d\n\n\n");
	printf("temp++ ��ʾ tempָ����ڴ����һ��λ�ã���Ϊδ���壬���Խ�������Ϸ�\n\n\n");
	printf("*++temp ��ʾ�Ƚ�ָ����ƣ�Ȼ�������\n\n\n");
	temp = &p;
	printf("*temp++ ��ʾ ++����������temp��һ�ݿ�����Ȼ��++����������temp��ֵ�������temp�Ŀ�����ָ���ӷ��ʲ�����%c\n\n\n", *temp++);
	temp = &p;
	printf("++*temp ��ʾ �ȶ�temp���н����ã�Ȼ�󽫽����õ�ֵ��1:%c\n\n\n", ++*temp);
	temp = &p;
	printf("(*temp)++ ��ʾ �ȶ�temp���н����ã�Ȼ�󽫽����õ�ֵ��1  ʹ�ú�׺���ʽ����++��Ҫ�����ţ���Ϊ�������ȼ��Ƚϸ�:%c\n\n\n", (*temp)++);
	temp = &p;
	printf("++*++temp ��ʾ �ȶ�temp����++��Ȼ�󽫽����ã�Ȼ��Խ����ó�����ֵ����+1  �����δ����ģ���Ϊ��û�г�ʼ��temp+1���ڴ�\n\n\n");

}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
