#include"tayler.h"

float tans( float x, int n )
{	
	//
	return sins( x, n ) / coss( x, n );
};

float coss( float x, int n )
{
	//
	float y, s, t, u;
	int i;
	
	y = 1.00;
	
	for( i = 1; i < ( n + 1 ); i++ )
	{
		s = pows( -1.0, i );
		u = pows( x, 2*i  );
		t = factorial( 2*i ) * 1.0;
		y = y + s * ( u / t );  
	}

	return y;
};

float sins( float x, int n )
{
	//
	float y, s, t, u;
	int i;
	
	y = x;

	for( i = 1; i < ( n + 1 ); i++ )
	{
		s = pows( -1.0, i );
		u = pows( x, 2*i+1 );
		t = factorial( 2*i+1 ) * 1.0;
		y = y + s * ( u / t );  
	}
	
	return y;
};


float pows( float x, int n  )
{
	int i;
	float y = 1.0;

	for( i=0; i<n; i++ )
	{
		y =  y * x;
	}

	return y;
};

float factorial( int n )
{	
	int i, y = 1;
	
	for( i = 1; i < ( n + 1 ); i++ )
	{
		y = y * i;	
	}

	return y * 1.0;
};