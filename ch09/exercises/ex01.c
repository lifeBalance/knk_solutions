/*
**	Exercise #01
*/

#include <stdio.h>

double triangle_area(double base, double height);

int main(void)
{
	printf("Area of the triangle: %.2lf\n", triangle_area(4, 3));
	return (0);
}

double triangle_area(double base, double height)
{
	double product;

	product = base * height;
	return product / 2;
}
