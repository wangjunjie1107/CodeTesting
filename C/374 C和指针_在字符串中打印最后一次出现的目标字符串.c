#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//在字符串s1中查找字符串s2最右出现的位置，并返回一个指向该位置的指针
char * my_strrstr(char const * s1, char const *s2)
{
	register char * last;
	register char * current;

	//把指针初始化为我们已经找到的前一次匹配的位置
	last = NULL;

	//只有在第二个字符串不为空的时候才进行查找，如果s2为空，返回NULL
	if (*s2 != '\0')
	{
		//查找s2在s1中第1次出现的位置,如果未找到，则返回NULL
		current = strstr(s1, s2);

		//我们每次找到字符串的时候，让指针指向它的初始位置，然后查找该字符串下一个匹配位置
		while (current != NULL)
		{
			last = current;
			current = strstr(last + 1, s2);
		}
	}

	//返回指向我们找到的最后一次匹配的起始位置的指针
	return last;
}
int main()
{

	char s1[] = "wangjunjiewangjunjiewangjunjiehahaha wangjunjie111";
	char s2[] = "jun";
	char * temp =my_strrstr(s1, s2);
	printf("%s\n", temp);//打印在s1中最后一次出现s2的剩余的字符串


	system("pause");
	return EXIT_SUCCESS;
}
