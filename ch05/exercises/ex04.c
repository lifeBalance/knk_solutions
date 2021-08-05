/*
**	Exercise #4
*/

#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 1;
	j = 100;
	printf("(a) %d\n", (i > j) - (i < j));	/* 0 - 1 == -1 */

	i = 1;
	j = 1;
	printf("(b) %d\n", (i > j) - (i < j));	/* 0 - 0 == 0 */

	i = 100;
	j = 1;
	printf("(c) %d\n", (i > j) - (i < j));	/* 1 - 0 == 1 */
	return (0);
}
