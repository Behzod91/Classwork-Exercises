#include <stdio.h>

int main(void)
{
	int a, b, c;

	puts( "Sonlarni kiriting: " );

	scanf( "%d %d %d", &a, &b, &c );

	int ab, ac;
	if( a > b )
	{
		ab = a - b;
	}else{
		ab = b - a;
	}

	if( a > c )
	{
		ac = a - c;
	}else{
		ac = c - a;
	}

	if( ab < ac )
	{
		printf( "%d\n", ab );
	}else{
		printf( "%d\n", ac );
	}

	return 0;
}
