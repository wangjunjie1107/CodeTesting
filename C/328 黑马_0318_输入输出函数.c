#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stddef.h>




int main()
{
	
	//�ַ���������
	char a;
	a = getchar();
	putchar(a);
	
	//����Ч����ͬ 
	printf("\n");
	//puts("\n");
	
	//�ı����������� ????? gets�������ʹ�ã� 
	 puts("wangjunjie");

	
	char q2[20] = { 0 };
	scanf("%s", q2);
	printf("%s\n", q2);
	
	system("pause");
	return EXIT_SUCCESS;
}
