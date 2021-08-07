/*
**	Sums a series of integers using a do-while loop.
*/
#include <stdio.h>

int main(void)
{
	int n;
	int sum;

	n = 0;
	sum = 0;
	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");
	do {
		scanf("%d", &n);
		sum += n;
	} while (n != 0);
	printf("The sum is: %d\n", sum);
	return (0);
}
