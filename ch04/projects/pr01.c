/*
** Project #1
*/

#include <stdio.h>

int main(void)
{
	int n;
	int tens;
	int ones;

	printf("Enter a two-digits integer: ");
	scanf("%d", &n);
	tens = n / 10;
	ones = n % 10;
	printf("Your number reversed: %d%d\n", ones, tens);
	return (0);
}
