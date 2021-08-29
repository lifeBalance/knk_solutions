/*
**	Exercise #10
*/

#include <stdio.h>

int *find_middle(int a[], int n);

int main(void)
{
	int a[] = {250, 55, 6, 3, 1};
	int size = sizeof(a) / sizeof(a[0]);

	printf("Middle: %d\n", *find_middle(a, size));
	return (0);
}

int *find_middle(int a[], int n)
{
	// return (&a[n / 2]);
	return (a + (n / 2));
}
