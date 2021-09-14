/*
**	Exercise #9
*/

#include <stdio.h>

#define CHECK(x, y, n)	(((x) >= 0 && (x) < n) && ((y) >= 0 && (y) < n) ? 1 : 0)
#define MEDIAN(x, y, z)	(											\
							((x) >= (y) && (x) <= (z)) ?			\
							(x) :									\
							((y) >= (z) && (y) <= (x)) ? (y) : (z)	\
						)
#define POLYNOMIAL(x)	(		(3 * (x) * (x) * (x) * (x) * (x))	\
							+ 	(2 * (x) * (x) * (x) * (x))			\
							- 	(5 * (x) * (x) * (x))				\
							- 	((x) * (x))							\
							+ 	(7 * (x))							\
							- 	6)

int main(void)
{
	printf("%d\n", CHECK(0, 5, 6)); // 1
	printf("%d\n", CHECK(0, 5, 5)); // 0
	printf("%d\n", MEDIAN(10, 5, 15));  // 10
	printf("%d\n", MEDIAN(1, 500, 10)); // 10
	printf("%d\n", POLYNOMIAL(3)); 		// 762
	return (0);
}
