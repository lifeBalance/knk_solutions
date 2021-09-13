/*
**	Exercise #4
*/

#include <stdio.h>

#define AVG(x, y)		(x + y) / 2
#define AREA(x, y)		(x) * (y)
#define AVG_FIX(x, y)	(((x) + (y)) / 2)
#define AREA_FIX(x, y)	((x) * (y))

int main(void)
{
	printf("30 / AVG(%d, %d): %d\n", 4, 2, 30 / AVG(4, 2));				// 2
	printf("30 / AVG_FIX(%d, %d): %d\n", 4, 2, 30 / AVG_FIX(4, 2));		// 10
	printf("90 / AREA(%d, %d): %d\n", 3, 3, 90 / AREA(3, 3));			// 90
	printf("90 / AREA_FIX(%d, %d): %d\n", 3, 3, 90 / AREA_FIX(3, 3));	// 10
	return (0);
}
