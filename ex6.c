#include <stdio.h>

int main(void)
{
	int M = 1, n;

	scanf( "%d", &n );

	//M = n;

	while( n > 0 )
	{
		M *= n;
		n -= 2;
	}

	printf( "%d\n", M );

	return 0;
} // end main
