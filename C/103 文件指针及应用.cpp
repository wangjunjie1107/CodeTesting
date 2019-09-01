#include<stdio.h>
#include<stdlib.h>
FILE * fptr;

int main()
{
	int age = 45; //Simple variables to write 
	float salary = 9670.50;
	
	fptr = fopen("F:\\A.txt","w");
	if(fptr == 0)
	{
		printf("An error occurred while opening the file.\n");
		exit(1);
	}
	
	fprintf(fptr, "Here is some stuff:\n");
	fprintf(fptr, "I am %d years old.\n", age);
	fprintf(fptr, "I make $%0.2f dollars every three months!\n", salary);
	
	fclose(fptr); //Always close your files 
	
	//使用附加模式给文件最后添加数据
	fptr = fopen("F:\\A.txt","a");//a ---append 附加模式
	if(fptr == 0)
	{
		printf("An error occurred while opening the file.\n");
		exit(1);
	 } 
	 
	 fprintf(fptr,"\nThat's all!\n"); //Adds the line
	 fclose(fptr) ; //Always close your files
	 
	return 0;
 } 
