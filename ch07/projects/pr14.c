/*
**	Programming project #14
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	double	x;
	double	y;
	double	avg;

	printf("Enter a positive number: ");
	scanf("%lf", &x);
	y = 1.0;
	avg = (y + (x / y)) / 2; 
	while (fabs(avg - y) >= 0.00001 * y) {
		y = avg;
		avg = (y + (x / y)) / 2; 
	}
	printf("Square root: %lf\n", y);
	return (0);
}
