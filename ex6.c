/*
*	autor: Behzod Hamrayev
*/
#include <stdio.h>

int main(void)
{
	// declaration
	int M = 1, n;
	// Input value
	scanf( "%d", &n );

	//M = n;
	// computation
	while( n > 0 )
	{
		M *= n;
		n -= 2;
	}
	// output
	printf( "%d\n", M );

	return 0;
} // end main
