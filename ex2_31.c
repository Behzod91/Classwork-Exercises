#include <stdio.h>

int main(void)
{
	int a;
	printf( "%s", "Ixtiyoriy butun son kiriting: " );
	scanf( "%d", &a);

	if( a >= 0 )
	{
		a++;
		printf( "a = %d, a noldan kichik emas!\n", a );
	}
	else{
		printf( "a = %d, a manfiy son\n", a );
	}

	return 0;
}
