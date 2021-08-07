/*
**	Exercise #07
*/
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 9384; i > 0; i /= 10)
		printf("%d\n", i);
	return (0);
}
