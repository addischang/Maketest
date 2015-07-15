#include<stdio.h>



/* This is the test for struct. */
typedef struct family
{
	int age;
	float weight;
}Taiwan, China;


// The main loop
int main( void )
{
	China Wang, Sun;
 	Taiwan Chen, Lin; 

 	Wang.weight = 67.8;
 	Wang.age = 29;

 	Sun.weight = 71.5;
 	Sun.age = 32;

	Chen.weight = 75.6;
	Chen.age = 25;

	Lin.weight = 45.7;
 	Lin.age = 18;

	printf( " %5d  %10.5f \n", Wang.age, Wang.weight );
	printf( " %5d  %10.5f \n", Sun.age, Sun.weight );
	printf( " %5d  %10.5f \n", Chen.age, Chen.weight );
	printf( " %5d  %10.5f \n", Lin.age, Lin.weight );
	return 0;
};





