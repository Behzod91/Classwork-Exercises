
#include <stdio.h>

int main( void )
{
	int a; // 4 byte // declaration of variable, tanishtirish
	char c; // 1 byte
	float f; // 4 byte
	double d; // 8 byte
	long int l; // 8 byte

	//printf( "%lu\n", sizeof( int ));

	int *countPtr; // declaration, right to left
	int * A = NULL;
	int* b;
	int count;
	//char c;
	//b = &c; // NO, mumkin emas!!!
	countPtr = &count;

	count = 4;

	printf( "%p\n", &count );
	printf( "%lu\n", sizeof( countPtr ));
	printf( "%p\n", &countPtr );
	printf( "%d\n", *countPtr ); // bu yerda countda joylashgan qiymatni ko'rsatadi
	*countPtr = 10; // bilvosita o'zgartirilish
	printf( "%d\n", *countPtr ); // bu yerda countda joylashgan qiymatni ko'rsatadi

	printf("\n\nShowing that * and & are complements of "
		"each other\n&*countPtr = %p\tbu manzil"
		"\n*&countPtr = %p\t bu qiymat \n", &*countPtr, *&countPtr);

	return 0;
}
