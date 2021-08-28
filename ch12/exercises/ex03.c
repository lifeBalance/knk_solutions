/*
**	Exercise #03
*/

#include <stdio.h>

#define N 10

void	print_array(int arr[], int n);

int		main(void)
{
	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = &a[0];
	int *q = &a[N - 1];
	int temp;

	while (p < q) {
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}
	print_array(a, N);
	return (0);
}

void	print_array(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}