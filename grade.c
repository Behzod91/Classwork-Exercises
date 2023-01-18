#include <stdio.h>

int main(void)
{
	int aCount = 0;
	int bCount = 0, cCount = 0, dCount = 0, fCount = 0;

	puts( "Enter the letter grade" );
	puts( "Enter the '$' character to end input." );

	int grade;

	while( ( grade = getchar() ) != '$' )
	{
		switch( grade )
		{
			case 'A':
			case 'a':
				++aCount;
				break;
			case 'B':
			case 'b':
				++bCount;
				break;

			case 'C':
			case 'c':
				++cCount;
				break;

			case 'D':
			case 'd':
				++dCount;
				break;

			case 'F':
			case 'f':
				++fCount;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;

			default:
				printf( "%s", "Incorrect grade entered\n" );
				puts( " Enter new grade. " );
				break; 
		} // end switch
	}// end while

	printf( "%d\n", aCount );
	printf( "%d\n", bCount );
	printf( "%d\n", cCount );
	printf( "%d\n", dCount );
	printf( "%d\n", fCount );

	return 0;
}
