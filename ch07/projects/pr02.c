/*
**	Programming project #2
*/

#include <stdio.h>

int main(void)
{
	long i;
	int n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in the table: ");
	scanf("%d", &n);
	while (getchar() != '\n') continue;
	for (i = 1; i <= n; i++) {
		printf("%20ld%20ld\n", i, i * i);
		if ((i  % 24) == 0) {
			do {
				printf("Press Enter to continue...");
			} while (getchar() != '\n');
		}
	}
	return (0);
}
