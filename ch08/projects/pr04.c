/*
**	Programming project #4
*/

#include <stdio.h>

#define LEN (int)(sizeof(a) / sizeof(a[0]))

int main(void)
{
	int	a[10];
	int	i;

	printf("Enter %d numbers: ", 10);
	for (i = 0; i < LEN; i++)
		scanf("%d", &a[i]);
	printf("In reverse order: ");
	for (i = LEN - 1; i >= 0; i--)
		printf("%d ", a[i]);
	printf("\n");
	return (0);
}
