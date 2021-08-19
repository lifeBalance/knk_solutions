/*
**	Exercise #14
*/

#include <stdio.h>
#include <stdbool.h>

#define N 4

bool has_zero(int a[], int n);

int main(void)
{
	int arr[N] = {10, 10, 10, 0};

	printf("Does the array have a zero? ");
	if (has_zero(arr, N))
		printf("true.\n");
	else
		printf("false.\n");
	return (0);
}

bool has_zero(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (a[i] == 0)
			return true;
	return false;
}