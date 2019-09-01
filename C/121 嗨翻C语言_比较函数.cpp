#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int scores[] = {543,323,32,554,11,3,112};
	int i;
	qsort(scores, 7, sizeof(int), compare_scores_desc);
}
