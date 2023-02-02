#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void getValues( int array[], int size );
void printArray( int array[], int size );

void bubbleSort( int array[], int size );

int main( void )
{
	srand(time(NULL));
	int array[SIZE];

	int n;
	printf( "%s", "Enter number of elements: " );
	scanf( "%d", &n );

	getValues( array, n );
	printArray( array, n );

	printf( "\n%p\n", array );
	printf( "%p\n", &array[0] );

	int *arrayPtr;
	arrayPtr = array;
	printf( "\n%p\n", arrayPtr+3 );
	printf( "\n%p\n", &array[3] );
	printf( "\n%d\n", *(arrayPtr+3) );
	printf( "\n%d\n", array[3] );

	void *vPtr;

	vPtr = arrayPtr;
	//arrayPtr = &array[0];
//	bubbleSort( array, n );
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

void bubbleSort( int array[], int size )
{
	for( int i = 0; i < size; i++ )
	{
		for( int j = i; j < size - 1; j++ )
		{
			if( array[j] < array[j+1] )
			{
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}// end if statement
		}// end j for loop
	} // steps. end i for loop
	puts("");
}
