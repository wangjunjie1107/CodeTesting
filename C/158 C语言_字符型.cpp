#include<stdio.h>

/*

�ַ�����ʵ���ϲ����ǰѸ��ַ�����ŵ��������ڴ浥Ԫ��ȥ��
���ǽ����ַ���Ӧ�� ASCII ����ŵ������Ĵ洢��Ԫ�С�
char�ı��ʾ���һ��1�ֽڴ�С�����͡�

*/

int main()
{
	char ch = 'a';
	printf("sizeof(ch) = %u\n", sizeof(ch));
	
	printf("ch[%%c] = %c\n", ch); //��ӡ�ַ�
	printf("ch[%%d] = %d\n", ch); //��ӡ 'a'��ASCII��ֵ
	
	char A = 'A';
	char a = 'a';
	
	printf("a = %d\n", a);  //97
	printf("A = %d\n", A); //65
	
	printf("A = %c\n", 'a'-32); //Сдaת��дA
	printf("a = %c\n", 'A'+32); //��дAתСдa
	
	ch = ' ';
	printf("���ַ���%d\n", ch); //���ַ�ASCII��ֵΪ32
	printf("A = %c\n", 'a'-' ');//Сдaת��дA
	printf("a = %c\n",'A'+' ');//��дAתСдa
	
	return 0; 
	
	
	
	
	
	
	
	
	
	
	 
	
 } 
