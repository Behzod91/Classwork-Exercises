#include <stdio.h>

void swapping( int x, int y );

int main()
{
	int n1, n2;
	printf( "Enter two integer: \n" );
	scanf( "%d %d", &n1, &n2 );

	printf( "Before swapping: %d, %d\n", n1, n2 );
	swapping( n1, n2 );

	return 0;
}

void swapping( int x, int y )
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf( "After swapping: %d, %d\n", x, y );
}
