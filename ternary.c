#include <stdio.h>

int main(void)
{
	int a;
	printf( "%s\n", "Enter any integer" );
	scanf( "%d", &a );

	(a >= 0) ? ( puts("positive number") ) : ( puts("negative number") );

	return 0;
} // end main
