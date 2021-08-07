/*
**	Programming project #2
*/

#include <stdio.h>

int main(void)
{
	int m;
	int n;
	int rem;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);
	while (n > 0) {
		rem = m % n;
		m = n;
		n = rem;
	}
	printf("Greatest common divisor: %d\n", m);
	return (0);
}
