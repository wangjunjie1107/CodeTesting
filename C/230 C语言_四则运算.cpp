#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern void addition(int a,int b);
extern void division(int a,int b);
extern void multiply(int a,int b);
extern void subtraction(int a,int b);

int main()
{
	int a;
	int b;
	char c;
	char d;
	
	while(1)
	{
	
		scanf("%c%d%d", &c, &a, &b);
		switch(c)
		{
		case '+':
				addition(a, b);
				break;	
		case '-':
				subtraction(a, b);
				break;
				 
		case '*':
				multiply(a, b);
				break;
		case '/':
				division(a, b);
				break;
		case 'q':return 0; 
		default:printf("³ÌÐò½áÊø\n");
				return 0;
		}
	}
		
}


void addition(int a,int b)
{
	int c = a + b;
	printf("%d\n", c);
}

void division(int a,int b)
{
	int c = a / b;
	printf("%d\n", c);
}

void multiply(int a,int b)
{
	int c = a * b;
	printf("%d\n", c);
}

void subtraction(int a,int b)
{
	int c = a - b;
	printf("%d\n", c);
}

