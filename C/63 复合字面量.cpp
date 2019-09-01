#include<stdio.h>
#define COLS 4

int sum2d(const int ar[][COLS], int rows);
int sum(const int ar[], int n);

int main(void)
{
	int total1,total2,total3,total4;
	int * pt1;
	int (*pt2)[COLS];
	
	pt1 = (int[2]){10, 20};
	pt2 = (int[2][COLS]){{1,1,1,1},{2,2,2,2}};
	
	total1 = sum(pt1, 2);
	total2 = sum2d(pt2, 2);
	total3 = sum((int []){1,2,3,4,5,6},6);
	total4 = sum2d((int[][COLS]){{1,1,1,1},{2,2,2,2},{3,3,3,3}}, 3);
	
	printf("total1 = %d.\n\n", total1);
	printf("total2 = %d.\n\n", total2);
	printf("total3 = %d.\n\n", total3);
	printf("total4 = %d.\n\n", total4);
	
	return 0; 
 } 
 

int sum2d(const int ar[][COLS], int rows)
{
 	int i;
 	int j;
 	int tot = 0;
 	
 	for(i = 0; i < rows; i++)
 		for(j = 0; j < COLS; j++)
 			tot += ar[i][j];
 			
 	return tot;
}
 
 
int sum(const int ar[], int n)
{
	int i;
	int tot = 0;
	
	for(i = 0; i < n; i++)
		tot += ar[i];
	
	return tot;
}












