/*
**	Programming project #7
*/

#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int odd;
	int square;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in the table: ");
	scanf("%d", &n);
	odd = 3;
	for (square = 1, i = 1; i <= n; odd += 2, i++) {
		printf("%10d%10d\n", i, square);
		square += odd;
	}
	return (0);
}
