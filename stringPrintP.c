
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printString( char * str );

int main(void)
{
	char str1[] = "Tohirjon Mahkamov"; //"cHaraCterS and $23.67"; // declaration

	 printString( str1 );

	return 0;
}

void  printString( char * strPtr )
{
	/*while( *strPtr != '\0' )
	{
		printf( "%c", *strPtr );
	}*/
	for( ; *strPtr != '\0'; ++strPtr )
	{
		printf( "%2c", *strPtr );
	}
	puts("");
}

