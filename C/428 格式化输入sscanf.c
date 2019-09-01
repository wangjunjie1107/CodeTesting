#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h> 


//1 %*s��%*d	��������
void test01()
{
	char * str = "12345abcde";

	char buf[1024] = { 0 };

	sscanf(str, "%*d%s", buf); // abcde

	printf("buf = %s\n", buf);
}

void test02()
{
	//���������ո� �� \t �����
	char * str = "ab  cde12345";

	char buf[1024] = { 0 };

	sscanf(str, "%*[a-z]%s", buf); // cde12345
	
	printf("buf = %s\n", buf);

}

//2 %[width]s	��ָ����ȵ�����
void test03()
{
	char * str = "abcde12345";

	char buf[1024] = { 0 };

	sscanf(str, "%5s", buf); // abcde

	printf("buf = %s\n", buf);
}

//3 %[a-z]	ƥ��a��z�������ַ�(�����ܶ��ƥ��)
void test04()
{
	char * str = "12345savdafb";

	char buf[1024] = { 0 };

	sscanf(str, "%*d%[a-z]", buf); // savdafb

	printf("buf = %s\n", buf);
}

//4 %[aBc]	ƥ��a��B��c��һԱ��̰����
void test05()
{
	//�������ƥ��ʧ�ܣ��������ڽ���ƥ��
	char * str = "aabBBaccdabcdf12345";
	char buf[1024] = { 0 };

	sscanf(str, "%[aBc]", buf); //aa

	printf("buf = %s\n", buf); 

}

//5 %[^a] 	ƥ���a�������ַ���̰����
void test06()
{
	char * str = "ffff12345abcdeffff12345";
	char buf[1024] = { 0 };

	sscanf(str, "%[^abcde]", buf); // ffff12345

	printf("buf = %s\n", buf);
}


//6 %[^a-z]	��ʾ��ȡ��a-z����������ַ�
void test07()
{
	char * str = "abcde12345";
	char buf[1024] = { 0 };

	sscanf(str, "%[^0-9]", buf); //abcde

	printf("buf = %s\n", buf);
}

//��ϰ1
void test08()
{
	char * ip = "127.0.0.1";
	int num1, num2, num3, num4;

	sscanf(ip, "%d%*[.]%d%*[.]%d%*[.]%d", &num1, &num2, &num3, &num4);
	//sscanf(ip, "%d.%d.%d.%d", &num1, &num2, &num3, &num4);
	
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("num3 = %d\n", num3);
	printf("num4 = %d\n", num4);
}


//��ϰ2
void test09()
{
	char * str = "abcde#zhangtao@12346adf";

	char buf[1024] = { 0 };

	sscanf(str, "%*[a-e]#%[^@]", buf);

	printf("buf = %s\n", buf);

}

//�Ѹ����ַ���Ϊ: helloworld@itcast.cn,�����ʵ��helloworld�����itcast.cn�����
void test10()
{
	char * str = "helloworld@itcast.cn";

	char buf1[1024] = { 0 };
	char buf2[1024] = { 0 };

	sscanf(str, "%[^@]", buf1);
	sscanf(str, "%*[^@]%*[@]%s", buf2);

	//���򵥵ķ���
	//sscanf(str, "%[a-z]%*@%s", buf1, buf2);


	printf("buf1 = %s\n", buf1);
	printf("buf2 = %s\n", buf2);
}

int main()
{
	test01();
	test02();
	test03();
	test04();
	test05();
	test06();
	test07();
	test08();
	test09();
	test10();

	system("pause"); 
	return EXIT_SUCCESS;
}


