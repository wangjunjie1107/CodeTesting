//������ һ��һ���ַ��ĸ��Ƶ���� 
 
//EOF������ͷ�ļ�<stdio.h>�У��Ǹ����������������ֵ��ʲô������Ҫ
//ֻҪ�����κ�char���͵�ֵ������ͬ���� 

#include<stdio.h>

int main()
{
	char c;
	while((c = getchar())!= EOF) //EOF�� end of file
		putchar(c); 
	
	//��֤EOF��ֵ Ϊ -1 
	int a;
	a = EOF;
	printf("EOF = %d\n", a); 
	return 0; 
}
