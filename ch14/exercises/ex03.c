/*
**	Exercise #3
*/

#include <stdio.h>

#define DOUBLE(x) 2 * x
#define DOUBLE_FIX(x) (2 * (x))

int main(void)
{
	printf("Double of %d: %d\n", 1 + 2, DOUBLE(1 + 2)); 	// 4
	printf("Double of %d: %d\n", 1 + 2, DOUBLE_FIX(1 + 2)); // 6
	printf("4 / DOUBLE(2): %d\n", 4 / DOUBLE(2)); 			// 4
	printf("4 / DOUBLE_FIX(2): %d\n", 4 / DOUBLE_FIX(2));	// 1
	return (0);
}
