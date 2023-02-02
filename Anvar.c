
#include <stdio.h>

int main(void)
{
	int a[100];
	int b = 65;
	int *c;
	c = a;

	for( int i = 0; i < 26; i++)
	{
	    *(c + i) = (b + i);
	    printf( "%-3c", *(c+i) );
	}
	puts("");
}
