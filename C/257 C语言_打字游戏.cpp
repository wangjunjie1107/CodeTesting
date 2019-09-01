#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>


//1 提示 
void tips()
{
	printf("==============打字游戏==================\n");
	printf("==========请按任意键开始游戏============\n");
	printf("=============按ESC退出游戏==============\n");
	
	char a = _getch(); //输入字符不需要输入回车键
	if( a == 27 )  //27 在 ASCII码表中是ESC键
	{
		exit(0);
	} 
}
 
//2 随机产生字符串，并填入数组中
void CreateString(char * a)
{
	srand((unsigned int)time(NULL));  //产生随机数种子 
	
	for(int i = 0; i < 30; i++)
	{
		a[i] = rand()%26 + 'a';  //产生26个字母 
	}
	
	printf("\n%s\n\n", a);
}

//3 打字，匹配字符串 显示正确率和所用时间 
void StartMyGame(char * a)
{
	char test; //游戏者输入的字符
	int start_time;  //开始时间
	int end_time;//结束时间
	float count = 0;//记录正确的字符数
	 
	for(int i = 0; i < 30; i++)
	{
		//记录时间
		if(i == 0)
		{
			
			start_time = time(NULL); 
		}
		
		//匹配字符
		test = _getch(); //游戏者输入的字符
		
		if(test == a[i])//如果匹配 
		{
			count++; //记录正确的个数 
			printf("%c", test); //将游戏者打印的字符输出 
		}
		else
		{
			putchar('_');
		} 
	}	
	
	end_time = time(NULL);
	
	printf("\n\n游戏用时(秒): %d\n", end_time - start_time);
	printf("\n正确率：%0.2f%%\n", count / 30 * 100); 
	
}  
int main()
{
	char a[31];  //出现三十个字符，要留一个给结束符，否则会出现错误乱码 
	
	//1 提示
	//2 随机产生字符串，并填入数组中
	//3 打字，匹配字符串 显示正确率和所用时间
	while(1)
	{
		tips();
		CreateString(a); //地址传递
		StartMyGame(a);
	}
	
	return 0;
}
