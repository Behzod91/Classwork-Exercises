#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void getValues( int array[], int size );
void printArray( int array[], int size );
void  insertionSorting( int array[], int size );

int main( void )
{
	srand(time(NULL));
	int array[SIZE];

	int n;
	printf( "%s", "Enter number of elements: " );
	scanf( "%d", &n );

	getValues( array, n );
	printArray( array, n );
	insertionSorting( array, n );
//	printArray( array, n );

	return 0;
}

void getValues( int array[], int size )
{
	for( int i = 0; i < size; i++ )
	{
		array[i] = 1 + rand() % 100;
	} // end for loop

}

void printArray( int array[], int size )
{
	for( int i = 0; i < size; i++ )
	{
		printf( " %3d", array[i] );
	}
	puts("");
}

void insertionSorting( int array[], int size )
{
	for( int i = 0; i < size; i++ )
	{
		int min = array[i];
		int k = 0;
		for( int j = i; j < size; j++ )
		{
			if( array[j] < min )
			{
				min = array[j];
				k = j;
			}
		}
		array[k] = array[i];
		array[i] = min;
		printf( " %3d", array[i] );
	} // steps end i for loop
	puts("");
}
