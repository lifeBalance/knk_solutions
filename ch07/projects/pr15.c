/*
**	Programming project #15
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	short	n;
	short	i;
	// short	fact;
	// int	fact;
	// long	fact;
	// long long	fact;
	// float	fact;
	// double	fact;
	long double	fact;

	printf("Enter a positive integer: ");
	scanf("%hd", &n);
	i = n;
	fact = 1;
	while (i > 1) {
		fact *= i;
		i--;
	}
	printf("Factorial of %hd: %Lf\n", n, fact);
	return (0);
}
