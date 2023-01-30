
#include <stdio.h>

void sum( int *x, int *y ); // function prptotype/ declaration

int main( void )
{
	int a, b;

	scanf( "%d %d", &a, &b );

	sum( &a, &b ); // function call/ a va b o'zgaruvchilarning manzillari beriladi

	return 0;
}


void sum( int *x, int *y ) // function definition
{
	printf( "Sum = %d", *x + *y );
} // end function

/*
int sum1( int *x, int *y ) // function definition
{
	return (*x + *y );
} // end function
*/

/*
void sum2( int *x, int *y, int *sum ) // function definition
{
	sum = (*x + *y );
} // end function
*/
