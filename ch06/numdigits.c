/*
**	Calculates the number of digits of an integer using a do-while loop.
*/
#include <stdio.h>

int main(void)
{
	int n;
	int cpy;
	int digits;

	digits = 0;
	printf("Enter a non-negative number integer: ");
	scanf("%d", &n);
	cpy = n;
	do {
		n /= 10;
		digits++;
	} while (n > 0);
	printf("The number %d has %d digits.\n", cpy, digits);
	return (0);
}
