/*
**	Exercise #04
*/

#include <stdio.h>
#include <stdbool.h>

#define SIZE (sizeof(weekend) / sizeof(weekend[0]))

int main(void)
{
	bool	weekend[7] = {[0] = true, [SIZE - 1] = true};

	for (int i = 0; i < SIZE; i++)
		printf("weekend[%d] = %d\n", i, weekend[i]);
	return (0);
}
