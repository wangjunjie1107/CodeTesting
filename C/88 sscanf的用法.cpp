#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

//%*s �� %*d ������������
void test01()
{
	char * str = "777egnoaee";
	char buf[1024] = {0};
	//��str��ָ�����ݴ���buf�У������������֣�ֻ�洢��ĸ�� 
	sscanf(str,"%*d%s",buf);  	

	printf("%s\n", buf); 

}   

void test02()
{
	char * str = "fabdiauv123154";  //���м�ӿո����\t������ʵ��Ч�� 
	
	char buf[1024] = {0};
	
	sscanf(str,"%*[a-z]%s",buf);   //���� a-z ���ַ� 
	printf("%s\n",buf); 
}

// 2 *[width]s  ��ȡָ����ȵ�����
void test03()
{
	char * str = "12345asdfgwe";
	
	char buf[1024] = {0};
	
	sscanf(str,"%8s",buf);//���ǰ�˸��ַ�	
 	
 	printf("%s\n",buf); 
} 

//3. %[a-z] ƥ��a��z�������ַ��������ܶ��ƥ�䣩 
void test04()
{
	char * str = "12345ababababasdaiauaafgwe";
	
	char buf[1024] = {0};
	
	sscanf(str,"%*d%[a-c]",buf);//���ǰ�˸��ַ�	
 	
 	printf("%s\n",buf); 
} 

//4. %[aBc] ƥ��a��B��c��һԱ��̰���� 
void test05()
{
	char * str = "aabcde";
	
	char buf[1024] = {0};
	
	sscanf(str,"%[aBc]",buf);//��ƥ��Ĺ����У�ֻҪ��һ��ƥ��ʧ�ܣ������Ͳ��ٽ���ƥ�� 
 	
 	printf("%s\n",buf); 
} 
//5. %[^a] ƥ���a�������ַ���̰���� 
void test06()
{
	char * str = "f11123feeewdaagawgrwaabcde";
	
	char buf[1024] = {0};
	
	sscanf(str,"%[^a]",buf);//��ƥ��Ĺ����У�ֻҪ��һ��ƥ��ʧ�ܣ������Ͳ��ٽ���ƥ�� 
 	
 	printf("%s\n",buf); 
} 

//6. %[^0-9] ƥ���0-9�������ַ���̰���� 
void test07()
{
	char * str = "wffae11123feeewdaagawgrwaabcde";
	
	char buf[1024] = {0};
	
	sscanf(str,"%[^0-9]",buf);//��ƥ��Ĺ����У�ֻҪ��һ��ƥ��ʧ�ܣ������Ͳ��ٽ���ƥ�� 
 	
 	printf("%s\n",buf); 
} 

//7. ����
void test08()
{
	char * ip = "127.0.0.1"; 
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	
	sscanf(ip,"%d.%d.%d.%d.",&num1,&num2,&num3,&num4);  //�����������ǵ�ַ 
		
	printf("%d\n", num1);
	printf("%d\n", num2);
 	printf("%d\n", num3);
 	printf("%d\n", num4);

}

void test09()
{
	char * str = "abcde#wangjunjie@12345";
	
	char buf[1024] = {0};
	
	sscanf(str,"%*[^#]%*#%[^@]",buf);  //���ֽⷨ 
	
	printf("%s\n",buf); 
	}
	
void test10()
{
	char * str = "helloworld@itcast.cn";
	
	char buf1[1024] = {0};
	char buf2[1024] = {0};
	sscanf(str,"%[^@]",buf1);  //���ֽⷨ 
	sscanf(str,"%*[^@]%*[@]%s",buf2);   //�����ַ� ����@ Ҫ��[]������ 
	
	printf("%s\n",buf1); 
	printf("%s\n",buf2); 
	}	

void test11()
{
	char * str = "123abcd$wangjunjie@000qwe";
	
	char buf1[1024] = {0};
	
	sscanf(str,"%*[^$]%*[$]%10s",buf1);  //���ֽⷨ 
	
	printf("%s\n",buf1); 

	}	
int main()
{
	test11();
	
	return 0;
}




