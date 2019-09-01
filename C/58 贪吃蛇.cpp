#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<math.h>
#include<Windows.h>
#include<time.h>
#include<conio.h>


int score = 0;     //���� 
int dx = 0,dy = 0; //ƫ������ 
int lx = 0,ly = 0; //��¼��β���� 
void InitSnake(); 
void InitFood();
void ShowUI(); 
void PlayGame();
void InitWall(); 

/*
1  �����ߵĽṹ��
2  ��ʼ���ߺ�ʳ��
3  ��ʼ��Ϸ 
    	�ߺ�ǽ����ײ
		�ߺ��������ײ
		�ߺ�ʳ�����ײ
 			�������ʳ��
			����������
			�������� 
		���������
4	��Ϸ����

*/



//�����ߵĽṹ�� 
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



int food[2] = {0}; //food[0]ΪX���� food[1]ΪY���� 



//ʳ����������   ���� 
void InitFood()  
{
	
	srand((size_t)time(NULL));  //���ʳ�� 
	food[0] = rand()%WIDE;
	food[1] = rand()%HIGH;
}


//�ߵĳ�ʼ��   ���� 
void InitSnake()
{
	snake.size = 2;
	
	snake.body[0].X = WIDE/2;   //�ߵ�ͷ����һ�� 
	snake.body[0].Y = HIGH/2;
	
	snake.body[1].X = WIDE/2-1;   //�ߵĵڶ��� 
	snake.body[1].Y = HIGH/2; 
 } 
 
 
 //��ʾ�ߵ�λ�� �� ʳ���λ�� 
 void ShowUI()
 {
 	COORD coord;
 	
 	//����ĩβ�ո�
	 coord.X = lx;
	 coord.Y = ly;
	 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	 putchar(' ');
	  
 	//��ʾ�ߵ�λ��
	 for(int i = 0; i < snake.size; i++) 
	 {
	 	coord.X = snake.body[i].X;
		coord.Y = snake.body[i].Y; 
		
		//���ÿ���̨���λ�� 
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		if(i == 0)
			putchar('@');
		else
			putchar('*'); 
		
	 }	
	 
	//��ʾʳ��λ��
	coord.X = food[0];
	coord.Y = food[1];
	//���ÿ���̨���λ�� 
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar('#');  //#��ʾʳ�� 
	
 }
 
 //  ��ʼ��Ϸ  ���� 
 void PlayGame()
 {
 	char key = 'D'; 
 	
 	//�����ж�  ���Ƿ��ǽ��ײ 
 	while(snake.body[0].X >= 0 && snake.body[0].X < WIDE
	   && snake.body[0].Y >= 0 && snake.body[0].Y < HIGH) 
 	{
 		//��ʾ���� 
 		ShowUI();
 		
		//�������
		while(_kbhit())  //����м�������ͽ��ܣ����û�У��Ͳ����� 
		{	
			key = _getch();
		}	
		switch(key)
		{
			
		//��������
			case 'W':case 'w': dx =  0 ;  dy = -1;  break;
			case 'S':case 's': dx =  0 ;  dy = 1 ;  break;
			case 'A':case 'a': dx =  -1;  dy = 0 ;  break; 
			case 'D':case 'd': dx =  1 ;  dy = 0 ;  break; 
		
		//�������� 
			case 72 : dx =  0  ;  dy = -1;  break; 
			case 80 : dx =  0  ;  dy = 1 ;  break; 
			case 75 : dx =  -1 ;  dy = 0 ;  break; 
			case 77 : dx =  1  ;  dy = 0 ;  break;  
		}
		
		//�Ƿ��������ײ
		for(int i = 1; i < snake.size; i++) 
		{
			if(snake.body[0].X == snake.body[i].X && snake.body[0].Y == snake.body[i].Y)
			{
				return;
			}
		}
		
		//�ߺ�ʳ�����ײ
		if(snake.body[0].X == food[0] && snake.body[0].Y == food[1])
		{
			
			//�����ʳ��
			InitFood();
			//����������
			snake.size++; 
			//��������
			score += 10;  
			//�ؿ� �ٶ� �ϰ��� 
			
		 } 
		 
		 
		 //�߸�������
		 
		 lx = snake.body[snake.size-1].X;
		 ly = snake.body[snake.size-1].Y;
		 
		 for(int i = snake.size - 1; i > 0; i--)
		 {
		 	snake.body[i].X = snake.body[i-1].X;
		 	snake.body[i].Y = snake.body[i-1].Y;	
	     } 
	     
	     //�����ߵ�ͷ��  
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
	
	//ȥ������̨�Ĺ�� 
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = sizeof(cci);
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci); 
	
	//InitWall();  ǽ����ʾ����� 
	InitFood();
	InitSnake();
	PlayGame();
	getchar(); 
	
	return 0;
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
