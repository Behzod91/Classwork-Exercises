/*
*	Behzod Hamrayev
*
*/

#include <stdio.h>

int main()
{
	int n;
	printf( "%s", "Enter any positive integer: " );
	scanf( "%d", &n );

	for( int i = 0; i < n; i++ )
	{
		for( int j = 0; j < n - i; j++ )
		{
			printf( "%c", '*' );
		}
		puts("");
	}
	puts("");

	return 0;
}
