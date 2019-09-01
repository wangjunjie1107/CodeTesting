#include<stdio.h>
#include<string.h>
 
int main()
{
	char ch[]="hello weorld";
	//puts 自带换行
	puts(ch);
	
	fputs(ch, stdout);
	puts(""); //换行 
	printf("%s",ch);
	puts("");
	
	printf("数组大小：%d\n", sizeof(ch));
	printf("字符串长度：%d", strlen(ch));
	
	return 0;
	 
}
