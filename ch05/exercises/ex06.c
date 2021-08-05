/*
**	Exercise #6
*/

#include <stdio.h>

int main(void)
{
	int n;

	n = -9;
	if (n == 1 - 10)	// n == (1 - 10); -9 == -9; true
		printf("(n=-9) n is between 1 and 10\n");
	n = 5;
	if (n == 1 - 10)	// n == (1 - 10); 5 == -9; false
		printf("(n=5) n is between 1 and 10\n");
	n = 15;
	if (n == 1 - 10)	// n == (1 - 10); 15 == -9; false
		printf("(n=15) n is between 1 and 10\n");
	return (0);
}
