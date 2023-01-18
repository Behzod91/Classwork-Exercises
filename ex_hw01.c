#include <stdio.h>

int main(void)
{
	int A, B;
	printf( "%s\n", "Iltimos birinchi musbat butun son kiriting" );
	scanf( "%d", &A );
	printf( "%s\n", "Iltimos ikkinchi musbat butun son kiriting" );
	scanf( "%d", &B );

	/*int C = 0;
	while( A > C )
	{
		C += B;
	}*/
	//int C;
	/*for(int  C = 0; A > C; C += B)
	{
		//
	}*/
	int C = 0;
	do{
		C += B;
	}while(A > C);

	printf( "%d\n", A - (C - B) );

	return 0;
} // end main
