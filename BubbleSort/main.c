#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// The main loop
int main( void )
{

	// Declare the variables.
	int i, j, count = 5;
	float temp, n[ 5 ] = { 8, 4, 2, 7, 5 };

	//
	printf("The original vector is: \n");
	for ( i = 0; i < 5; i++)
	{
		printf( "%10.4f", n[ i ] );
	}
	printf("\n");

	// The main algorithm for Bubble Sort.
	for( i = 0; i < 5; i++  )
	{
		for( j = 0; j < ( 4 - i ); j++  )
		{
			if ( n[ j ] >= n[ j + 1 ] )
			{
				temp = n[ j ];
				n[ j ] = n[ j + 1 ];
				n[j + 1] = temp;
			}

		}
	}

	//
	printf("The new vector is: \n");
	for ( i = 0; i < 5; i++)
	{
		printf( "%10.4f", n[ i ] );
	}
	printf("\n");

	//
	return 0;
}