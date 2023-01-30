
#include <stdio.h>
#define SIZE 1;

long long unsigned int factorial( unsigned int num );

static int i;
unsigned int m;

int main()
{
	unsigned int n;
	puts( "Enter positive integer: " );
	scanf( "%u", &n );
	puts("====================================" );
	i = SIZE;
	m = SIZE;
	printf( "\n%u! = %llu\n", n, factorial(n) );

	return 0;
}

long long unsigned int factorial( unsigned int num )
{
	printf( "Recursive call %d;\t%u\t%u\n", i++, num, m );
	//printf( "Output of recursive call = %u\n", m );
	m *= num;
	if( num <= 1 )
	{
		return 1;
	}
	else{
		return ( num * factorial( num - 1 ) );
	}
}
