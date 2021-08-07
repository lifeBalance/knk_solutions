/*
**	Exercise #12
*/

#include <stdio.h>

int main(void)
{
	int d;
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	for (d = 2; d * d <= n; d++) {
		if (n % d == 0) {
			printf("%d is not prime.\n", n);
			break ;
		}
	}
	if (d * d > n)
		printf("%d is prime.\n", n);
	return (0);
}
