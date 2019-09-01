#include<stdio.h>
#include<string.h>  //字符串头文件提供很多字符串处理函数

/* 
*   strstr("string1", "string2") //在字符串1中查找字符串2,将字符串替换为数组也可以 
*   strchr() //在字符串中查找字符
*   strcmp()//比较字符串
*   strcpy()//复制字符串
*   strlen()//返回字符串的长度
*   strcat()//连接字符串 
*/

char tracks[][80] = {
		"I left my heart in Harvard Med School",
		"Newark, Newark - a wonderful town",
		"Dancing with a Dork",
		"From here to maternity",
		"The girl from Iwo Jima",
};

void find_track(char search_for[])
{
	int i;
	for(i = 0; i < 5; i++)
	{
		if(strstr(tracks[i], search_for))
			fprintf("Track %i: '%s'\n", i, tracks[i]);			
	}
}

int main()
{
	char search_for[80];
	
	printf("Search for: ");
	fgets(search_for, 80, stdin);
	search_for[strlen(search_for) - 1] = '\0';
	
	find_track(search_for);
	return 0;	
}























