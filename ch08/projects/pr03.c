/*
**	Programming project #3
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool	digit_seen[10];
	int		digit;
	long	n;
	long	cpy;

	do
	{
		printf("Enter a number: ");
		scanf("%ld", &n);
		if (n <= 0)
			return (0);
		cpy = n;
		for (int i = 0; i < 10; i++)
			digit_seen[i] = false;
		while (n > 0) {
			digit = n % 10;
			if (digit_seen[digit])
				break ;
			digit_seen[digit] = true;
			n /= 10;
		}
		if (n > 0)
			printf("Repeated digit\n\n");
		else
			printf("No repeated digit\n\n");
	} while (cpy > 0);
	return (0);
}
