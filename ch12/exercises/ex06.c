/*
**	Exercise #06
*/

#include <stdio.h>

int sum_array(const int a[], int n);

int main(void)
{
	int a[] = {234, 55, -6};
	int size = sizeof(a) / sizeof(a[0]);

	printf("Sum: %d\n", sum_array(a, size));
	return (0);
}

int sum_array(const int a[], int n)
{
	int			sum;
	const int	*ptr;

	sum = 0;
	for (ptr = a; ptr < a + n; ptr++)
		sum += *ptr;
	return (sum);
}
