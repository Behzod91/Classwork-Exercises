#include <stdio.h>

int main(void)
{
	int i = 0;
	L:

	if( i <= 5 )
	{
		printf( "%d ", ++i );
		goto L;
	}

	puts( "\ni is greater than 5\n" );

	return 0;
}
/*
#include<stdio.h>  
void sum();  
void main()  
{  
	printf("\nGoing to calculate the sum of two numbers:");  
	sum();  
}  

void sum()  
{  
	int a,b;   
	printf("\nEnter two numbers");  
	scanf("%d %d",&a,&b);   
	printf("The sum is %d",a+b);  
}  
*/



/*
	int num = 25;

	if( num % 2 )
	{
		goto Odd;
	}
	else{
		goto Even;
	}

	Even:
		printf( "%d is Even\n", num );

	return 0;

	Odd:
		printf( "%d is Odd\n", num );

	return 0;
*/
