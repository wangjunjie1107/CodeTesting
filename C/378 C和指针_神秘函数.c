#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//    "xyz" + 1 ��ʾһ��ָ�룬ָ���ַ����ĵ�2���ַ���y
//    *"xyz"  ��ʾ������һ��ָ���ַ�����ָ�룬����ǣ�x
//   "xyz"[2]  ��ʾ�ַ�z

//���غ��� ���ݲ���ֵ��һ��������ӡ��Ӧ���Ǻ�
void mystery(int n)
{
	
	n /= 10; 
	printf("%s\n", "**********" + 10 - n);
}
int main()
{
	void(*fp)(int) = mystery;//����ָ��

	
	fp(100);
	
	system("pause");
	return EXIT_SUCCESS;
}
