#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<math.h>
#include<Windows.h>
#include<time.h>
#include<conio.h>


int score = 0;     //分数 
int dx = 0,dy = 0; //偏移坐标 
int lx = 0,ly = 0; //记录蛇尾坐标 
void InitSnake(); 
void InitFood();
void ShowUI(); 
void PlayGame();
void InitWall(); 

/*
1  定义蛇的结构体
2  初始化蛇和食物
3  开始游戏 
    	蛇和墙的碰撞
		蛇和自身的碰撞
		蛇和食物的碰撞
 			重新随机食物
			蛇身体增长
			分数增长 
		方向键控制
4	游戏结束

*/



//定义蛇的结构体 
#define WIDE 60
#define HIGH 20 
struct BODY
{
	int X;
	int Y;
};
struct SNAKE
{
	int size;
	struct BODY body[WIDE*HIGH];
}snake; 



int food[2] = {0}; //food[0]为X坐标 food[1]为Y坐标 



//食物的随机产生   函数 
void InitFood()  
{
	
	srand((size_t)time(NULL));  //随机食物 
	food[0] = rand()%WIDE;
	food[1] = rand()%HIGH;
}


//蛇的初始化   函数 
void InitSnake()
{
	snake.size = 2;
	
	snake.body[0].X = WIDE/2;   //蛇的头部第一节 
	snake.body[0].Y = HIGH/2;
	
	snake.body[1].X = WIDE/2-1;   //蛇的第二节 
	snake.body[1].Y = HIGH/2; 
 } 
 
 
 //显示蛇的位置 和 食物的位置 
 void ShowUI()
 {
 	COORD coord;
 	
 	//更新末尾空格
	 coord.X = lx;
	 coord.Y = ly;
	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	 putchar(' ');
	  
 	//显示蛇的位置
	 for(int i = 0; i < snake.size; i++) 
	 {
	 	coord.X = snake.body[i].X;
		coord.Y = snake.body[i].Y; 
		
		//设置控制台光标位置 
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if(i == 0)
			putchar('@');
		else
			putchar('*'); 
		
	 }	
	 
	//显示食物位置
	coord.X = food[0];
	coord.Y = food[1];
	//设置控制台光标位置 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');  //#表示食物 
	
 }
 
 //  开始游戏  函数 
 void PlayGame()
 {
 	char key = 'D'; 
 	
 	//坐标判断  蛇是否和墙碰撞 
 	while(snake.body[0].X >= 0 && snake.body[0].X < WIDE
	   && snake.body[0].Y >= 0 && snake.body[0].Y < HIGH) 
 	{
 		//显示界面 
 		ShowUI();
 		
		//方向控制
		while(_kbhit())  //如果有键盘输入就接受，如果没有，就不接收 
		{	
			key = _getch();
		}	
		switch(key)
		{
			
		//上下左右
			case 'W':case 'w': dx =  0 ;  dy = -1;  break;
			case 'S':case 's': dx =  0 ;  dy = 1 ;  break;
			case 'A':case 'a': dx =  -1;  dy = 0 ;  break; 
			case 'D':case 'd': dx =  1 ;  dy = 0 ;  break; 
		
		//上下左右 
			case 72 : dx =  0  ;  dy = -1;  break; 
			case 80 : dx =  0  ;  dy = 1 ;  break; 
			case 75 : dx =  -1 ;  dy = 0 ;  break; 
			case 77 : dx =  1  ;  dy = 0 ;  break;  
		}
		
		//是否和自身碰撞
		for(int i = 1; i < snake.size; i++) 
		{
			if(snake.body[0].X == snake.body[i].X && snake.body[0].Y == snake.body[i].Y)
			{
				return;
			}
		}
		
		//蛇和食物的碰撞
		if(snake.body[0].X == food[0] && snake.body[0].Y == food[1])
		{
			
			//随机新食物
			InitFood();
			//蛇身体增长
			snake.size++; 
			//分数增长
			score += 10;  
			//关卡 速度 障碍物 
			
		 } 
		 
		 
		 //蛇更新坐标
		 
		 lx = snake.body[snake.size-1].X;
		 ly = snake.body[snake.size-1].Y;
		 
		 for(int i = snake.size - 1; i > 0; i--)
		 {
		 	snake.body[i].X = snake.body[i-1].X;
		 	snake.body[i].Y = snake.body[i-1].Y;	
	     } 
	     
	     //更新蛇的头部  
	     snake.body[0].X += dx;
	     snake.body[0].Y += dy;
	     
	     
	     Sleep(70);
	     system("cls");  
		 
	}
 
 
 }
 
 void InitWall()
 {
 	for(int i = 0; i <= HIGH; i++)
 	{
 		for(int j = 0; j <= WIDE; j++)
 		{
 			if(i == HIGH)
 				putchar('--');
			else if(j == WIDE)
				putchar('--');
			else
				putchar(' ');
		 }
		 putchar('\n');
	 } 
  } 
 
 
int main()
{	
	
	srand((size_t)time(NULL));
	
	//去掉控制台的光标 
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = sizeof(cci);
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci); 
	
	//InitWall();  墙的显示很糟糕 
	InitFood();
	InitSnake();
	PlayGame();
	getchar(); 
	
	return 0;
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
