#include <stdio.h>

int main(void)
{
	float a;
	float b;
	//float c;

	puts( "Haqiyqiy sonlarni kiriting: " );
	scanf( "%f %f", &a, &b );

	a = a + b;
	b = a - b;
	a = a - b;

	printf( "a = %f\nb = %f\n", a, b );

	return 0;
}
