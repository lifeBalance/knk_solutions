/* Finds the largest and smallest elements in an array. */

#include <stdio.h>

#define N 10

void	maxmin(int b[], int n, int *max, int *min);

int		main(void)
{
	int b[N];
	int i;
	int big;
	int small;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &b[i]);
	maxmin(b, N, &big, &small);
	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);
	return (0);
}

void	maxmin(int a[], int n, int *max, int *min)
{
	int i;

	*max = a[0];
	*min = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > *max)
			*max = a[i];
		if (a[i] < *min)
			*min = a[i];
	}
}
