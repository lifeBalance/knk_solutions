/*
**	Exercise #02
*/

#include <stdio.h>

int		main(void)
{
	char a[] = {'a', 'b', 'c', 'd'};
	char *low;
	char *high;
	char *middle;

	low = &a[0];
	high = &a[3];
	middle = (high - low) / 2 + low;
	printf("middle: %c\n", *middle);
	return (0);
}
