//�ڴ��������

#include<string.h>
#include<stdio.h>

void Memset()
{
	int a[10];
	
	//�� a ���ڴ������ǰ 10 ���ֽ��Բ��� 1 ����
	
	//�����ַ���c��Ȼ����Ϊint��
	//��������unsigned char , ��ΧΪ0~255
	
	memset(a, 97, sizeof(a));
	
	for(int i = 0; i < 10; i++)
	{
		printf("%c\n", a[i]);
	}
}

void Memcpy()
{
	int a[10] = {1,2,3,5,4,6,8,4,55,44};
	int b[10];
	
	//���� a ��ָ���ڴ����ݵ�ǰn���ֽ�
	//�� b ��ָ���ڴ��ַ�ϡ�
	memcpy(b,a,sizeof(a));
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", b[i]);
	}
}

void Memmove()
{
	int a[10] = {1,2,3,5,4,6,8,4,55,44};
	int b[10];
	
	//���� a ��ָ���ڴ����ݵ�ǰn���ֽ�
	//�� b ��ָ���ڴ��ַ��
	
	memmove(b,a,sizeof(a));
	
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", b[i]);
	}
}

void Memcmp()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,1};
	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	
	//�Ƚ� a �� b ��ָ���ڴ������ǰ10���ֽ�
	//��ȣ� 0
	// a > b : >0
	// a < b: <0 
	int value = memcmp(a, b, sizeof(a));
	
	printf("value = %d\n", value);
	
 } 
 
int main()
{
	//Memset();
	//Memcpy();
	//Memmove(); //�÷���memcpy()һ��
	 Memcmp();
	return 0;
 } 
