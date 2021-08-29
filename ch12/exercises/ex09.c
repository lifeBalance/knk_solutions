/*
**	Exercise #09
*/

#include <stdio.h>
#include <stdbool.h>

double inner_product(const double *a, const double *b, int n);
void print_array(int a[], int n);

int main(void)
{
	double a[] = {250, 55, 6};
	double b[] = {2, 1, -5};
	int size = sizeof(a) / sizeof(a[0]);

	printf("%.2lf\n", inner_product(a, b, size));
	return (0);
}

double inner_product(const double *a, const double *b, int n)
{
	const double *p1;
	const double *p2;
	double result;

	result = 0;
	for (p1 = a, p2 = b; p1 < a + n; p1++, p2++)
		result += *p1 * *p2;
	return (result);
}
