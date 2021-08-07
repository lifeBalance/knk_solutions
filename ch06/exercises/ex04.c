/*
**	Exercise #04
*/

#include <stdio.h>

int main(void)
{
	int i;

	printf("Statement #1: ");
	for (i = 0; i < 10; i++)
		printf("%d ", i);
	printf("\nStatement #2: ");
	for (i = 0; i < 10; ++i)
		printf("%d ", i);
	/*
	**	In statement #3, i is incremented in the loop's control expression:
	**		- First i is compared to 10, then is incremented.
	**	That's why the first printed value of i is 1 and the last is 10.
	*/
	printf("\nStatement #3: ");
	for (i = 0; i++ < 10;)
		printf("%d ", i);
	printf("\n");
	return (0);
}
