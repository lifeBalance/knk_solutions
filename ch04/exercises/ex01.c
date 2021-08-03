/*
** Exercise #1
*/

#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;

	i = 5;
	j = 3;
	printf("(a) %d %d\n", i / j, i % j); // 1 2
	i = 2;
	j = 3;
	printf("(b) %d\n", (i + 10) % j); // 0
	i = 7;
	j = 8;
	k = 9;
	printf("(c) %d\n", (i + 10) % k / j); // 1
	i = 1;
	j = 2;
	k = 3;
	printf("(d) %d\n", (i + 5) % (j + 2) / k); // 0
	return (0);
}
