#include<stdio.h>

// The main loop
int main()
{
	// Declare function areacalculator as float 
	float areacalculator( float );

	// Declare variable a, b, c as float 
 	float a, b, c, r, area;
	r = 15.5;
	a = 12.4;
	b = 18.5;
	c = a + b;


	// Print the summation of a & b.
	printf( " %f \n ", c );

	// Print the script " Hello World ! "
	printf( " Hello World ! \n " );

	// Call the subfunction area
	area = areacalculator( r );
	printf(" %f \n ", area );

	// Call the subfunction thankyou()
	thankyou( );

	//
	return 0;
}

float areacalculator( float r )
{
	// Declare variable answer as float.
	float answer;

	// Compute the area of a circle which radious as radious.
	answer = 3.14 * ( r * r );

	//
	return answer; 
}
