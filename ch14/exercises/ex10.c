/*
**	Exercise #10
*/

#include <stdio.h>

#define ERROR(idx) fprintf(stderr, "Range error: index = %d\n", idx)

int main(void)
{
	ERROR(6);	// Range error: index = 6
	ERROR(11);	// Range error: index = 11
	return (0);
}
