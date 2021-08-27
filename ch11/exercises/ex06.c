/*
**	Exercise #06
*/

#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);
void selection_sort(int arr[], int n);

int		main(void)
{
	int		arr[] = {159, 2, 3, 44, 178, -2, 15, 1};
	int		largest;
	int		second_largest;
	int		size;

	size = sizeof(arr) / sizeof(arr[0]);
	find_two_largest(arr, size, &largest, &second_largest);
	printf("Largest: %d, Second largest: %d\n", largest, second_largest);
	return (0);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	selection_sort(a, n);
	*largest = a[n - 1];
	*second_largest = a[n - 2];
}

void selection_sort(int arr[], int n)
{
	int idx_min;
	int temp;

	for (int i = 0; i < n; i++)
	{
		idx_min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[idx_min])
				idx_min = j;
		}
		if (idx_min != i)
		{
			temp = arr[i];
			arr[i] = arr[idx_min];
			arr[idx_min] = temp;
		}
	}
}
