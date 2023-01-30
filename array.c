#include <stdio.h>
#include <stdlib.h> // rand() va srand() funcsyalari uchun
#include <time.h> // time(*) funcsiyasi uchun

#define SIZE 8
#define SIZE_CHAR 25
#define sqr(x) ( (x) * (x) )

int main(void)
{
	srand( time(NULL) );

	int array[SIZE]; // array definition bu yerda 10 array size
	char c[25];

/*	for( int i = 0; i < SIZE; i++ )
	{
		array[i] = sqr(i + 1);
	}

	for( int i = 0; i < SIZE; i++)
	{
		printf( "%d\v", array[i] );
	}
*/
	int a[] = { 1, 2, 3, 5, 8 };
	
	printf( "Array a address = %p\n%ld\t%ld\n%ld\n", a, sizeof(a[0]), sizeof(a), sizeof(a)/sizeof(*a) );
	printf( "%p\t%p\n", a, &a[0] );

	int b[5] = {1, 21}; // declaration/ definition/ initialization

	int include = 25;

	//printf( "%d\n", a[1] + b[1] );
	//printf( "%d\n", include );
/*
	for( int i = 0; i < 5; i++ ) // assigning array elements
	{
		b[i] = 1 + rand() % 10; //2 + 2 * i;
		printf( "\t%d\n", b[i] ); // print out array elements
	}

/*	for( int i = 0; i < 5; i++ )
	{
		printf( "\t%d\n", b[i] );
	}
*/
	return 0;
}
