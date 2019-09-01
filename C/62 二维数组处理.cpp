#include<stdio.h>

#define ROWS 3
#define COLS 4
void sum_rows(int a[][COLS], int rows);
void sum_cols(int [][COLS], int );  //可以省略形参名 
int sum2d(int(*a)[COLS], int rows);
 
int main(void)
{
	int junk[ROWS][COLS] = 
	{
		{2,1,5,6}, 
		{2,8,5,8},
		{2,5,9,6}
	};
	
	sum_rows(junk,ROWS);
	sum_cols(junk,ROWS);
	printf("Sum of all elements = %d", sum2d(junk, ROWS));
	
	return 0;
 } 
 
 void sum_rows(int a[][COLS], int rows)
 {
 
 	int i,j;
 	for(i = 0; i < rows; i++)
 	{
 		int tot = 0;
 		for(j = 0; j < COLS; j++)
 		{
 			tot += a[i][j];
		}
		printf("row %d : sum = %d.\n", i, tot); 
	}
 }
 
  void sum_cols(int a[][COLS], int rows)
 {
 	
 	int i,j;
 	
 	for(i = 0; i < COLS; i++)
 	{   
	 	int tot = 0;  //每次都要初始化 
	 	
 		for(j = 0; j < rows; j++)
 		{
 			tot += a[j][i];
		}
		printf("clos %d : sum = %d.\n", i, tot); 
	}
 }
 
 int sum2d(int(*a)[COLS], int rows)
 {
 	
 	int i,j;
 	int tot = 0;
 	for(i = 0; i < rows; i++)
 	{
 		
 		for(j = 0; j < COLS; j++)
 		{
 			tot += a[i][j];
		} 
	}
	
	return tot;
 }
