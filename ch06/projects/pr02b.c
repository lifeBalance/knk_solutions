/*
**	Programming project #2b
*/

#include <stdio.h>

int main(void)
{
	int m;
	int n;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);
	while (m != n) {
		if (m > n)
			m -= n;
		else
			n -= m;
	}
	printf("Greatest common divisor: %d\n", m);
	return (0);
}
