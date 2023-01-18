/*
*	Iteration Control Structure => Series exercise
*	Behzod Hamrayev
*/


#include <stdio.h>

int main()
{
	int n;
	puts( "Enter any natural number" ); // ixtiyoriy natural son kiriting
	scanf( "%d", &n );

	float sum = 0; // natural sonlar yig'indisi
	int k = 1; // oshuvchi o'zgaruvchi
	// computation
	while( sum < n )
	{
		sum += (1.0/k);
		k++;
	}
	// output result
	printf( "k = %d, sum = %f\n", k, sum);

	return 0;
}
