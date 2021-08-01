/*
** Project 06 (Page 34)
*/

#include <stdio.h>

int main(void)
{
	float x;
	float result;

	printf("Enter an x value: ");
	scanf("%f", &x);
	result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f\n", result);
	result = -6 + x * (7 + x * (-1 + x * (-5 + x * (2 + x * 3))));
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f\n", result);

	return (0);
}
