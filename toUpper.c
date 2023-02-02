
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void converToUpperCase( char *str );

int main(void)
{
	char str1[] = "salom"; //"cHaraCterS and $23.67"; // declaration

	printf( "%s\n", str1 );
	converToUpperCase( str1 );
	printf( "%s\n", str1 );

	return 0;
}

void converToUpperCase( char *strPtr )
{
	while( *strPtr != '\0' )
	{
		*strPtr = *strPtr - 32; //toupper(*strPtr);
		strPtr++;
	}
}

