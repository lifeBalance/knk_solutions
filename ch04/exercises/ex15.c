/*
** Exercise #15
*/

#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int result;

	i = 1;
	j = 2;
	i += j;
	printf("(a) %d %d\n", i, j);	/* 3 2 */

	i--;
	printf("(b) %d %d\n", i, j);	/* 2 2 */

	i * j / i;
	printf("(c) %d %d\n", i, j);	/* 2 2 */

	i % ++j;
	printf("(d) %d %d\n", i, j);	/* 2 3 */
	return (0);
}
