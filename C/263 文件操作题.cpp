#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = fopen("C:\\code\\test.txt", "w");
	if(NULL == fp)
	{
	printf("Open Failed!\n");
	exit(-1);
	}
	// 	
	char ch = getchar();
	while(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
	{
	
	fputc(ch, fp);
	fputc('\r', fp);//'\r'就是把光标移动到行首，但不会换行
	fputc('\n', fp);//'\n'就是光标下移一行却不会移到这一行的开头
	
	//fprintf(fp, "%c\r\n", ch);
	getchar();			// 吃掉输入时的回车符
	ch = getchar();		// 继续接收字符
	}
	
	fclose(fp);		// 关闭文件
	return 0;
}

