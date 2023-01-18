#include <stdio.h>

int main(void)
{
	int a = 0, count = 0, sum = 0;

	while( a != -1)
	{
		printf( "%s", "Sonni kiriting " );
		scanf( "%d", &a );
		if( a == -1)
		{
			break;
			// continue;
		}
		sum += a;
		count++;

	}

	printf( "avarage is %.3f\n", ((float)(sum))/(count) );

	printf( "%d, %d\n", sum, count);
	return 0;
} // end main
