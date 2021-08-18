/*
**	Exercise #06
*/

#include <stdio.h>

int digit(int n, int k);

int main(void)
{
	int num;
	int pos;

	do {
		printf("Enter a number (negative to quit): ");
		scanf("%d", &num);
		if (num < 0)
			return (0);
		printf("Enter a position (negative to quit): ");
		scanf("%d", &pos);
		if (pos < 0)
			return (0);
		printf("(%d) Digit at position %d: %d\n\n", num, pos, digit(num, pos));
	} while (num >= 0);
	return (0);
}

int digit(int n, int k)
{
	int ret_val;

	while (k)
	{
		ret_val = n % 10;
		n /= 10;
		k--;
	}
	return (ret_val);
}
