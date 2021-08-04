/*
** Project #3
*/

#include <stdio.h>

int main(void)
{
	int hundreds;
	int tens;
	int ones;

	printf("Enter a three-digits integer: ");
	scanf("%1d%1d%1d", &hundreds, &tens, &ones);
	printf("Your number reversed: %d%d%d\n", ones, tens, hundreds);
	return (0);
}
