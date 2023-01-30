
#include <stdio.h>
 
/*
void show_mem_rep(char *start, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf(" %.2x", start[i]);
	}

	printf("\n");
}
*/ 

void printNumber( int n );

int main(void)
{
//	int i = 0x01234567;

//	show_mem_rep((char *)&i, sizeof(i));
//	getchar();

	for( int i = 0; i < 10; i++ )
	{
		switch( i )
		{
			case 0:
				printNumber(i);
				break;
			case 1:
				printNumber(i);
				break;
		}// end switch
	}// end for

	return 0;
} // end main

void printNumber( int n )
{
	printf( " %3d\n", (n + 1) * 2 );
}
