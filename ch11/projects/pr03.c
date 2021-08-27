/*
** Project 03
*/

#include <stdio.h>

void reduce(int numerator, int denominator,
			int *reduced_numerator,
			int *reduced_denominator);

int		main(void)
{
	int numer;
	int denom;
	int reduced_numer;
	int reduced_denom;

	printf("Enter a fraction: ");
	scanf("%d /%d", &numer, &denom);
	reduce(numer, denom, &reduced_numer, &reduced_denom);
	printf("In lowest terms: %d/%d\n", reduced_numer, reduced_denom);
	return (0);
}

void reduce(int numerator, int denominator,
			int *reduced_numerator,
			int *reduced_denominator)
{
	int m;
	int n;
	int rem;

	m = numerator;
	n = denominator;
	while (n > 0) {
		rem = m % n;
		m = n;
		n = rem;
	}
	*reduced_numerator = numerator / m;
	*reduced_denominator = denominator / m;
}
