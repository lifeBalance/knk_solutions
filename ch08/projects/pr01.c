/*
**	Programming project #1
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int		digit_freq[10] = {0};
	int		digit;
	int		i;
	long	n;

	printf("Enter a number: ");
	scanf("%ld", &n);
	while (n > 0) {
		digit = n % 10;
		digit_freq[digit]++;
		n /= 10;
	}
	printf("Repeated digit(s): ");
	for (i = 0; i <= 9; i++)
		if (digit_freq[i] > 1)
			printf("%d ", i);
	putchar('\n');
	return (0);
}
