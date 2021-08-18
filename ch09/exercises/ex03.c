/*
**	Exercise #03
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
	int remainder;

	while (m && n)
	{
		remainder = m % n;
		m = n;
		n = remainder;
	}
	if (m == 0)
		return (n);
	if (n == 0)
		return (m);
}
