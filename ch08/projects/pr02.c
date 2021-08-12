/*
**	Programming project #2
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
	printf("Digit:			0	1	2	3	4	5	6	7	8	9\n");
	printf("Occurrences:\t\t");
	for (i = 0; i <= 9; i++)
		printf("%d\t", digit_freq[i]);
	putchar('\n');
	return (0);
}
