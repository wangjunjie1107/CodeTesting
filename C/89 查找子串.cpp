#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�Ż�˼·  memcmp(str,subStr,3) == 0 
//���ַ��������Ӵ�������з��ص�һ����ĸλ�ã����û�з���-1 
int myStrstr(char * str, char * subStr)
{
	int num = 0;
	while(*str != '\0')
	{
		if(*str != *subStr)
		{
			str++;
			num++;
			continue;
		}
		
		//������ʱָ��
		char * tempStr = str;
		char * tempsubStr = subStr;
		
		while(*tempStr != '\0')
		{
			if(*tempStr != *tempsubStr)
			{
				//ƥ��ʧ��
				str++;
				num++;
				break; 
			}
			tempStr++;
			tempsubStr++;
		}
		
		if(*tempsubStr == '\0')
		{
			//ƥ��ɹ� 
			 return num;
		}	
	}
	return -1; 
}

void test01()
{
	char * str = "abcdeffaiufhaienianviuabvigdnfgsf";
	
	int ret = myStrstr(str,"dnf");

	if(ret == -1)
	{
		printf("δ�ҵ��Ӵ�\n");
	}
	else
	{
		printf("�ҵ��Ӵ���λ�ã�%d\n", ret);
	}
} 

int main()
{
	test01();
	return 0;
} 
