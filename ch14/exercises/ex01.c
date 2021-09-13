/*
**	Exercise #1
*/

#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define MOD4(n) ((n) % 4)
#define LESS_HUNDIE(x, y) (((x) * (y) < 100) ? 1 : 0)

int main(void)
{
	int x;
	int y;
	int n;

	x = 3;
	printf("Cube of %d: %d\n", x, CUBE(x));
	printf("Cube of %f: %f\n", 3.3, CUBE(3.3));		/* fails: floating-point */

	n = 16;
	printf("Remainder %d %% 4: %d\n", n, MOD4(n));

	x = 10;
	y = 9;
	printf("Is %d * %d < 100? %d\n", x, y, LESS_HUNDIE(x, y));
	return (0);
}
