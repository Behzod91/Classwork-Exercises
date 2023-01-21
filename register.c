#include <stdio.h>

int main()
{
	register int i = 10;
	int *a = &i;
	printf( "%d\n", *a );
	getchar();

	return 0;
}
