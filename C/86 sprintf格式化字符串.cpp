#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

//sprintf ��ʽ���ַ���
void test01()
{
	char buf[1024];
	//memset ��һ�ֳ�ʼ�������������ǽ�ĳһ���ڴ��е�����ȫ������Ϊָ����ֵ�� 
	memset(buf,0,1024); 
	sprintf(buf,"������ %d�� %d�� %d��\n", 2018,5,6);
	
	printf("buf: %s\n",buf);
	
	memset(buf,0,1024);
	char str1[] = "hello";
	char str2[] = "world";
	
	int len = sprintf(buf,"%s %s\n",str1,str2); //sprintf���ص����ַ����ĳ��� 
	printf("buf: %s\n�ַ������ȣ�%d\n\n",buf,len);
	
	//����ת�ַ���
	memset(buf,0,1024);
	int num = 100;
	sprintf(buf,"%d\n",num); //ʮ���� 
	printf("buf: %s\n", buf);
	
	//���ÿ�� �Ҷ���
	memset(buf,0,1024);
	int num2 = 100;
	sprintf(buf,"%8d\n",num2);
	printf("buf: %s\n",buf); 
	
	//���ÿ�� �����
	memset(buf,0,1024);
	int num3 = 100;
	sprintf(buf,"%-8d",num2);
	printf("buf: %sa\n\n",buf); //��ӡ��ĸa��Ϊ�˿�����buf������� 
	
	//ת��16�����ַ���  Сд
	memset(buf,0,1024);
	sprintf(buf,"0x%x\n",num);   //ʮ������ 
	printf("buf: %s\n",buf);
	
	//ת��8�����ַ��� 
	memset(buf,0,1024);
	sprintf(buf,"0%o\n",num);   //�˽��� 
	printf("buf: %s\n",buf);
} 

 int main()
 {
 	test01();
 	
 	return 0;
  } 
