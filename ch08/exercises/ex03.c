/*
**	Exercise #03
*/

#include <stdio.h>
#include <stdbool.h>

#define SIZE (sizeof(weekend) / sizeof(weekend[0]))

int main(void)
{
	bool	weekend[7] = {true, false, false, false, false, false, true};

	for (int i = 0; i < SIZE; i++)
		printf("weekend[%d] = %d\n", i, weekend[i]);
	return (0);
}
