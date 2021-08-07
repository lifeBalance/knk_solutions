/*
**	Exercise #10
*/

#include <stdio.h>

int main(void)
{
	int i;

	i = 0;
	while (i < 10) {
		if (i % 2 == 0)
			goto cont;
		printf("%d ", i);
		cont: i++;
	}
	printf("\n");
	i = 0;
	while (i < 10) {
		if (i % 2 == 0)
		{
			i++;
			continue;
		}
		printf("%d ", i);
		i++;
	}
	printf("\n");
	return (0);
}
