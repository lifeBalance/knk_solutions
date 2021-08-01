/*
** Project 05 (Page 34)
*/

#include <stdio.h>

int main(void)
{
	float x;
	float result;

	printf("Enter an x value: ");
	scanf("%f", &x);
	// new-line characters (or any white-space)
	// don't affect arithmetic operations
	result = 3 * (x * x * x * x * x)
			   + (2 * (x * x * x * x))
			   - (5 * (x * x * x))
			   - (x * x)
			   + (7 * x)
			   - 6;
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f\n", result);

	return (0);
}
