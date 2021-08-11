/*
**	Programming project #3
*/

#include <stdio.h>

int main(void)
{
	double	n;
	double	sum;

	n = 0;
	sum = 0;
	printf("This program sums a series of numbers.\n");
	printf("Enter numbers (0 to terminate): ");
	do {
		scanf("%lf", &n);
		sum += n;
	} while (n != 0);
	printf("The sum is: %lf\n", sum);
	return (0);
}
