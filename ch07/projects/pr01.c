/*
**	Programming project #1
*/

#include <stdio.h>

int main(void)
{
	long i;
	long n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in the table: ");
	scanf("%ld", &n);
	for (i = 1; i <= n; i++) {
		printf("%20ld%20ld\n", i, i * i);
	}
	return (0);
}
