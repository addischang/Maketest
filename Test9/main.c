#include<stdio.h>

/* This is the test for sturcture member. */

/* Define the structure. */
struct card
{
	char *face;
	char *suit;
};

// The main loop
int main( void )
{
	struct card aCard;
	struct card *cardPrt;

	aCard.face = "ace";
	aCard.suit = "spades";

	cardPrt = &aCard;

	/*  */
	printf(" %s of %s \n %s of %s \n %s of %s \n", 
		aCard.face, aCard.suit,
		cardPrt->face, cardPrt->suit,
		( *cardPrt ).face, ( *cardPrt ).suit );

	/*  */
	return 0;
};
