#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//�����±�Խ�� ��ɴ�ӡ����
void test01()
{
	char buf[3] = "abc";
	printf("%s\n", buf);
}

//ָ����ӻ᲻�ϵĸı�ָ���ָ�򣬴Ӷ����Է��ʲ�ͬ���ڴ�
void test02()
{
	char *p = (char *)malloc(sizeof(char) * 20);
	char buf[] = "abcdefg";

	int n = strlen(buf);
	int i;

	for (i = 0; i < n; i++)
	{
		*p = buf[i];
		printf("%c", *p);

		//�޸�ָ���ָ��
		p++;
		
	}
	
}
int main()
{
	//test01();
	test02();

	system("pause");
	return EXIT_SUCCESS;
}
