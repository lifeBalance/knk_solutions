/*
**	Counts down from a number entered by the user.
*/
#include <stdio.h>

int main(void)
{
	int i;

	printf("Enter a number: ");
	scanf("%d", &i);
	do {
		printf("T minus %d and counting...\n", i);
		i--;
	} while (i > 0);
	return (0);
}
