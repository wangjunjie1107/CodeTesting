#include<stdio.h>
#include<string.h>
#include<stdlib.h>

union vars
{
	double a;
	float b;
	int c;
	short d;
	char f;
	char arr[12];
}var;

int main()
{
	//�������С16���ֽڣ�����4���ֽ���Ч
	//16 = 2 * 8��
	//��������������ͣ�������ֽڳ���
	//double ���ռ8���ֽڣ�arr[12]��ʹ������double
	//�����16���ֽ�
	 
	//�����������һ�鱻��ֵ�ģ���׼ȷ��
	//֮ǰ��ֵ�����ݻᱻ���� 
	printf("%d\n", sizeof(var));
	
	return 0;
}
