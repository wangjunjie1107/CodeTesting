#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h> 

void test01()
{
		//注意字符串需要有结束标志'\0'
	char str1[] = {'h','e','l','l','o','\0'};
	printf("%s\n",str1);

	//字符数组初始化，剩余填写0
	char str2[100] = {'h','e','l','l','o'};
	printf("%s\n",str2); 	
	
	//如果以字符串初始化，那么编译器默认会在字符串尾部添加'\0'
	char str3[] = "hello";
	printf("%s\n",str3);
	printf("sizeof str: %d\n",sizeof(str3)); //统计数组中的0 
    printf("strlen str: %d\n",strlen(str3)); //不统计数组中的0
	 
	char str4[100] = "hello";
	printf("sizeof str: %d\n",sizeof(str4)); //统计0 
	printf("strlen str: %d\n",strlen(str4)); //不统计0	
	
	char str5[] = "hello\0world";
	printf("%s\n",str5);  //只打印hello ，遇到 \0 已经停止了 
	printf("sizeof str: %d\n",sizeof(str5));//12
	printf("strlen str: %d\n",strlen(str5)); //5
	
	char str6[] = "hello\012world";
	printf("%s\n",str6); // \012是八进制下转为十进制的10，在ASCII表中表示换行 
	printf("sizeof str6: %d\n", sizeof(str6)); //12
	printf("strlen str6: %d\n", strlen(str6));
	
}
//字符串拷贝
//参数1 目标字符串 参数2 源字符串
//需求  将源字符串中的内容 拷贝到目标字符串
//第一种方式  利用[]方式 进行拷贝 
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

//第二种方式 利用字符串指针进行拷贝
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

// 第三种方式  
void copyString03(char * dest, char * source)
{
	while(*dest++ = * source++){};  //拷贝到 \0 的时候就结束了 
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
  
  
  
  
  
  
  
  
  
  
  
  
  
  
