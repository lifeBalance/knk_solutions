/*
** Project 07
*/

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
	int *ptr;

	ptr = a;
	*max = *a;
	*min = *a;
	for (; ptr < a + n; ptr++)
	{
		if (*ptr > *max)
			*max = *ptr;
		if (*ptr < *min)
			*min = *ptr;
	}
}
