#include "STD.c"

#include<stddef.h>  //offsetof������ͷ�ļ�
					//offsetof���ṹ�����ͣ� ���ԣ� 
 
typedef struct Person
{
	int a; // 0-3
	char p[64]; // 4- 67
	char b; //68
	int c;//69-72
	double d;//73-80
}MyPerson;

int main()
{
		printf("a���Ե�ƫ����Ϊ��%d\n", offsetof(struct Person, a));
		printf("p���Ե�ƫ����Ϊ��%d\n", offsetof(struct Person, p[64]));
		printf("b���Ե�ƫ����Ϊ��%d\n", offsetof(struct Person, b));
		printf("c���Ե�ƫ����Ϊ��%d\n", offsetof(struct Person, c));
		printf("d���Ե�ƫ����Ϊ��%d\n", offsetof(struct Person, d));

	return 0;
}
 
