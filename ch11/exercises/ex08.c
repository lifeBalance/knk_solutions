/*
**	Exercise #08
*/

#include <stdio.h>

int *find_largest(int a[], int n);

int		main(void)
{
	int arr[] = {11, 99, -23, 44, 1, -100, 2};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Largest: %d\n", *find_largest(arr, size));
	return (0);
}

int *find_largest(int a[], int n)
{
	int idx_largest = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[idx_largest])
			idx_largest = i;
	}
	return (&a[idx_largest]);
}
