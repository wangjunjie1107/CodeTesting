#include<stdio.h>
#include<stdlib.h>

int main()
{
	int nums[20];
	int ctr, inner, outer, didSwap, temp;
	
	for(ctr = 0; ctr < 20; ctr++)
	{
		nums[ctr] = (rand()%99) + 1;
	} 
	
	puts("\nHere is the list before the sort:");
	for(ctr = 0; ctr < 20; ctr++)
	{
		printf(" %d ", nums[ctr]);
	}
	
	for(outer = 0; outer < 19; outer++)
	{
		didSwap = 0;
		for(inner = outer; inner < 20; inner++)
		{
			if(nums[inner] > nums[outer])
			{
				temp = nums[inner];
				nums[inner] = nums[outer];
				nums[outer] = temp;
				didSwap = 1;
			}
		}
		if(didSwap == 0)
		{
			break;
		}
	}
	
	printf("\nHere is the list after the sort:\n");
	for(ctr = 0; ctr < 20; ctr++)
	{
		printf(" %d ", nums[ctr]);
	}
	
	return 0;
}
