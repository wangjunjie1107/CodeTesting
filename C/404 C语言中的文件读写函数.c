#include<stdio.h>

// r == 只读  read	     打开一个文本文件 
// w == 只写  write	    打开或创建一个文本文件 
// a == 追加  append   在文件末尾写数据 

// rb == 只读  二进制文件 
// wb == 只写  二进制文件  打开或创建一个二进制文件 
// ab == 追加  二进制文件  在文件末尾写数据 

// r+ == 读写   允许读或写  文本文件    打开一个文本文件 
// w+ == 读写   允许读或写  文本文件   打开或创建一个文本文件 
// a+ == 读写   允许读或写  文本文件   读 或者  追加写 


// rb+ == 读写   允许读或写  二进制文件    打开一个二进制文件 
// wb+ == 读写   允许读或写  二进制文件   打开或创建一个二进制文件  
// ab+ == 读写   允许读或写  二进制文件   读 或者  追加写 


int main()
{
	FILE * fp1 = fopen("F:\\电影\\test.txt","r");  //文件打开不成功时，可以尝试写双斜杠 \\ 
	
	//读取字符 
	char c = fgetc(fp1);
	printf("c = %c\n", c);
	fclose(fp1);
	fp1 == NULL;
	
	//写入字符 
	FILE * fp2 = fopen("F:\\电影\\test.txt","w");
	char d = 'V';  //要写入的字符 
	if(fputc(d,fp2))
	{
		printf("写入字符成功\n");
	}
	fclose(fp2); 
	fp2 == NULL;
	
	//写入字符串
	FILE * fp3 = fopen("F:\\电影\\test.txt","a+");  // a+  表示可以 读文件 或者  追加写   而不是覆盖源文件写 
	char * str = "wangjunjie";
	fputs(str,fp3); 
	fclose(fp3);
	fp3 == NULL;
	
	//读取字符串 
	FILE * fp4 = fopen("F:\\电影\\test.txt","r");
	char buffer[1024] = { 0 };
	
	fgets(buffer,1024,fp4);   //读取一行 放入到buffer中 
	
	printf("str2 = %s\n", buffer);
	fclose(fp4);
	
	
	if(fp4 != NULL)
	{
		printf("fp4 != null\n");
		fp4 == NULL;
	}
	
	
	

	return 0;
} 
