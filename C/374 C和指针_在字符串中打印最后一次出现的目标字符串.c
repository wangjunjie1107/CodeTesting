#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//���ַ���s1�в����ַ���s2���ҳ��ֵ�λ�ã�������һ��ָ���λ�õ�ָ��
char * my_strrstr(char const * s1, char const *s2)
{
	register char * last;
	register char * current;

	//��ָ���ʼ��Ϊ�����Ѿ��ҵ���ǰһ��ƥ���λ��
	last = NULL;

	//ֻ���ڵڶ����ַ�����Ϊ�յ�ʱ��Ž��в��ң����s2Ϊ�գ�����NULL
	if (*s2 != '\0')
	{
		//����s2��s1�е�1�γ��ֵ�λ��,���δ�ҵ����򷵻�NULL
		current = strstr(s1, s2);

		//����ÿ���ҵ��ַ�����ʱ����ָ��ָ�����ĳ�ʼλ�ã�Ȼ����Ҹ��ַ�����һ��ƥ��λ��
		while (current != NULL)
		{
			last = current;
			current = strstr(last + 1, s2);
		}
	}

	//����ָ�������ҵ������һ��ƥ�����ʼλ�õ�ָ��
	return last;
}
int main()
{

	char s1[] = "wangjunjiewangjunjiewangjunjiehahaha wangjunjie111";
	char s2[] = "jun";
	char * temp =my_strrstr(s1, s2);
	printf("%s\n", temp);//��ӡ��s1�����һ�γ���s2��ʣ����ַ���


	system("pause");
	return EXIT_SUCCESS;
}
