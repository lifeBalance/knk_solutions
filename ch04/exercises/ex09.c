/*
** Exercise #9
*/

#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;

	i = 7;
	j = 8;
	i *= j + 1;
	printf("(a) %d %d\n", i, j); /* 63 8 */
	i = j = k = 1;
	i += j += k;
	printf("(b) %d %d %d\n", i, j, k); /* 3 2 1 */
	i = 1;
	j = 2;
	k = 3;
	i -= j -= k;
	printf("(c) %d %d %d\n", i, j, k); /* 2 -1 3 */
	i = 2;
	j = 1;
	k = 0;
	i *= j *= k;
	printf("(d) %d %d %d\n", i, j, k); /* 0 0 0 */
	return (0);
}
