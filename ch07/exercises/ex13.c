/*
**	Exercise #13
*/

#include <stdio.h>

int main(void)
{
	char	c = '\1';
	short	s = 2;
	int		i = -3;
	long	m = 5;
	float	f = 6.5f;
	double	d = 7.5;

	printf("(a) %d\n", c * i);
	printf("(b) %ld\n", s + m);
	printf("(c) %f\n", f / c);
	printf("(d) %f\n", d / s);
	printf("(e) %f\n", f - d);
	printf("(f) %d\n", (int)f);
	return (0);
}
