/*
**	Exercise #18
*/

#include <stdio.h>

int gcd(int m,int n);

int main(void)
{
	printf("%d\n", gcd(270, 192));	// 6
	printf("%d\n", gcd(11,  37));	// 1
	return (0);
}

int gcd(int m,int n)
{
	if (n == 0)
		return(m);
	else
		return(gcd(n, m % n));
}
