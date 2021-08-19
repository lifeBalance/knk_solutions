/*
**	Exercise #12
*/

#include <stdio.h>

#define N 4

double inner_product(double a[], double b[], int n);

int main(void)
{
	double arr1[] = {1, 2, 3, 4};
	double arr2[] = {1, 2, 3, 4};
	printf("Inner product: %.2lf\n", inner_product(arr1, arr2, N));
	return 0;
}

double inner_product(double a[], double b[], int n)
{
	int i;
	int temp;
	int sum;

	sum = 0;
	i = 0;
	while (i < n)
	{
		temp = a[i] * b[i];
		sum += temp;
		i++;
	}
	return (sum);
}
