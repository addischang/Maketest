#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// The main loop.
int main( void )
{
	int i, j;
	float phi, the, psi;
	float deg2rad( float );

	// 
	phi = deg2rad( 16 );
	the = deg2rad( 45 );
	psi = deg2rad( 12 );

	// 
	float mx[ 3 ][ 3 ] = { { 1.0, 0.0, 0.0 }, { 0.0, cos( phi ), sin( phi ) }, { 0.0, -sin( phi ), cos( phi ) } };
	float my[ 3 ][ 3 ] = { { cos( the ), 0.0, -sin( the ) }, { 0.0, 1.0, 0.0 }, { sin( the ), 0.0, cos( the ) } };
	float mz[ 3 ][ 3 ] = { { cos( psi ), sin( psi ), 0.0 }, { -sin( psi ), cos( psi ), 0.0 }, { 0.0, 0.0, 1.0 } };

	// 
	printf( "MX is \n" );
	for( i = 0; i < 3; i++ )
	{
		for( j = 0; j < 3; j++ )
		{
			printf( "%8.4f", mx[ i ][ j ] );
		}
		printf( "\n" );
	}

	// 
	printf( "MY is \n" );
	for( i = 0; i < 3; i++ )
	{
		for( j = 0; j < 3; j++ )
		{
			printf( "%8.4f", my[ i ][ j ] );
		}
		printf( "\n" );
	}

	// 
	printf( "MZ is \n" );
	for( i = 0; i < 3; i++ )
	{
		for( j = 0; j < 3; j++ )
		{
			printf( "%8.4f", mz[ i ][ j ] );
		}
		printf( "\n" );
	}

	return 0;
	
}

// Converge degree to radius.
float deg2rad( float deg )
{
	// M_PI had defined in <math.h>
	float rad = deg * M_PI / 180.0;
	return rad; 
}


