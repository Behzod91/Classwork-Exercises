#include <stdio.h>

void sum( int , int ); // function prototype/declaration tanishtirish

void printTenNumbers();

int main(void)
{
	int a;
	int b;

	puts("Enter two integers: ");
	scanf( "%d %d", &a, &b );

	//

	printTenNumbers();
	sum( a, b); // function call, main function sum functionni chaqirayapdi

	return 0;
}

void printTenNumbers()
{
	int i = 1;
	while( i <= 10 )
	{
		printf( "%d\n", i++ );
	}
}

// function definition
void sum( int x, int y)
{
	printf( "Sum = %d\n", x + y ); // 
	//return x + y;
}

//void sum(void);
//float sum(void); // float sum();
//void sum(int x, int y);
//int sum(int x, int y);
