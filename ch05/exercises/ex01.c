/*
**	Exercise #1
*/

#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;

	i = 2;
	j = 3;
	k = i * j == 6;
	printf("(a) %d\n", k);	// k = (i * j) == 6; k == 1
	i = 5;
	j = 10;
	k = 1;
	printf("(b) %d\n", k > i < j);	// (k > i) < j; 0 < 10; 1
	i = 3;
	j = 2;
	k = 1;
	printf("(c) %d\n", i < j == j < k);	// (i < j) == (j < k); 0 == 0; 1
	i = 3;
	j = 4;
	k = 5;
	printf("(d) %d\n", i % j + i < k);	// 3 + 3 < 5; 0
	return (0);
}
