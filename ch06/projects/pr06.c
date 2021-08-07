/*
**	Programming project #6
*/

#include <stdio.h>

int main(void)
{
	int n;
	int i;

	printf("Enter a number: ");
	scanf("%d", &n);
	i = 1;
	while ((i * i) <= n) {
		if (i % 2 == 0)
			printf("%d\n", i * i);
		i++;
	}
	return (0);
}
