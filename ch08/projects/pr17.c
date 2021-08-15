/*
**	Programming project #17
*/

#include <stdio.h>

#define I 0
#define J 1

int main(void)
{
	int i;
	int j;
	int n;
	int size;
	int prev[2];

	printf("This program creates a magic square of the specified size.\n");
	printf("The size must be a number between 1 and 99.\n");
	printf("Enter size of the magic square: ");
	scanf("%d", &size);

	int arr[size][size];	// VLA
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
			arr[i][j] = 0;
	i = 0;
	j = size / 2;
	n = 1;
	while (n <= (size * size))
	{
		if (arr[i][j] == 0)
		{
			arr[i][j] = n;
			prev[I] = i;
			prev[J] = j;
			n++;
		}
		else
		{
			i = prev[I] + 1;
			j = prev[J];
			continue;
		}
		i = (i - 1 < 0) ? (size - 1) : (i - 1);
		j = (j + 1 > size - 1) ? 0 : (j + 1);
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			printf("  %3d", arr[i][j]);
		putchar('\n');
	}
	return (0);
}
