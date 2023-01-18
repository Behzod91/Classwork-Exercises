#include <stdio.h>

int main(void)
{
	int n, k = 0, c = 1 ;

	scanf( "%d", &n );

	while( n > c )
	{
		c *= 3;
		k++;
	}

	if( n == c )
	{
		printf( "%d 3 ning %d-dajasi\n", n, k );
	}
	else{
		printf( "%d 3 ning dajasi emas!\n", n );
	}

	return 0;
} // end main
