/*
**	Exercise #7
*/

#include <stdio.h>

int main(void)
{
	int i;

	i = -17;
	printf("%d\n", i >= 0? i : -i); // prints 17
	i = 17;
	printf("%d\n", i >= 0? i : -i); // prints 17
	return (0);
}
