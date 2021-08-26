/*
**	Exercise #03
*/

#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum);

int		main(void)
{
	double	arr[] = {1, 2, 3};
	int		size;
	double	sum;
	double	avg;

	size = sizeof(arr) / sizeof(arr[0]);
	avg_sum(arr, size, &avg, &sum);
	printf("sum: %.2lf, avg: %.2lf\n", sum, avg);
	return (0);
}

void	avg_sum(double a[], int n, double *avg, double *sum)
{
	int i;

	*sum = 0.0;
	for (i = 0; i < n; i++)
		*sum += a[i];
	*avg = *sum / n;
}
