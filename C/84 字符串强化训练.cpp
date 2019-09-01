#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

void test01()
{
		//ע���ַ�����Ҫ�н�����־'\0'
	char str1[] = {'h','e','l','l','o','\0'};
	printf("%s\n",str1);

	//�ַ������ʼ����ʣ����д0
	char str2[100] = {'h','e','l','l','o'};
	printf("%s\n",str2); 	
	
	//������ַ�����ʼ������ô������Ĭ�ϻ����ַ���β�����'\0'
	char str3[] = "hello";
	printf("%s\n",str3);
	printf("sizeof str: %d\n",sizeof(str3)); //ͳ�������е�0 
    printf("strlen str: %d\n",strlen(str3)); //��ͳ�������е�0
	 
	char str4[100] = "hello";
	printf("sizeof str: %d\n",sizeof(str4)); //ͳ��0 
	printf("strlen str: %d\n",strlen(str4)); //��ͳ��0	
	
	char str5[] = "hello\0world";
	printf("%s\n",str5);  //ֻ��ӡhello ������ \0 �Ѿ�ֹͣ�� 
	printf("sizeof str: %d\n",sizeof(str5));//12
	printf("strlen str: %d\n",strlen(str5)); //5
	
	char str6[] = "hello\012world";
	printf("%s\n",str6); // \012�ǰ˽�����תΪʮ���Ƶ�10����ASCII���б�ʾ���� 
	printf("sizeof str6: %d\n", sizeof(str6)); //12
	printf("strlen str6: %d\n", strlen(str6));
	
}
//�ַ�������
//����1 Ŀ���ַ��� ����2 Դ�ַ���
//����  ��Դ�ַ����е����� ������Ŀ���ַ���
//��һ�ַ�ʽ  ����[]��ʽ ���п��� 
void copyString01(char * dest, char * source)
{
	int len = strlen(source);
	for(int i = 0; i < len; i++)
	{
		dest[i] = source[i];
	}
	
	dest[len] = '\0';
} 
	


void test02()
{
	char * str = "hello world";
	
	char buf[1024];
	
	copyString01(buf, str);
	
	printf("%s\n",buf); 
}

//�ڶ��ַ�ʽ �����ַ���ָ����п���
void copyString02(char * dest, char * source)
{
	while(* source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	
	*dest = '\0';
}

void test03()
{
	char * str = "hello world";
	
	char buf[1024];
	
	copyString02(buf, str);
	
	printf("%s\n",buf); 
}

// �����ַ�ʽ  
void copyString03(char * dest, char * source)
{
	while(*dest++ = * source++){};  //������ \0 ��ʱ��ͽ����� 
}
void test04()
{
	char * str = "hello world";
	
	char buf[1024];
	
	copyString03(buf, str);
	
	printf("%s\n",buf); 
} 
int main()
 {
 	test04();
	return 0;
  } 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
