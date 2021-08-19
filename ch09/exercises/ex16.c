/*
**	Exercise #16
*/

#include <stdio.h>

int	fact(int n);

int main(void)
{
	printf("Factorial of %d: %d\n", 4, fact(4));
	printf("Factorial of %d: %d\n", 5, fact(5));
	printf("Factorial of %d: %d\n", 6, fact(6));
	return (0);
}

int	fact(int n)
{
	return (n <= 1 ? 1 : n * fact(n - 1));
}
