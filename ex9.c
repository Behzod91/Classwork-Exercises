#include <stdio.h>

int main(void)
{
	int n, E = 1, k = 0;

	scanf( "%d", &n );

	while( E <= n )
	{
		E *= 3;
		k++;
	}

	printf( "%d\n", k );

	return 0;
} // end main
