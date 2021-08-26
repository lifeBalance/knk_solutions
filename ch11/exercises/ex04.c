/*
**	Exercise #04
*/

#include <stdio.h>

void swap(int *p, int *q);

int		main(void)
{
	int		a;
	int		b;

	a = 1;
	b = 42;
	printf("a: %2d, b: %2d\n", a, b);
	swap(&a, &b);
	printf("a: %2d, b: %2d\n", a, b);
	return (0);
}

void swap(int *p, int *q)
{
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}
