/*
**	Exercise #05
*/

#include <stdio.h>

int num_digits(int n);

int main(void)
{
	int num;

	do {
		printf("Enter a number (negative to quit): ");
		scanf("%d", &num);
		printf("%d has %d digits.\n", num, num_digits(num));
	} while (num >= 0);
	return (0);
}

int num_digits(int n)
{
	int digits;

	if (n < 0)
		n *= -1;
	else if (n == 0)
		return (1);
	digits = 0;
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}
