/*
** Project #2
*/

#include <stdio.h>

int main(void)
{
	int n;
	int hundreds;
	int tens;
	int ones;

	printf("Enter a three-digits integer: ");
	scanf("%d", &n);
	hundreds = n / 100;
	n %= 100;
	tens = n / 10;
	ones = n % 10;
	printf("Your number reversed: %d%d%d\n", ones, tens, hundreds);
	return (0);
}
