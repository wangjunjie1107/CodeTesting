#include "STD.c"

char * func()
{
	char p[] = "wangjunjie"; //��ջ���洢������ִ����ɺ��ͷ� 
	printf("%s\n", p);
	
	return p;
}

int main()
{
	char * p = func(); 
	
	printf("%s\n", p);  //��main�����д�ӡ��������� 
	
	return 0;
 } 
