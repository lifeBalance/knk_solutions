/*
**	Programming project #1
*/

#include <stdio.h>

void selection_sort(int arr[], int n);

int main(void)
{
	int i;
	int size;
	int arr[] = {2, 14, 3, 7, 9, 1};

	size = sizeof(arr) / sizeof(arr[0]);
	selection_sort(arr, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	putchar('\n');
	return (0);
}

void selection_sort(int arr[], int n)
{
	int i;
	int temp;

	if (n == 0)
		return;
	i = 0;
	while (i < n)
	{
		if (arr[i] > arr[n - 1])
		{
			temp = arr[i];
			arr[i] = arr[n - 1];
			arr[n - 1] = temp;
		}
		i++;
	}
	selection_sort(arr, n - 1);
}
