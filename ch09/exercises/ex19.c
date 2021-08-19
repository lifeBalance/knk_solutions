/*
**	Exercise #19
*/

#include <stdio.h>

void pb(int n);

int main(void)
{
	pb(8);		// 1000
	putchar('\n');
	pb(11);		// 1011
	putchar('\n');
	return (0);
}

void pb(int n)
{
    if (n != 0)
	{
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
