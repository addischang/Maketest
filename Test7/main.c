#include<stdio.h>

// The main loop
int main()
{
	// 
	float sins( float );
	// float pows( float, int );
 	// int factorial( int n ); 
	// 
	float x, y;
	x = 1.0;
        y = sins( x, 10 );

	// Print the summation of a & b.
	printf( " sin(%1f)= %f", x, y );

	//
	return 0;
}


float sins( float x, int n )
{
	//
	float pows( float, int );
	int factorial( int );

	float s, t, u;

	for( i=0, i<n; i++ )
	{
		s = pows( -1, i+1 );
		u = pows( x, i );
		t = factorial( i ) * 1.0;
		x = x + s * ( 1.0 / t ) * u;  
	}
	return x;
}


float pows( float x, int n  )
{
	int i;
	float y = 1.0;
	for( i=0; i<n; i++ )
	{
		y = y * x;
	}
	return y;
}

int factorial( int n )
{	
	int i, y;
	y = 1;
	for( i = 1; i < n+1; i++ )
	{
		y = y * i;	
	}
	return y;
}

