#include<stdio.h>
#include<stdlib.h>
#include"tayler.h"

// The main loop
int main()
{

	// 
	float a, x, y, z;
	int n;

	//
	n = 10;
	a = 0.15;
    x = sins( a, n );
    y = coss( a, n );
    z = tans( a, n );
	
	//
	printf( "sin(%10.6f)=%10.6f \n", a, x );
	printf( "cos(%10.6f)=%10.6f \n", a, y );
	printf( "tan(%10.6f)=%10.6f \n", a, z );
	
	//
	return 0;
}
