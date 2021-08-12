/*
**	Exercise #05
*/

#include <stdio.h>

#define SIZE (sizeof(fib) / sizeof(fib[0]))

int main(void)
{
	int	fib[40] = {[0] = 1, [1] = 1};

	for (int i = 2; i < SIZE; i++)
		fib[i] = fib[i - 2] + fib[i - 1];
	printf("The first 40 fibonacci numbers:\n");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", fib[i]);
	printf("\n");
	return (0);
}
