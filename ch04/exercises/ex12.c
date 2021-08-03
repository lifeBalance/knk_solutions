/*
** Exercise #12
*/

#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 5;
	j = ++i * 3 - 2;
	printf("(a) %d %d\n", i, j);	// 6 16
	i = 5;
	j = 3 - 2 * ++i;
	printf("(b) %d %d\n", i, j);	// 6 -9
	i = 7;
	j = 3 * i-- + 2;
	printf("(c) %d %d\n", i, j);	// 6 23
	i = 7;
	j = 3 * --i + 2;
	printf("(c) %d %d\n", i, j);	// 6 20
	return (0);
}
