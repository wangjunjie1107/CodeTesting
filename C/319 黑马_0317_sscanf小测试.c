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

void test()
{
	char buf[1024] = { 0 };
	sscanf("123abcd$myname@000qwe", "%*3d%*5s%6s", buf);
	printf("%s\n", buf);

}
int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}
