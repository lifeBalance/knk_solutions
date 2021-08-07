/*
**	Programming project #12
*/

#include <stdio.h>

int main(void)
{
	float	min;
	float	term;
	float	e;
	float	n;
	float	fact;

	printf("Enter a minimum value: ");
	scanf("%f", &min);
	e = 1;
	n = 1;
	while (1) {
		fact = 1;
		for (int i = 1; i <= n; i++)
			fact *= i;
		term = 1 / fact;
		if (term < min)
			break ;
		e += term;
		n++;
	}
	printf("e = %f\n", e);
	return (0);
}
