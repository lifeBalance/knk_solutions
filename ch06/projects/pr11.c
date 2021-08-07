/*
**	Programming project #11
*/

#include <stdio.h>

int main(void)
{
	float	n;
	float	e;
	float	fact;

	printf("Enter a number to approximate e: ");
	scanf("%f", &n);
	e = 1;
	while (n >= 1) {
		fact = 1;
		for (int i = 1; i <= n; i++)
			fact *= i;
		e += 1/fact;
		n--;
	}
	printf("e = %f\n", e);
	return (0);
}
