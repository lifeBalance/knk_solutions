/*
**	Exercise #9
*/

#include <stdio.h>

int main(void)
{
	int i;

	i = 10;
	while (i /= 2, i >= 1)
		printf("%d ", i++);
	return (0);
}
