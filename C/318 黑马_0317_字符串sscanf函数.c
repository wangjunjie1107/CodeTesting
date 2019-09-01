#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
		%*s �� %*d ��������

		%[width]s ��ָ����ȵ�����

		%[a-z] ƥ�� a �� z �������ַ�(�����ܶ��ƥ��)

		%[aBc] ƥ�� a��B��c ��һԱ��̰����

		%[^a] ƥ��� a �������ַ���̰����

		%[^a-z] ��ʾ��ȡ�� a-z ����������ַ�
*/


//��������
void test01()
{
	char buf[1024] = { 0 };
	//����ǰ�������
	//ƥ���һ���ַ��Ƿ������֣�����ǣ�������
	//���������ֹͣƥ��
	sscanf("123456aaaa", "%*d%s", buf);
	printf("buf:%s\n", buf);
}

//��ȡָ����ȵ�����
void test02()
{
	char buf[1024] = { 0 };
	sscanf("123456aaaa", "%7s", buf);
	printf("buf:%s\n", buf);
}

//ƥ���ַ� a-z
void test03()
{
	char buf[1024] = { 0 };
	//����ǰ�������
	//��ƥ���һ���ַ����ж��ַ��Ƿ��� a-z �е��ַ��������ƥ��
	//�������ֹͣƥ��
	sscanf("1abciabriav5555", "%*d%[a-z]", buf);
	printf("buf:%s\n", buf);
}

//ƥ���ַ� aBc �е��κ�һ��
void test04()
{
	char buf[1024] = { 0 };
	//����ǰ�������
	//��ƥ���һ���ַ��Ƿ��� aBc �е�һ��������ǣ���ƥ�䣬���������ֹͣƥ��
	//ֱ����һ������aBc���ַ�����ֹͣƥ��
	sscanf("1BcccBBBcaasssascacsacscabciabriav5555", "%*d%[aBc]", buf);
	printf("buf:%s\n", buf);
}

//ƥ���a���ַ�
void test05()
{
	char buf[1024] = { 0 };
	//����ǰ�������
	//��ƥ���һ���ַ��Ƿ���a������ǣ���ƥ�䣬���������ֹͣƥ��
	sscanf("1BcccBBBcaasssascacsacscabciabriav5555", "%*d%[^a]", buf);
	printf("buf:%s\n", buf);
}


//ƥ���a - z �������ַ�
void test06()
{
	char buf[1024] = { 0 };
	//����ǰ�������
	//��ƥ���һ���ַ��Ƿ���a-z��������ǣ���ƥ�䣬�������ֹͣƥ��
	sscanf("1221432BcccBBBcaasssascacsacscabciabriav5555", "%[^a-z]", buf);
	printf("buf:%s\n", buf);
}
int main()
{
	//�����ַ�
	//test01();
	
	//��ȡָ����ȵ�����
	//test02();

	//ƥ���ַ�a-z
	//test03();

	//ƥ���ַ� aBc �е��κ�һ��
	//test04();

	//ƥ���a���ַ�
	//test05();

	//ƥ���a - z �������ַ�
	test06();
	system("pause");
	return EXIT_SUCCESS;
}
