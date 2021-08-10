/*
**	Exercise #14
*/

#include <stdio.h>

int main(void)
{
	float	f = 6.1234f;
	float	frac_part;

	frac_part = f - (int)f;
	printf("Fractional part of %f is: %f\n", f, frac_part);
	f = 2147483.1234f;
	frac_part = f - (int)f;
	printf("Fractional part of %f is: %f\n", f, frac_part);
	return (0);
}
