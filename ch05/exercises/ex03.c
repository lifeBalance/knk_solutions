/*
**	Exercise #3
*/

#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;

	i = 3;
	j = 4;
	k = 5;
	printf("(a) %d\n", i < j || ++j < k);	// 1 || ...; 1 (short-circuit)
	printf("(a) %d %d %d\n", i, j, k);		// 3 4 5

	i = 7;
	j = 8;
	k = 9;
	printf("(b) %d\n", i - 7 && j++ < k);	// 0 && ...; 0 (short-circuit)
	printf("(b) %d %d %d\n", i, j, k);		// 7 8 9

	i = 7;
	j = 8;
	k = 9;
	printf("(c) %d\n", (i = j) || (j = k));	// 8 || ...; 1 (short circuit)
	printf("(c) %d %d %d\n", i, j, k);		// 8 8 9

	i = 1;
	j = 1;
	k = 1;
	printf("(d) %d\n", ++i || ++j && ++k);	// 2 || ...; 1 (short circuit)
	printf("(d) %d %d %d\n", i, j, k);		// 2 1 1
	return (0);
}
