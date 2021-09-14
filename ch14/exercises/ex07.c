/*
**	Exercise #7
*/

#include <stdio.h>

#define unsigned_long unsigned long
#define GENERIC_MAX(type)		\
type type##_max(type x, type y)	\
{								\
	return x > y ? x : y;		\
}

int main(void)
{
	GENERIC_MAX(long);
	printf("%ld\n", long_max(3, 4));
	GENERIC_MAX(unsigned_long);
	printf("%ld\n", unsigned_long_max(55, 11));
	return (0);
}
