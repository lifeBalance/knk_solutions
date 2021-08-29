/*
**	Exercise #08
*/

#include <stdio.h>
#include <stdbool.h>

void store_zeros(int a[], int n);
void print_array(int a[], int n);

int main(void)
{
	int a[] = {234, 55, -6};
	int size = sizeof(a) / sizeof(a[0]);

	print_array(a, size);
	store_zeros(a, size);
	print_array(a, size);
	return (0);
}

void store_zeros(int a[], int n)
{
	int *ptr;

	for (ptr = a; ptr < a + n; ptr++)
		*ptr = 0;
}

void print_array(int a[], int n)
{
	int *ptr;

	for (ptr = a; ptr < a + n; ptr++)
		printf("%4d ", *ptr);
	printf("\n");
}
