/*
**	Programming project #3
*/

#include <stdio.h>

int main(void)
{
	int denom;
	int numer;
	int rem;
	int m;
	int n;

	printf("Enter a fraction: ");
	scanf("%d /%d", &numer, &denom);
	m = numer;
	n = denom;
	while (n > 0) {
		rem = m % n;
		m = n;
		n = rem;
	}
	printf("In lowest terms: %d/%d\n", numer / m, denom / m);
	return (0);
}
