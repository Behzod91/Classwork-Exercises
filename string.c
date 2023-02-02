
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[5]; // declaration
	scanf( "%4s", str1 );

	char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

	char str3[] = "Hello";
	printf("Siz \"%s\"ni kiritdingiz!\n", str1 );
//	printf( "%lu\n", sizeof(str1) / sizeof(*str1) );
	printf("%s\t", str2 );
	printf( "with sizeof() => %lu\n", sizeof(str2) / sizeof(*str2) );
	printf( "with strlen() => %lu\n", strlen(str2) );
	printf("%s\n", str3 );
	printf( "%lu\n", sizeof(str3) / sizeof(*str3) );


	return 0;
}
