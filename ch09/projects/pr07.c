/*
**	Programming project #7
*/

#include <stdio.h>

double	power(int base, int exp);

int		main(void)
{
	int base;
	int exponent;

	printf("Enter a base: ");
	scanf("%d", &base);
	printf("Enter an exponent: ");
	scanf("%d", &exponent);
	printf("%d raised to the power of %d: %.2lf\n", base, exponent, power(base, exponent));
	return (0);
}

double	power(int base, int exp)
{
	double temp;

	if (exp == 0)
		return (1);
	if (exp % 2 == 0)
	{
		temp = power(base, exp / 2);
		return (temp * temp);
	}
	else
		return (base * power(base, exp - 1));
}
