#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{

	puts("\n\n");
	printf("\tThe number of bits in a byte %d\n\n", CHAR_BIT);

	printf("\tThe MINimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
	printf("\tThe MAXimum value of SIGNED CHAR = %d\n", SCHAR_MAX);
	printf("\tThe MAXimum value of UNSIGNED CHAR = %d\n\n", UCHAR_MAX);

	printf("\tThe MINimum value of CHAR = %d\n", CHAR_MIN);
	printf("\tThe MAXimum value of CHAR = %d\n\n", CHAR_MAX);

	printf("\tThe MINimum value of SHORT INT = %hd\n", SHRT_MIN);
	printf("\tThe MAXimum value of SHORT INT = %hd\n", SHRT_MAX);
	printf("\tThe MAXimum value of UNSIGNED SHORT INT = %hu\n\n", USHRT_MAX);

	printf("\tThe MINimum value of INT = %d\n", INT_MIN);
	printf("\tThe MAXimum value of INT = %d\n", INT_MAX);
	printf("\tThe MAXimum value of UNSIGNED INT = %u\n\n", UINT_MAX);

	printf("\tThe MINimum value of LONG = %ld\n", LONG_MIN);
	printf("\tThe MAXimum value of LONG = %ld\n", LONG_MAX);
	printf("\tThe MAXimum value of UNSIGNED LONG INT = %lu\n\n", ULONG_MAX);

	printf("\tThe MAXimum value of FLOAT = %.10e\n", FLT_MAX);
	printf("\tThe MINimum value of FLOAT = %.10e\n\n", FLT_MIN);

	printf("\tThe MAXimum value of DOUBLE = %.10e\n", DBL_MAX);
	printf("\tThe MINimum value of DOUBLE = %.10e\n\n", DBL_MIN);

	printf("\tThe MAXimum value of LONG DOUBLE = %.10Le\n", LDBL_MAX);
	printf("\tThe MINimum value of LONG DOUBLE = %.10Le\n\n", LDBL_MIN);


	return 0;
}

	/*
	printf( "The size of \"char\" data type : %zu\n", sizeof(char) );
	printf( "The size of \"unsigned char\" data type : %zu\n", sizeof(unsigned char) );
	printf( "The size of \"short int\" data type : %zu\n", sizeof(short int) );
	printf( "The size of \"unsigned short int\" data type : %zu\n", sizeof(unsigned short int) );
	printf( "The size of \"int\" data type : %zu\n", sizeof(int) );
	printf( "The size of \"unsigned int\" data type : %zu\n", sizeof(unsigned int) );
	printf( "The size of \"long int\" data type : %zu\n", sizeof(long int) );
	printf( "The size of \"unsigned long int\" data type : %zu\n", sizeof(unsigned long int) );
	printf( "The size of \"long long int\" data type : %zu\n", sizeof(long long int) );
	printf( "The size of \"unsigned long long int\" data type : %zu\n", sizeof(unsigned long long int) );
	printf( "The size of \"float\" data type : %zu\n", sizeof(float) );
	printf( "The size of \"double\" data type : %zu\n", sizeof(double) );
	printf( "The size of \"long double\" data type : %zu\n", sizeof(long double) );
	*/
