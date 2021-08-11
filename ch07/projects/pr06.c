/*
**	Programming project #6
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int			i = 0;
	short		s = 0;
	long		l = 0;
	float		f = 0;
	double		d = 0;
	long double	ld = 0;

	printf("In this system, an int takes %ld bytes\n", sizeof(i));
	printf("In this system, a short takes %ld bytes\n", sizeof(s));
	printf("In this system, a long takes %ld bytes\n", sizeof(l));
	printf("In this system, a float takes %ld bytes\n", sizeof(f));
	printf("In this system, a double takes %ld bytes\n", sizeof(d));
	printf("In this system, a long double takes %ld bytes\n", sizeof(ld));
	return (0);
}
