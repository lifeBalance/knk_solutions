/*
**	Exercise #10
*/

#include <stdio.h>

int largest(int size, int arr[]);
int average(int size, int arr[]);
int positive(int size, int arr[]);

int main(void)
{
	int arr[] = {1, 25, 3, -6, 2};
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("Largest element: %d\n", largest(size, arr));
	printf("Average of all elements: %d\n", average(size, arr));
	printf("Positive elements: %d\n", positive(size, arr));
	return 0;
}

int largest(int size, int arr[])
{
	int max = arr[0];
	int i;

	i = 0;
	while (i < size)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	return (max);
}

int average(int size, int arr[])
{
	int sum = 0;
	int i;

	i = 0;
	while (i < size)
	{
		sum += arr[i];
		i++;
	}
	return (sum / size);
}

int positive(int size, int arr[])
{
	int count = 0;
	int i;

	i = 0;
	while (i < size)
	{
		if (arr[i] > 0)
			count++;
		i++;
	}
	return (count);
}