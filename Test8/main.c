#include<stdio.h>

// The main loop
int main()
{
	// 
	float sins( float, int );
	float pows( float, int );
 	// int factorial( int n ); 
	// 
	float x, y;
	int n;
	n = 10;
	x = 0.45;
        y = sins( x, n );

	// Print the summation of a & b.
	// printf( " %10.5f^%d = %10.5f", x, n, y );
	printf( "sin(%12.5f)=%12.5f", x, y );
	
	//
	return 0;
}


float sins( float x, int n )
{
	//
	float y, s, t, u, pows( float, int );
	int i, factorial( int );
	y = x;
	for( i=1; i<(n+1); i++ )
	{
		s = pows( -1.0, i );
		u = pows( x, 2*i+1 );
		t = factorial( 2*i+1 ) * 1.0;
		printf( "%10.5f %10.5f %10.5f %10.5f \n", y, s, u, t );
		y = y + s * ( u / t );  
	}
	return y;
}


float pows( float x, int n  )
{
	int i;
	float y = 1.0;	
	for( i=0; i<n; i++ )
	{
		y =  y * x;
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

