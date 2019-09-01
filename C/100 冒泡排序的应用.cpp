#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h> 

/*Searches a sorted list for balances */
int main()
{
	int ctr; //Loop counter
	int idSearch;//Customer to look for(the kry)
	int found = 0;// 1 (true) if customer is found
	
	//Defines the ten elements in each of the parallel arrays
	int custID[10] = {313, 453, 503, 101, 458, 541, 221,
					   145, 458, 235};
	float custBal[10] = { 0.00, 45.34, 71.23, 301.56, 22.51,
							152.21, 554.2, 15.12, 22.2, 155.2};
	//For sorting
	int tempID, inner, outer, didSwap;
	float tempBal;
	
	//First, sort the arrays by customer ID 
	for(outer = 0; outer < 9; outer++)
	{
		didSwap = 0; //Becomes 1(true) if list is not yet ordered
		
		for(inner = outer; inner < 10; inner++)
		{
			if(custID[inner] < custID[outer])
			{
				tempID = custID[inner];   //Must swap
				tempBal = custBal[inner]; //Both arrays!
				
				custID[inner] = custID[outer];
				custBal[inner] = custBal[outer];
				
				custID[outer] = tempID;
				custBal[outer] = tempBal;
				
				didSwap = 1;//True because a swap took place
			}
		}
		
		if(didSwap == 0) //Quits if list is now sorted
		{
			break;
		}
	}
	
	//Interact with the user looking for a balance
	printf("\n\n*** Customer Balance Lookup ***\n");
	printf("What is the customer number? \n");
	scanf(" %d", &idSearch);
	
	//Now, look for the balance in the arrays
	for(ctr = 0; ctr < 10; ctr++)  // Search maximum of 10 values
	{
		if(idSearch == custID[ctr])  // Found?
		{
			found = 1; //Yes, found is true
			break;    // No more search needed
		}
		
		if(custID[ctr] > idSearch) //Don't go too far
		{
			break;  //Know early the ID isn't in the list
		}
	} //Not found yet, loop again to try another match 
	
	//If the for-loop finishes, the customer ID was found
	// or all customers were searched unsuccessfully
	
	if(found)  //Cleaner than if (found == 1)
	{
		if(custBal[ctr] > 100.00)
		{
			printf("** That customer's balance is $%0.2f.\n", custBal[ctr]);
			printf("** No credit!\n");
		}
		else //Balance is less than 100.00
		{
			printf("\n** The customer's credit is good! $%.2f\n", custBal[ctr]);
		}
	}
	else  //Not found
		{
			printf("** You must have typed an incorrect customer ID.\n");
			printf("   ID %3d was not found in list.\n", idSearch);
		}	
		
	return 0;
 } 
