
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void  printString( char * strPtr );
void stringCopy(const char *s1, char * const s2 );

int main(void)
{
	char *str1 = "Tohirjon Mahkamov"; //"cHaraCterS and $23.67"; // declaration
	char str2[20];
	stringCopy( str1, str2 ); // calling
	printString( str2 );

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

void stringCopy(const char * const s1, char * const s2 )
{
	for( int i = 0; ( s2[i] = s1[i] ) != '\0'; i++ )
	{
		//
	}

	/*for( ; ( *s2 = *s1 ) != '\0'; ++s1, ++s2 )
	{
		//
	}*/
}

