/*
**	Exercise #5
*/

#include <stdio.h>

int main(void)
{
	int i;

	printf("Statement #1: ");
	i = 10;
	while (i < 10) {
		printf("%d ", i);
		i++;
	}
	printf("\nStatement #2: ");
	i = 10;
	for (; i < 10;) {
		printf("%d ", i);
		i++;
	}
	printf("\nStatement #3: ");
	i = 10;
	do {
		printf("%d ", i);
		i++;
	} while (i < 10);
	printf("\n");
	return (0);
}
