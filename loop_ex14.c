#include <stdio.h>

int main()
{
	int n;
	puts( "Enter any natural number" ); // ixtiyoriy natural son kiriting
	scanf( "%d", &n );

	float sum = 0; // natural sonlar yig'indisi
	int k = 1; // oshuvchi o'zgaruvchi
	while( sum < n )
	{
		sum += ((float)1/(float)k);
		k++;
	}
	printf( "k = %d, sum = %f\n", k, sum);

	return 0;
}
