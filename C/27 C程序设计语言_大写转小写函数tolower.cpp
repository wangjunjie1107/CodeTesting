#include<stdio.h>
#include<ctype.h>

//����tolower��ͷ�ļ�<ctype.h>�ж���
//���Ѵ�д��ĸת��ΪСд��ʽ
//���Ұ������ַ�ԭ������ 

int main()
{
	int c;
	while((c = getchar()) != EOF)
		putchar(tolower(c));
	return 0;
 } 
