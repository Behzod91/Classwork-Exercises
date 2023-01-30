
#include <stdio.h>

void swap( int *x, int *y ); // function prptotype/ declaration

int main( void )
{
	int a, b;

	scanf( "%d %d", &a, &b );

	printf( "Before swapping\na = %d\nb = %d\n", a, b);
	swap( &a, &b ); // function call/ a va b o'zgaruvchilarning manzillari beriladi
	printf( "After swapping\na = %d\nb = %d\n", a, b);

	return 0;
}


void swap( int *x, int *y ) // function definition
{
	int temp = *x;
	*x = *y;
	*y = temp;
} // end function
