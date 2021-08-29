/*
**	Exercise #05
*/

#include <stdio.h>

int main(void)
{
	int a[] = {234, 55, -6};
	int *p;

	p = a;
	// printf("(a) %d\n", p == a[0]); // Illegal
	printf("(b) %d\n", p == &a[0]);
	printf("(c) %d\n", *p == a[0]);
	printf("(d) %d\n", p[0] == a[0]);
	return (0);
}

