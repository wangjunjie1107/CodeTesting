#include<stdio.h>
#include<string.h>
 
int main()
{
	char ch[]="hello weorld";
	//puts �Դ�����
	puts(ch);
	
	fputs(ch, stdout);
	puts(""); //���� 
	printf("%s",ch);
	puts("");
	
	printf("�����С��%d\n", sizeof(ch));
	printf("�ַ������ȣ�%d", strlen(ch));
	
	return 0;
	 
}
