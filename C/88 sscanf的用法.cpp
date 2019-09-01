#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

//%*s 或 %*d 用于跳过数据
void test01()
{
	char * str = "777egnoaee";
	char buf[1024] = {0};
	//将str所指的数据存入buf中，但是跳过数字，只存储字母。 
	sscanf(str,"%*d%s",buf);  	

	printf("%s\n", buf); 

}   

void test02()
{
	char * str = "fabdiauv123154";  //在中间加空格或者\t都可以实现效果 
	
	char buf[1024] = {0};
	
	sscanf(str,"%*[a-z]%s",buf);   //忽略 a-z 的字符 
	printf("%s\n",buf); 
}

// 2 *[width]s  读取指定宽度的数据
void test03()
{
	char * str = "12345asdfgwe";
	
	char buf[1024] = {0};
	
	sscanf(str,"%8s",buf);//输出前八个字符	
 	
 	printf("%s\n",buf); 
} 

//3. %[a-z] 匹配a到z中任意字符（尽可能多的匹配） 
void test04()
{
	char * str = "12345ababababasdaiauaafgwe";
	
	char buf[1024] = {0};
	
	sscanf(str,"%*d%[a-c]",buf);//输出前八个字符	
 	
 	printf("%s\n",buf); 
} 

//4. %[aBc] 匹配a、B、c中一员，贪婪性 
void test05()
{
	char * str = "aabcde";
	
	char buf[1024] = {0};
	
	sscanf(str,"%[aBc]",buf);//在匹配的过程中，只要有一个匹配失败，后续就不再进行匹配 
 	
 	printf("%s\n",buf); 
} 
//5. %[^a] 匹配非a的任意字符，贪婪性 
void test06()
{
	char * str = "f11123feeewdaagawgrwaabcde";
	
	char buf[1024] = {0};
	
	sscanf(str,"%[^a]",buf);//在匹配的过程中，只要有一个匹配失败，后续就不再进行匹配 
 	
 	printf("%s\n",buf); 
} 

//6. %[^0-9] 匹配非0-9的任意字符，贪婪性 
void test07()
{
	char * str = "wffae11123feeewdaagawgrwaabcde";
	
	char buf[1024] = {0};
	
	sscanf(str,"%[^0-9]",buf);//在匹配的过程中，只要有一个匹配失败，后续就不再进行匹配 
 	
 	printf("%s\n",buf); 
} 

//7. 案例
void test08()
{
	char * ip = "127.0.0.1"; 
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	
	sscanf(ip,"%d.%d.%d.%d.",&num1,&num2,&num3,&num4);  //第三个参数是地址 
		
	printf("%d\n", num1);
	printf("%d\n", num2);
 	printf("%d\n", num3);
 	printf("%d\n", num4);

}

void test09()
{
	char * str = "abcde#wangjunjie@12345";
	
	char buf[1024] = {0};
	
	sscanf(str,"%*[^#]%*#%[^@]",buf);  //多种解法 
	
	printf("%s\n",buf); 
	}
	
void test10()
{
	char * str = "helloworld@itcast.cn";
	
	char buf1[1024] = {0};
	char buf2[1024] = {0};
	sscanf(str,"%[^@]",buf1);  //多种解法 
	sscanf(str,"%*[^@]%*[@]%s",buf2);   //特殊字符 比如@ 要用[]括起来 
	
	printf("%s\n",buf1); 
	printf("%s\n",buf2); 
	}	

void test11()
{
	char * str = "123abcd$wangjunjie@000qwe";
	
	char buf1[1024] = {0};
	
	sscanf(str,"%*[^$]%*[$]%10s",buf1);  //多种解法 
	
	printf("%s\n",buf1); 

	}	
int main()
{
	test11();
	
	return 0;
}




