/*
**	Exercise #11
*/

#include <stdio.h>

int find_largest(int a[], int n);

int main(void)
{
	int a[] = {250, 55, 6, 300, 1};
	int size = sizeof(a) / sizeof(a[0]);

	printf("Largest: %d\n", find_largest(a, size));
	return (0);
}

int find_largest(int a[], int n)
{
	int max;
	int *p;

	max = *a;
	for (p = a; p < a + n; p++)
		max = *p > max ? *p : max;
	return (max);
}
