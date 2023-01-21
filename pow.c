#include <stdio.h>

int power( int a, int b)
{
        while( b > 0 )
	{
                a *= a;
                --b;
        }
        return a;
}

int x, y;
int main(void)
{
        scanf("%d %d" , &x ,&y);
        printf("%d\n", power(x,y));
}
