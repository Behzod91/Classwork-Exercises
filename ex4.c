#include <stdio.h>
#include <stdbool.h>

bool isEven( int x );

int main()
{
	int n;

	puts("Enter natural number: ");
	scanf( "%d", &n );

	bool a = isEven(n);
	if( a )
	{
		printf( "Entered number is Odd\n" );
	}else{
		printf( "Entered number is Even\n" );
	}

	return 0;
}

bool isEven( int x )
{
	return x % 2;
}
