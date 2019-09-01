//Filename:BLAKJACK.C
/* This program plays a game of Blackjack with you.
   The computer is the dealer and you are the victim-er,I mean
   Player. The dealer gets a card that you can see. The dealer 
   then asks if you want another card by asking "Hit" or "Stand".
   If you choose to hit, the dealer gives you another card. If you 
   choose to stand, the dealer draws or stands, and the game is played
   out according to the cards you and the dealer have. As with real Blackjack,
   the dealer stands on 17. The winner is announced only after both the
   player's and dealer's hands are finished.
*/

//*********************************************************************************
//ANSI C standard header files appear next

#include<stdio.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>

//**********************************************************************************
//Defined constants appear next

#define BELL '\a'
#define DEALER 0
#define PLAYER 1

/* Must keep two sets of totals for dealer and for player.
   The first set counts Aces as 1 and the second counts Aces as
   11. Unlike "real world" Blackjack, this program doesn't allow
   some Aces to be 1 while Aces are 11 in the same hand. 
*/

#define ACELOW 0
#define ACEHIGH 1

/* Only one global variable is used in this entire program. The variable
   holds 0, which means false initially. Once the user enters his or her 
   name in initCardsScreen(), this variable is set to 1(for true), so the name
   is never asked for again the rest of the program.
*/

int askedForName = 0; //False initially

//******************************************************************************

//This program's specific prototypes
void dispTitle(void)

void initCardsScreen(int cards[52], int playerPoints[2], int dealerPoints[2], 
					 int total[2], int * numCards);

int dealCard(int * numCards, int cards[52]);

void dispCard(int cardDrawn, int points[2]);

void totalIt(int points[2], int total[2], int who);

void dealerGetsCards(int *numCards, int cards[52], int dealerPoints[2]);

void playerGetsCard(int *numCards, int cards[52], int playerPoints[2]);

char getAns(char mesg[]);

void findWinner(int total[2]);

//**********************************************************************************
//C's program execution always begins at main() here

int main()
{
	//Equals 52 at beginning of each game
	int numCards;
	
	//For user's Hit/Stand or Yes/No response
	int cards[52];
	int playerPoints[2];
	int dealerPoints[2];
	int total[2];
	char ans;
	
	do
	{
		initCardsScreen(cards, playerPoints, dealerPoints, total, &numCards);
		dealerGetsCard(&numCards, cards, dealerPoints);
		
		printf("\n"); //Prints a blank line
		
		playerGetsCard(&numCards, cards, playerPoints);
		playerGetsCard(&numCards, cards, playerPoints);
		
		do
		{
			ans = getAns("Hit or stand(H/S)? ");
			if(ans == 'H')
			{
				playerGetsCard(&numCards, cards, playerPoints);
			}
		}
				
	}while(ans != 'S');	
	
	//Player's total
	totalIt(playerPoints, total, PLAYER);
	
	// 17: Dealer stops
	do
	{
		dealerGetsCard(&numCards, cards, dealerPoints);				
	} while(dealerPoints[ACEHIGH] < 17);
	
	//Dealer's total
	totalIt(dealerPoints, total, DEALER);
	
	findWinner(total);
	ans = getAns("\nPlay again(Y/N)? ");
	
	return;	
} 

/* This function initializes the face values of the deck of
   cards by putting four sets of 1-13 in the 52-card array. 
   Also clears the screen and displays a title
*/

void initCardsScreen(int card[52], int playerPoints[2], int dealerPoints[2], int total[2], int *numCards)
{
	int sub;
	int val = 1; //This function's work variables
	char firstName[15]; //Holds user's first name
	*numCards = 52; //Holds running total of number of cards
	
	for(sub = 0; sub <= 51; sub++) //Counts from 0 to 51
	{
		val = (val == 14)?1:val; //If val is 14, reset to 1	
		cards[sub] = val;
		val++;
	}	
	
	for(sub = 0; sub <= 1; sub++) //Counts from 0 to 1
	{
		playerPoints[sub] = dealerPoints[sub] = total[sub] = 0;
	}
	
	dispTitle();
		
	if(askedForName == 0)  //Name asked for only once
	{
		printf("\nWhat is your first name? ");
		scanf(" %s", firstname);
		
		askedForName = 1; //Don't ask prompt again
		printf("Ok, %s, get ready for casino action!\n\n", firstname);
		getchar(); //Discards newline. You can safely
	}	
	return;	
}

//***********************************************************************
/* This function gets a card for the player and updates the
   player's points.
*/

void playerGetsCard(int *numCards, int cards[52], int playerPoints[2]) 
{
	int newCard;
	newCard = dealCard(numCards, cards);
	
	printf("You draw: ");
	dispCard(newCard, playerPoints);
}

//*****************************************************************************
// This function gets a card for the dealer and updates the dealer's points.
void dealerGetsCard(int *numCards, int cards[52], int dealerPoints[2])
{
	int newCard;
	newCard = dealCard(numCards, cards);
	printf("The dealer draws: ");
	dispCard(newCard, dealerPoints);
}

//******************************************************************************
/* This function gets a card form the deck and stores it in either
   the dealer's or the player's hold of cards
*/

int dealCard(int *numCards, int cards[52])
{
	int cardDrawn, subDraw;

	time_t t; //Gets time for a random value
	srand(time(&t)); // Seeds random-number generator 
	subDraw = (rand() % (*numCards)); //From 0 to numcards
	
	cardDrawn = cards[subDraw];
	cards[subDraw] = cards[*numCards - 1]; //Puts top card
		
	(*numCards)-;
	return(cardDrawn);
} 



















