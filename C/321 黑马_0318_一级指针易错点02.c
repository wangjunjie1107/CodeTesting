#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//���ؾֲ������ĵ�ַ
//char *test01()
//{
//	char buf[] = "wangjunjie"; //ջ��
//	printf("%s\n", buf);
//
//	return buf;
//}

void test02()
{
	char * p = (char * )malloc(100);
	strcpy(p, "wangjunjie");
	printf("%s\n", p);

	if (p != NULL)
	{
		//free()�����Ĺ���ֻ�Ǹ���ϵͳ p ָ����ڴ���Ի�����
		//����˵, p ָ����ڴ�ʹ��Ȩ������ϵͳ
		//���ǣ�p ��ֵ����ԭ����ֵ( ( Ұָ��) ) ��p ����ָ��ԭ�����ڴ�
		free(p);
		p = NULL; //��ָ���ÿ�
	}

	if (p != NULL)
	{
		free(p); //��Ϊ�Ѿ��ͷŹ�pָ����ڴ��ˣ����Բ������ٴβ�����ȥ�ͷ�Ұָ�롣
	}
}

int main()
{
	//char *p = test01();
	//printf("%s\n", *p);//��Ϊջ�����ڴ��Ѿ����ͷ��ˣ�������ȥ�����������

	test02();
	system("pause");
	return EXIT_SUCCESS;
}
