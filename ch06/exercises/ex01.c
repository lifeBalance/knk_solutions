/*
**	Exercise #01
*/

#include <stdio.h>

int main(void)
{
	int i;

	i = 1;
	while (i <= 128) {
		printf("%d\n", i);
		i *= 2;
	}
	return (0);
}
