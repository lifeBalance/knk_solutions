/*
**	Exercise #11
*/

#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
	int a[] = {250, 55, 6, 300, 1};
	int size = sizeof(a) / sizeof(a[0]);
	int largest;
	int second_largest;

	find_two_largest(a, size, &largest, &second_largest);
	printf("Largest: %d\n", largest);
	printf("Second largest: %d\n", second_largest);
	return (0);
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	const int *p;

	*largest = *a;
	*second_largest = *(a + 1);
	for (p = a; p < a + n; p++)
		if (*p > *largest)
		{
			*second_largest = *largest;
			*largest = *p;
		} else if (*p > *second_largest && *p < *largest)
			*second_largest = *p;
}
