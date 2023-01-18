#include <stdio.h>

int main()
{
	int n;
	puts( "Enter any natural number" ); // ixtiyoriy natural son kiriting
	scanf( "%d", &n );

	int sum = 0; // natural sonlar yig'indisi
	int k = 0; // oshuvchi o'zgaruvchi
	while( sum < n )
	{
		sum += (++k);
	}
	printf( "k = %d, sum = %d\n", k, sum);

	return 0;
}
