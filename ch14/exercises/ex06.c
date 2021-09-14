/*
**	Exercise #6
*/

#include <stdio.h>
#include <math.h>

#define DISP(f, x)		printf(#f "(%g) = %g\n", x, f(x))
#define DISP2(f, x, y)	printf(#f "(%g, %g) = %g\n", x, y, f(x, y))

int main(void)
{
	DISP(sqrt, 3.0);
	DISP2(fmax, 3.0, 4.5);
	return (0);
}
