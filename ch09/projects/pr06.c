/*
**	Programming project #6
*/

#include <stdio.h>

double solve(double x);
double power(double x, double exp);

int main(void)
{
	double x;

	printf("Enter a value for x: ");
	scanf("%lf", &x);
	printf("Result: %.2lf\n", solve(x));
	return (0);
}

double solve(double x)
{
	return ((3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - (power(x, 2)) + (7 * x) - 6);
}

double power(double x, double exp)
{
	double power;

	power = 1;
	if (exp == 0)
		return (1);
	while (exp)
	{
		power *= x;
		exp--;
	}
	return (power);
}
